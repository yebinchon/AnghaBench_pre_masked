
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct retro_system_timing {int sample_rate; int fps; } ;
struct retro_game_geometry {double aspect_ratio; int max_width; int max_height; scalar_t__ base_height; scalar_t__ base_width; } ;
struct TYPE_5__ {int x; int y; scalar_t__ h; scalar_t__ w; } ;
struct TYPE_8__ {TYPE_1__ viewport; } ;
struct TYPE_7__ {scalar_t__ ntsc; } ;
struct TYPE_6__ {struct retro_system_timing timing; struct retro_game_geometry geometry; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_4__ VAR_3 ;
 TYPE_3__ VAR_4 ;
 TYPE_2__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;

__attribute__((used)) static void FUNC_5(void)
{
   unsigned VAR_12;
   struct retro_game_geometry VAR_13;
   struct retro_system_timing VAR_14;


   if((VAR_8 & VAR_2) == VAR_1 || (VAR_8 & VAR_2) == VAR_0)
      for (VAR_12 = 0; VAR_12 < 10; VAR_12++)
         FUNC_3(0);
   else
      for (VAR_12 = 0; VAR_12 < 10; VAR_12++)
         FUNC_4(0);

   VAR_11 = VAR_3.viewport.w + (VAR_3.viewport.x * 2);
   VAR_10 = VAR_3.viewport.h + (VAR_3.viewport.y * 2);

   FUNC_2();
   VAR_13.aspect_ratio = 4.0 / 3.0;
   VAR_13.base_width = VAR_11;
   VAR_13.base_height = VAR_10;


   VAR_13.max_width = 720;
   VAR_13.max_height = 576;


   VAR_14.sample_rate = 48000;

   if (VAR_9)
      VAR_14.fps = VAR_7;
   else
      VAR_14.fps = VAR_6;

   VAR_5.geometry = VAR_13;
   VAR_5.timing = VAR_14;
}
