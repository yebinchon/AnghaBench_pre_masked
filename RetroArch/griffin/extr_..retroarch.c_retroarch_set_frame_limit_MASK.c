
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {float fps; } ;
struct retro_system_av_info {TYPE_2__ timing; } ;
struct TYPE_5__ {float fastforward_ratio; } ;
struct TYPE_7__ {TYPE_1__ floats; } ;
typedef TYPE_3__ settings_t ;
typedef scalar_t__ retro_time_t ;


 TYPE_3__* VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (float) ;
 struct retro_system_av_info VAR_3 ;

__attribute__((used)) static void FUNC_2(void)
{
   settings_t *VAR_4 = VAR_0;
   struct retro_system_av_info *VAR_5 = &VAR_3;
   float VAR_6 = VAR_4->floats.fastforward_ratio;
   float VAR_7 = (VAR_6 == 0.0f) ? 1.0f : VAR_6;

   VAR_1 = FUNC_0();
   VAR_2 = (retro_time_t)FUNC_1(1000000.0f
         / (VAR_5->timing.fps * VAR_7));
}
