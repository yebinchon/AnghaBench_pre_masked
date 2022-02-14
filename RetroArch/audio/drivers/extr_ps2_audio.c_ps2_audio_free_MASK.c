
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int running; } ;
typedef TYPE_1__ ps2_audio_t ;


 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
   ps2_audio_t* VAR_1 = (ps2_audio_t*)VAR_0;
   if (!VAR_1)
      return;

   VAR_1->running = 0;
   FUNC_0();
   FUNC_1(VAR_1);
}
