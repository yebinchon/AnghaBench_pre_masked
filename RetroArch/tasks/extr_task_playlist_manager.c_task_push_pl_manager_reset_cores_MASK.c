
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int task_title ;
struct TYPE_8__ {void* userdata; int func; } ;
typedef TYPE_1__ task_finder_data_t ;
struct TYPE_9__ {int alternative_look; int status; scalar_t__ list_index; scalar_t__ list_size; int * playlist; void* playlist_name; void* playlist_path; scalar_t__ progress; void* title; struct TYPE_9__* state; int handler; } ;
typedef TYPE_2__ retro_task_t ;
typedef int playlist_name ;
typedef TYPE_2__ pl_manager_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (char*,char const*,int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (char const*) ;
 int FUNC_6 (char*,char*,int) ;
 int FUNC_7 (char*,int ,int) ;
 TYPE_2__* FUNC_8 () ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_2__*) ;

bool FUNC_11(const char *VAR_5)
{
   task_finder_data_t VAR_6;
   char VAR_7[VAR_1];
   char VAR_8[VAR_1];
   retro_task_t *VAR_9 = FUNC_8();
   pl_manager_handle_t *VAR_10 = (pl_manager_handle_t*)FUNC_0(1, sizeof(pl_manager_handle_t));

   VAR_7[0] = '\0';
   VAR_8[0] = '\0';


   if (!VAR_9 || !VAR_10)
      goto error;

   if (FUNC_5(VAR_5))
      goto error;

   FUNC_1(VAR_7, VAR_5, sizeof(VAR_7));

   if (FUNC_5(VAR_7))
      goto error;



   VAR_6.func = VAR_3;
   VAR_6.userdata = (void*)VAR_5;

   if (FUNC_9(&VAR_6))
      goto error;


   FUNC_7(
         VAR_8, FUNC_3(VAR_0),
         sizeof(VAR_8));
   FUNC_6(VAR_8, VAR_7, sizeof(VAR_8));

   VAR_9->handler = VAR_4;
   VAR_9->state = VAR_10;
   VAR_9->title = FUNC_4(VAR_8);
   VAR_9->alternative_look = 1;
   VAR_9->progress = 0;


   VAR_10->playlist_path = FUNC_4(VAR_5);
   VAR_10->playlist_name = FUNC_4(VAR_7);
   VAR_10->playlist = ((void*)0);
   VAR_10->list_size = 0;
   VAR_10->list_index = 0;
   VAR_10->status = VAR_2;

   FUNC_10(VAR_9);

   return 1;

error:

   if (VAR_9)
   {
      FUNC_2(VAR_9);
      VAR_9 = ((void*)0);
   }

   if (VAR_10)
   {
      FUNC_2(VAR_10);
      VAR_10 = ((void*)0);
   }

   return 0;
}
