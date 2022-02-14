
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {float height; scalar_t__ width; } ;
typedef TYPE_2__ video_viewport_t ;
struct retro_system_av_info {int geometry; } ;
struct retro_game_geometry {scalar_t__ base_width; scalar_t__ base_height; } ;
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

__attribute__((used)) static int FUNC_5(
      rarch_setting_t *VAR_2, bool VAR_3)
{
   video_viewport_t VAR_4;
   struct retro_system_av_info *VAR_5 = FUNC_4();
   video_viewport_t *VAR_6 = FUNC_3();
   settings_t *VAR_7 = FUNC_0();
   struct retro_game_geometry *VAR_8 = (struct retro_game_geometry*)
      &VAR_5->geometry;

   if (!VAR_7 || !VAR_5)
      return -1;

   FUNC_2(&VAR_4);

   if (VAR_7->bools.video_scale_integer)
   {
      if (FUNC_1() % 2)
         VAR_6->width += VAR_8->base_height;
      else
         VAR_6->width += VAR_8->base_width;
   }
   else
      VAR_6->width += 1;

   VAR_1[VAR_0].value =
      (float)VAR_6->width / VAR_6->height;

   return 0;
}
