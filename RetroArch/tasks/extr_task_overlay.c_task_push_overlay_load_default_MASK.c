
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {void* userdata; int func; } ;
typedef TYPE_1__ task_finder_data_t ;
struct overlay {int size; int overlay_hide_in_menu; int overlay_enable; float overlay_opacity; float overlay_scale; int pos_increment; int overlay_path; struct overlay* overlays; int driver_rgba_support; int state; int * conf; } ;
struct TYPE_7__ {void* user_data; int callback; struct overlay* state; int cleanup; int handler; } ;
typedef TYPE_2__ retro_task_t ;
typedef int retro_task_callback_t ;
typedef struct overlay overlay_loader_t ;
typedef int config_file_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*) ;
 int FUNC_3 (int *,char*,int*) ;
 int FUNC_4 (struct overlay*) ;
 int FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (char const*) ;
 TYPE_2__* FUNC_7 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 () ;

bool FUNC_11(
      retro_task_callback_t VAR_4,
      const char *VAR_5,
      bool VAR_6,
      bool VAR_7,
      float VAR_8,
      float VAR_9,
      void *VAR_10)
{
   task_finder_data_t VAR_11;
   retro_task_t *VAR_12 = ((void*)0);
   config_file_t *VAR_13 = ((void*)0);
   overlay_loader_t *VAR_14 = ((void*)0);

   if (FUNC_6(VAR_5))
      return 0;


   VAR_11.func = VAR_1;
   VAR_11.userdata = (void*)VAR_5;

   if (FUNC_8(&VAR_11))
      return 0;

   VAR_14 = (overlay_loader_t*)FUNC_0(1, sizeof(*VAR_14));

   if (!VAR_14)
      return 0;

   if (!(VAR_13 = FUNC_2(VAR_5)))
   {
      FUNC_4(VAR_14);
      return 0;
   }

   if (!FUNC_3(VAR_13, "overlays", &VAR_14->size))
   {

      FUNC_1(VAR_13);
      FUNC_4(VAR_14);
      return 0;
   }

   VAR_14->overlays = (struct overlay*)
      FUNC_0(VAR_14->size, sizeof(*VAR_14->overlays));

   if (!VAR_14->overlays)
   {
      FUNC_1(VAR_13);
      FUNC_4(VAR_14);
      return 0;
   }

   VAR_14->overlay_hide_in_menu = VAR_6;
   VAR_14->overlay_enable = VAR_7;
   VAR_14->overlay_opacity = VAR_8;
   VAR_14->overlay_scale = VAR_9;
   VAR_14->conf = VAR_13;
   VAR_14->state = VAR_0;
   VAR_14->pos_increment = (VAR_14->size / 4) ? (VAR_14->size / 4) : 4;



   VAR_12 = FUNC_7();

   if (!VAR_12)
   {
      FUNC_1(VAR_13);
      FUNC_4(VAR_14->overlays);
      FUNC_4(VAR_14);
      return 0;
   }

   VAR_14->overlay_path = FUNC_5(VAR_5);

   VAR_12->handler = VAR_3;
   VAR_12->cleanup = VAR_2;
   VAR_12->state = VAR_14;
   VAR_12->callback = VAR_4;
   VAR_12->user_data = VAR_10;

   FUNC_9(VAR_12);

   return 1;
}
