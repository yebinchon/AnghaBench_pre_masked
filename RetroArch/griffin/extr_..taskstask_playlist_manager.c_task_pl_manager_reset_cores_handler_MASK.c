
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int task_title ;
struct playlist_entry {char* label; char* path; char* core_path; char* core_name; int member_0; } ;
struct TYPE_10__ {scalar_t__ state; } ;
typedef TYPE_1__ retro_task_t ;
typedef int playlist_t ;
struct TYPE_11__ {int status; int list_size; int list_index; char* playlist_name; int playlist_path; int playlist; } ;
typedef TYPE_2__ pl_manager_handle_t ;
typedef int entry_name ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int * FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int,struct playlist_entry const**) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int,struct playlist_entry*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (char*,char*,int) ;
 int FUNC_17 (char*,int ,int) ;
 int FUNC_18 (TYPE_1__*) ;
 scalar_t__ FUNC_19 (TYPE_1__*) ;
 int FUNC_20 (TYPE_1__*,int) ;
 int FUNC_21 (TYPE_1__*,int) ;
 int FUNC_22 (TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_23(retro_task_t *VAR_4)
{
   pl_manager_handle_t *VAR_5 = ((void*)0);

   if (!VAR_4)
      goto task_finished;

   VAR_5 = (pl_manager_handle_t*)VAR_4->state;

   if (!VAR_5)
      goto task_finished;

   if (FUNC_19(VAR_4))
      goto task_finished;

   switch (VAR_5->status)
   {
      case 130:
         {

            if (!FUNC_3(VAR_5->playlist_path))
               goto task_finished;

            VAR_5->playlist = FUNC_8(VAR_5->playlist_path, VAR_0);

            if (!VAR_5->playlist)
               goto task_finished;

            VAR_5->list_size = FUNC_10(VAR_5->playlist);

            if (VAR_5->list_size < 1)
               goto task_finished;


            VAR_5->status = 128;
         }
         break;
      case 128:
         {
            const struct playlist_entry *VAR_6 = ((void*)0);


            FUNC_7(
                  VAR_5->playlist, VAR_5->list_index, &VAR_6);

            if (VAR_6)
            {
               struct playlist_entry VAR_7 = {0};
               char VAR_8[VAR_3];
               char VAR_9[VAR_3];

               VAR_8[0] = '\0';
               VAR_9[0] = '\0';


               FUNC_18(VAR_4);

               FUNC_17(
                     VAR_8, FUNC_2(VAR_2),
                     sizeof(VAR_8));

               if (!FUNC_14(VAR_6->label))
                  FUNC_16(VAR_8, VAR_6->label, sizeof(VAR_8));
               else if (!FUNC_14(VAR_6->path))
               {
                  char VAR_10[VAR_3];
                  VAR_10[0] = '\0';

                  FUNC_0(VAR_10, VAR_6->path, sizeof(VAR_10));
                  FUNC_16(VAR_8, VAR_10, sizeof(VAR_8));
               }

               FUNC_22(VAR_4, FUNC_13(VAR_8));
               FUNC_21(VAR_4, (VAR_5->list_index * 100) / VAR_5->list_size);


               VAR_9[0] = 'D';
               VAR_9[1] = 'E';
               VAR_9[2] = 'T';
               VAR_9[3] = 'E';
               VAR_9[4] = 'C';
               VAR_9[5] = 'T';
               VAR_9[6] = '\0';

               VAR_7.core_path = VAR_9;
               VAR_7.core_name = VAR_9;

               FUNC_11(
                     VAR_5->playlist, VAR_5->list_index, &VAR_7);
            }


            VAR_5->list_index++;
            if (VAR_5->list_index >= VAR_5->list_size)
               VAR_5->status = 129;
         }
         break;
      case 129:
         {
            playlist_t *VAR_11 = FUNC_5();
            char VAR_12[VAR_3];

            VAR_12[0] = '\0';


            FUNC_12(VAR_5->playlist);





            if (VAR_11)
            {
               if (FUNC_15(VAR_5->playlist_path, FUNC_6(VAR_11)))
               {
                  FUNC_4();
                  FUNC_9(VAR_5->playlist_path, VAR_0);
               }
            }


            FUNC_18(VAR_4);

            FUNC_17(
                  VAR_12, FUNC_2(VAR_1),
                  sizeof(VAR_12));
            FUNC_16(VAR_12, VAR_5->playlist_name, sizeof(VAR_12));

            FUNC_22(VAR_4, FUNC_13(VAR_12));
         }

      default:
         FUNC_21(VAR_4, 100);
         goto task_finished;
   }

   return;

task_finished:

   if (VAR_4)
      FUNC_20(VAR_4, 1);

   FUNC_1(VAR_5);
}
