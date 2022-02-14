
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fifo_lock; int buffer; scalar_t__ thread_dead; } ;
typedef TYPE_1__ alsa_thread_t ;


 size_t FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static size_t FUNC_3(void *VAR_0)
{
   alsa_thread_t *VAR_1 = (alsa_thread_t*)VAR_0;
   size_t VAR_2;

   if (VAR_1->thread_dead)
      return 0;
   FUNC_1(VAR_1->fifo_lock);
   VAR_2 = FUNC_0(VAR_1->buffer);
   FUNC_2(VAR_1->fifo_lock);
   return VAR_2;
}
