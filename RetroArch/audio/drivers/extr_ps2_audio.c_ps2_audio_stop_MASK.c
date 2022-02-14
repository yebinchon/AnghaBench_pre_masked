
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int running; } ;
typedef TYPE_1__ ps2_audio_t ;


 int FUNC_0 () ;

__attribute__((used)) static bool FUNC_1(void *VAR_0)
{
   bool VAR_1 = 1;
   ps2_audio_t* VAR_2 = (ps2_audio_t*)VAR_0;

   if (VAR_2)
   {
      FUNC_0();
      VAR_2->running = 0;
   }

   return VAR_1;
}
