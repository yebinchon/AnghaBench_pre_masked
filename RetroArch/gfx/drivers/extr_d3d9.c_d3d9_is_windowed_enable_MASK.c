
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int video_windowed_fullscreen; } ;
struct TYPE_5__ {TYPE_1__ bools; } ;
typedef TYPE_2__ settings_t ;


 TYPE_2__* FUNC_0 () ;

__attribute__((used)) static bool FUNC_1(bool VAR_0)
{

   settings_t *VAR_1 = FUNC_0();
   if (!VAR_0)
      return 1;
   if (VAR_1)
      return VAR_1->bools.video_windowed_fullscreen;

   return 0;
}
