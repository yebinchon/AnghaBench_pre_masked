
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ state; } ;
typedef TYPE_1__ retro_task_t ;
struct TYPE_11__ {int status; int right_thumbnail_exists; int left_thumbnail_exists; int type_idx; int * http_task; int thumbnail_path_data; int list_index; int playlist; int system; } ;
typedef TYPE_2__ pl_thumb_handle_t ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,char const**) ;
 int FUNC_2 (int ,int ,char const**) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int ) ;
 void* FUNC_7 (char const*) ;
 int FUNC_8 (char const*) ;
 int FUNC_9 (TYPE_1__*) ;
 scalar_t__ FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (TYPE_1__*,int) ;
 int FUNC_13 (TYPE_1__*,int) ;
 int FUNC_14 (TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_15(retro_task_t *VAR_2)
{
   pl_thumb_handle_t *VAR_3 = ((void*)0);

   if (!VAR_2)
      return;

   VAR_3 = (pl_thumb_handle_t*)VAR_2->state;

   if (!VAR_3)
      goto task_finished;

   if (FUNC_10(VAR_2))
      goto task_finished;

   switch (VAR_3->status)
   {
      case 130:
         {
            const char *VAR_4 = ((void*)0);
            const char *VAR_5 = ((void*)0);
            const char *VAR_6 = ((void*)0);


            VAR_3->thumbnail_path_data = FUNC_3();

            if (!VAR_3->thumbnail_path_data)
               goto task_finished;

            if (!FUNC_5(
                  VAR_3->thumbnail_path_data, VAR_3->system, VAR_3->playlist))
               goto task_finished;

            if (!FUNC_4(
                  VAR_3->thumbnail_path_data, VAR_3->playlist, VAR_3->list_index))
               goto task_finished;



            VAR_3->right_thumbnail_exists = 0;
            if (FUNC_6(VAR_3->thumbnail_path_data, VAR_1))
               if (FUNC_2(VAR_3->thumbnail_path_data, VAR_1, &VAR_5))
                  VAR_3->right_thumbnail_exists = FUNC_7(VAR_5);

            VAR_3->left_thumbnail_exists = 0;
            if (FUNC_6(VAR_3->thumbnail_path_data, VAR_0))
               if (FUNC_2(VAR_3->thumbnail_path_data, VAR_0, &VAR_6))
                  VAR_3->left_thumbnail_exists = FUNC_7(VAR_6);


            FUNC_9(VAR_2);
            if (FUNC_1(VAR_3->thumbnail_path_data, &VAR_4))
               FUNC_14(VAR_2, FUNC_8(VAR_4));
            else
               FUNC_14(VAR_2, FUNC_8(""));
            FUNC_13(VAR_2, 0);


            VAR_3->status = 128;
         }
         break;
      case 128:
         {


            if (VAR_3->http_task)
            {
               if (FUNC_11(VAR_3->http_task))
                  VAR_3->http_task = ((void*)0);
               else
                  break;
            }


            if (VAR_3->type_idx > 3)
            {
               VAR_3->status = 129;
               break;
            }


            FUNC_13(VAR_2, ((VAR_3->type_idx - 1) * 100) / 3);


            if (VAR_3)
               FUNC_0(VAR_3);


            VAR_3->type_idx++;
         }
         break;
      case 129:
      default:
         FUNC_13(VAR_2, 100);
         goto task_finished;
   }

   return;

task_finished:

   if (VAR_2)
      FUNC_12(VAR_2, 1);
}
