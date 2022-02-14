
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int is_paused; } ;
typedef TYPE_1__ gx_audio_t ;


 int FUNC_0 () ;

__attribute__((used)) static bool FUNC_1(void *VAR_0, bool VAR_1)
{
   gx_audio_t *VAR_2 = (gx_audio_t*)VAR_0;

   if (!VAR_2)
      return 0;

   FUNC_0();
   VAR_2->is_paused = 0;
   return 1;
}
