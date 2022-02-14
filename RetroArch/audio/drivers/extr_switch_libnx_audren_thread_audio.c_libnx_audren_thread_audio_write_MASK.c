
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ssize_t ;
struct TYPE_2__ {int fifo_condlock; int fifo_condvar; int fifo_lock; int fifo; scalar_t__ running; scalar_t__ nonblocking; scalar_t__ paused; } ;
typedef TYPE_1__ libnx_audren_thread_t ;


 size_t FUNC_0 (size_t,size_t) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ,char const*,size_t) ;
 size_t FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static ssize_t FUNC_6(void *VAR_0, const void *VAR_1, size_t VAR_2)
{
   libnx_audren_thread_t *VAR_3 = (libnx_audren_thread_t*)VAR_0;
   size_t VAR_4, VAR_5, VAR_6;

   if (!VAR_3 || !VAR_3->running)
      return -1;

   if(VAR_3->paused)
      return 0;

   if(VAR_3->nonblocking)
   {
      FUNC_4(&VAR_3->fifo_lock);
      VAR_4 = FUNC_3(VAR_3->fifo);
      VAR_5 = FUNC_0(VAR_4, VAR_2);
      if(VAR_5 > 0)
      {
         FUNC_2(VAR_3->fifo, VAR_1, VAR_5);
      }
      FUNC_5(&VAR_3->fifo_lock);
   }
   else
   {
      VAR_5 = 0;
      while (VAR_5 < VAR_2 && VAR_3->running)
      {
         FUNC_4(&VAR_3->fifo_lock);
         VAR_4 = FUNC_3(VAR_3->fifo);
         if(VAR_4)
         {
            VAR_6 = FUNC_0(VAR_2 - VAR_5, VAR_4);
            FUNC_2(VAR_3->fifo, (const char*)VAR_1 + VAR_5, VAR_6);
            FUNC_5(&VAR_3->fifo_lock);
            VAR_5 += VAR_6;
         }
         else
         {
            FUNC_5(&VAR_3->fifo_lock);
            FUNC_4(&VAR_3->fifo_condlock);
            FUNC_1(&VAR_3->fifo_condvar, &VAR_3->fifo_condlock);
            FUNC_5(&VAR_3->fifo_condlock);
         }
      }
   }

   return VAR_5;
}
