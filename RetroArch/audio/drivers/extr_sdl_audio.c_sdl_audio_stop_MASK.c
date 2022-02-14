
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int is_paused; } ;
typedef TYPE_1__ sdl_audio_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static bool FUNC_1(void *VAR_0)
{
   sdl_audio_t *VAR_1 = (sdl_audio_t*)VAR_0;
   VAR_1->is_paused = 1;
   FUNC_0(1);
   return 1;
}
