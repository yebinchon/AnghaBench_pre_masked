
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ state; } ;
typedef TYPE_1__ retro_task_t ;
struct TYPE_12__ {int status; int list_size; int list_index; int type_idx; int * http_task; int thumbnail_path_data; int playlist; int system; int playlist_path; } ;
typedef TYPE_2__ pl_thumb_handle_t ;


 int VAR_0 ;




 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (int ,char const**) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char const*) ;
 int FUNC_10 (TYPE_1__*) ;
 scalar_t__ FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (TYPE_1__*,int) ;
 int FUNC_14 (TYPE_1__*,int) ;
 int FUNC_15 (TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_16(retro_task_t *VAR_1)
{
   pl_thumb_handle_t *VAR_2 = ((void*)0);

   if (!VAR_1)
      goto task_finished;

   VAR_2 = (pl_thumb_handle_t*)VAR_1->state;

   if (!VAR_2)
      goto task_finished;

   if (FUNC_11(VAR_1))
      goto task_finished;

   switch (VAR_2->status)
   {
      case 131:
         {

            if (!FUNC_6(VAR_2->playlist_path))
               goto task_finished;

            VAR_2->playlist = FUNC_7(VAR_2->playlist_path, VAR_0);

            if (!VAR_2->playlist)
               goto task_finished;

            VAR_2->list_size = FUNC_8(VAR_2->playlist);

            if (VAR_2->list_size < 1)
               goto task_finished;


            VAR_2->thumbnail_path_data = FUNC_3();

            if (!VAR_2->thumbnail_path_data)
               goto task_finished;

            if (!FUNC_5(
                  VAR_2->thumbnail_path_data, VAR_2->system, VAR_2->playlist))
               goto task_finished;


            VAR_2->status = 129;
         }
         break;
      case 129:
         {

            if (FUNC_4(
                  VAR_2->thumbnail_path_data, VAR_2->playlist, VAR_2->list_index))
            {
               const char *VAR_3 = ((void*)0);


               FUNC_10(VAR_1);
               if (FUNC_2(VAR_2->thumbnail_path_data, &VAR_3))
                  FUNC_15(VAR_1, FUNC_9(VAR_3));
               else
                  FUNC_15(VAR_1, FUNC_9(""));
               FUNC_14(VAR_1, (VAR_2->list_index * 100) / VAR_2->list_size);


               VAR_2->type_idx = 1;
               VAR_2->status = 128;
            }
            else
            {


               VAR_2->list_index++;
               if (VAR_2->list_index >= VAR_2->list_size)
                  VAR_2->status = 130;
            }
         }
         break;
      case 128:
         {


            if (VAR_2->http_task)
            {
               if (FUNC_12(VAR_2->http_task))
                  VAR_2->http_task = ((void*)0);
               else
                  break;
            }


            if (VAR_2->type_idx > 3)
            {

               VAR_2->list_index++;
               if (VAR_2->list_index < VAR_2->list_size)
                  VAR_2->status = 129;
               else
                  VAR_2->status = 130;
               break;
            }


            if (VAR_2)
               FUNC_0(VAR_2);


            VAR_2->type_idx++;
         }
         break;
      case 130:
      default:
         FUNC_14(VAR_1, 100);
         goto task_finished;
   }

   return;

task_finished:

   if (VAR_1)
      FUNC_13(VAR_1, 1);

   FUNC_1(VAR_2, 1);
}
