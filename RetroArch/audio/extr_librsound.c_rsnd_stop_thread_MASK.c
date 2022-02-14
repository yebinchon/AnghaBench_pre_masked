
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int thread; int cond_mutex; int cond; } ;
struct TYPE_5__ {TYPE_1__ thread; scalar_t__ thread_active; } ;
typedef TYPE_2__ rsound_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(rsound_t *VAR_0)
{
   if ( VAR_0->thread_active )
   {

      FUNC_0("[RSound] Shutting down thread.\n");

      FUNC_2(VAR_0->thread.cond_mutex);
      VAR_0->thread_active = 0;
      FUNC_1(VAR_0->thread.cond);
      FUNC_3(VAR_0->thread.cond_mutex);

      FUNC_4(VAR_0->thread.thread);
      FUNC_0("[RSound] Thread joined successfully.\n");

      return 0;
   }
   else
   {
      FUNC_0("Thread is already shut down.\n");
      return 0;
   }
}
