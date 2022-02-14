
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int height; int full_height; int y; scalar_t__ width; } ;
typedef TYPE_2__ video_viewport_t ;
struct retro_system_av_info {int geometry; } ;
struct retro_game_geometry {int base_width; int base_height; } ;
struct TYPE_8__ {scalar_t__ video_scale_integer; } ;
struct TYPE_10__ {TYPE_1__ bools; } ;
typedef TYPE_3__ settings_t ;
typedef int rarch_setting_t ;
struct TYPE_11__ {float value; } ;


 size_t VAR_0 ;
 TYPE_7__* VAR_1 ;
 TYPE_3__* FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_2__* FUNC_3 () ;
 struct retro_system_av_info* FUNC_4 () ;

__attribute__((used)) static int FUNC_5(rarch_setting_t *VAR_2)
{
   video_viewport_t VAR_3;
   struct retro_system_av_info *VAR_4 = FUNC_4();
   video_viewport_t *VAR_5 = FUNC_3();
   settings_t *VAR_6 = FUNC_0();
   struct retro_game_geometry *VAR_7 = (struct retro_game_geometry*)
      &VAR_4->geometry;

   if (!VAR_6 || !VAR_4)
      return -1;

   FUNC_2(&VAR_3);

   if (VAR_6->bools.video_scale_integer)
   {
         if (FUNC_1() % 2)
         {
            VAR_5->height = ((VAR_5->height + VAR_7->base_width - 1) /
               VAR_7->base_width) * VAR_7->base_width;
         }
         else
            VAR_5->height = ((VAR_5->height + VAR_7->base_height - 1) /
                  VAR_7->base_height) * VAR_7->base_height;
   }
   else
      VAR_5->height = VAR_3.full_height - VAR_5->y;

   VAR_1[VAR_0].value =
      (float)VAR_5->width / VAR_5->height;

   return 0;
}
