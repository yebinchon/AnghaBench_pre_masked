
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int running; scalar_t__ worker_thread; } ;
typedef TYPE_1__ psp_audio_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,TYPE_1__*) ;

__attribute__((used)) static bool FUNC_1(void *VAR_1, bool VAR_2)
{
   psp_audio_t* VAR_3 = (psp_audio_t*)VAR_1;

   if(VAR_3 && VAR_3->running)
      return 1;

   if (!VAR_3->worker_thread)
   {
      VAR_3->running = 1;
      VAR_3->worker_thread = FUNC_0(VAR_0, VAR_3);
   }

   return 1;
}
