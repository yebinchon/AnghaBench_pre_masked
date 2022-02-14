
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int running; int * worker_thread; } ;
typedef TYPE_1__ psp_audio_t ;


 int FUNC_0 (int *) ;

__attribute__((used)) static bool FUNC_1(void *VAR_0)
{
   psp_audio_t* VAR_1 = (psp_audio_t*)VAR_0;

   if (VAR_1){
      VAR_1->running = 0;

      if (!VAR_1->worker_thread)
      return 1;

      FUNC_0(VAR_1->worker_thread);
      VAR_1->worker_thread = ((void*)0);
   }
   return 1;
}
