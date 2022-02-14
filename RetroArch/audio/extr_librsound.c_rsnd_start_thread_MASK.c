
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int sthread_t ;
struct TYPE_5__ {int * thread; } ;
struct TYPE_6__ {int thread_active; TYPE_1__ thread; scalar_t__ audio_callback; } ;
typedef TYPE_2__ rsound_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,TYPE_2__*) ;

__attribute__((used)) static int FUNC_2(rsound_t *VAR_2)
{
   if ( !VAR_2->thread_active )
   {
      VAR_2->thread_active = 1;
      VAR_2->thread.thread = (sthread_t*)FUNC_1(VAR_2->audio_callback ? VAR_0 : VAR_1, VAR_2);
      if ( !VAR_2->thread.thread )
      {
         VAR_2->thread_active = 0;
         FUNC_0("[RSound] Failed to create thread.");
         return -1;
      }
      return 0;
   }
   else
      return 0;
}
