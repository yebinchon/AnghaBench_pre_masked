
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {void* userdata; int func; } ;
typedef TYPE_2__ task_finder_data_t ;
struct TYPE_11__ {char const* directory_thumbnails; } ;
struct TYPE_13__ {TYPE_1__ paths; } ;
typedef TYPE_3__ settings_t ;
struct TYPE_14__ {int alternative_look; int type_idx; int overwrite; int status; scalar_t__ list_index; scalar_t__ list_size; int * http_task; int * thumbnail_path_data; int * playlist; void* dir_thumbnails; void* playlist_path; void* system; scalar_t__ progress; void* title; struct TYPE_14__* state; int handler; } ;
typedef TYPE_4__ retro_task_t ;
typedef TYPE_4__ pl_thumb_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int,int) ;
 TYPE_3__* FUNC_1 () ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_4__*) ;
 char* FUNC_4 (char const*) ;
 void* FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (char const*) ;
 scalar_t__ FUNC_7 (char const*,char*) ;
 TYPE_4__* FUNC_8 () ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_4__*) ;

bool FUNC_11(
      const char *VAR_8, const char *VAR_9)
{
   task_finder_data_t VAR_10;
   settings_t *VAR_11 = FUNC_1();
   retro_task_t *VAR_12 = FUNC_8();
   pl_thumb_handle_t *VAR_13 = (pl_thumb_handle_t*)FUNC_0(1, sizeof(pl_thumb_handle_t));
   const char *VAR_14 = FUNC_4(VAR_9);


   if (!VAR_11 || !VAR_12 || !VAR_13)
      goto error;

   if (FUNC_6(VAR_8) ||
       FUNC_6(VAR_9) ||
       FUNC_6(VAR_14) ||
       FUNC_6(VAR_11->paths.directory_thumbnails))
      goto error;


   if (FUNC_7(VAR_14, FUNC_2(VAR_1)) ||
       FUNC_7(VAR_14, FUNC_2(VAR_0)) ||
       FUNC_7(VAR_14, FUNC_2(VAR_3)) ||
       FUNC_7(VAR_14, FUNC_2(VAR_4)) ||
       FUNC_7(VAR_14, FUNC_2(VAR_2)) ||
       FUNC_7(VAR_8, "history") ||
       FUNC_7(VAR_8, "favorites") ||
       FUNC_7(VAR_8, "images_history"))
      goto error;



   VAR_10.func = VAR_7;
   VAR_10.userdata = (void*)VAR_9;

   if (FUNC_9(&VAR_10))
      goto error;


   VAR_12->handler = VAR_6;
   VAR_12->state = VAR_13;
   VAR_12->title = FUNC_5(VAR_8);
   VAR_12->alternative_look = 1;
   VAR_12->progress = 0;


   VAR_13->system = FUNC_5(VAR_8);
   VAR_13->playlist_path = FUNC_5(VAR_9);
   VAR_13->dir_thumbnails = FUNC_5(VAR_11->paths.directory_thumbnails);
   VAR_13->playlist = ((void*)0);
   VAR_13->thumbnail_path_data = ((void*)0);
   VAR_13->http_task = ((void*)0);
   VAR_13->list_size = 0;
   VAR_13->list_index = 0;
   VAR_13->type_idx = 1;
   VAR_13->overwrite = 0;
   VAR_13->status = VAR_5;

   FUNC_10(VAR_12);

   return 1;

error:

   if (VAR_12)
   {
      FUNC_3(VAR_12);
      VAR_12 = ((void*)0);
   }

   if (VAR_13)
   {
      FUNC_3(VAR_13);
      VAR_13 = ((void*)0);
   }

   return 0;
}
