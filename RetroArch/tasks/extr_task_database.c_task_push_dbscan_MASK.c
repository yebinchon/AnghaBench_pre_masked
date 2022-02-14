
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int scan_without_core_match; } ;
struct TYPE_10__ {TYPE_1__ bools; } ;
typedef TYPE_2__ settings_t ;
struct TYPE_11__ {int alternative_look; int show_hidden_files; int is_directory; void* content_database_path; int * playlist_directory; void* fullpath; int scan_without_core_match; int progress_cb; void* title; int callback; struct TYPE_11__* state; int handler; } ;
typedef TYPE_3__ retro_task_t ;
typedef int retro_task_callback_t ;
typedef TYPE_3__ db_handle_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;
 TYPE_2__* FUNC_1 () ;
 int FUNC_2 (TYPE_3__*) ;
 char const* FUNC_3 (int ) ;
 void* FUNC_4 (char const*) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* FUNC_5 () ;
 int FUNC_6 (TYPE_3__*) ;

bool FUNC_7(
      const char *VAR_3,
      const char *VAR_4,
      const char *VAR_5,
      bool VAR_6,
      bool VAR_7,
      retro_task_callback_t VAR_8)
{
   retro_task_t *VAR_9 = FUNC_5();



   db_handle_t *VAR_10 = (db_handle_t*)FUNC_0(1, sizeof(db_handle_t));

   if (!VAR_9 || !VAR_10)
      goto error;

   VAR_9->handler = VAR_1;
   VAR_9->state = VAR_10;
   VAR_9->callback = VAR_8;
   VAR_9->title = FUNC_4(FUNC_3(VAR_0));
   VAR_9->alternative_look = 1;





   VAR_10->show_hidden_files = VAR_7;
   VAR_10->is_directory = VAR_6;
   VAR_10->playlist_directory = ((void*)0);
   VAR_10->fullpath = FUNC_4(VAR_5);
   VAR_10->playlist_directory = FUNC_4(VAR_3);
   VAR_10->content_database_path = FUNC_4(VAR_4);

   FUNC_6(VAR_9);

   return 1;

error:
   if (VAR_9)
      FUNC_2(VAR_9);
   if (VAR_10)
      FUNC_2(VAR_10);
   return 0;
}
