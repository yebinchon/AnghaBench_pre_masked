
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int stopped; int alive; scalar_t__ cond; scalar_t__ lock; scalar_t__ thread; } ;
typedef TYPE_1__ audio_thread_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;

__attribute__((used)) static void FUNC_7(void *VAR_0)
{
   audio_thread_t *VAR_1 = (audio_thread_t*)VAR_0;

   if (!VAR_1)
      return;

   if (VAR_1->thread)
   {
      FUNC_4(VAR_1->lock);
      VAR_1->stopped = 0;
      VAR_1->alive = 0;
      FUNC_2(VAR_1->cond);
      FUNC_5(VAR_1->lock);

      FUNC_6(VAR_1->thread);
   }

   if (VAR_1->lock)
      FUNC_3(VAR_1->lock);
   if (VAR_1->cond)
      FUNC_1(VAR_1->cond);
   FUNC_0(VAR_1);
}
