
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ssize_t ;
struct TYPE_2__ {int fifo_lock; int buffer; int cond_lock; int cond; scalar_t__ thread_dead; scalar_t__ nonblock; } ;
typedef TYPE_1__ alsa_thread_t ;


 size_t FUNC_0 (size_t,size_t) ;
 int FUNC_1 (int ,char const*,size_t) ;
 size_t FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static ssize_t FUNC_6(void *VAR_0, const void *VAR_1, size_t VAR_2)
{
   alsa_thread_t *VAR_3 = (alsa_thread_t*)VAR_0;

   if (VAR_3->thread_dead)
      return -1;

   if (VAR_3->nonblock)
   {
      size_t VAR_4;
      size_t VAR_5;

      FUNC_4(VAR_3->fifo_lock);
      VAR_4 = FUNC_2(VAR_3->buffer);
      VAR_5 = FUNC_0(VAR_4, VAR_2);

      FUNC_1(VAR_3->buffer, VAR_1, VAR_5);
      FUNC_5(VAR_3->fifo_lock);

      return VAR_5;
   }
   else
   {
      size_t VAR_6 = 0;
      while (VAR_6 < VAR_2 && !VAR_3->thread_dead)
      {
         size_t VAR_7;
         FUNC_4(VAR_3->fifo_lock);
         VAR_7 = FUNC_2(VAR_3->buffer);

         if (VAR_7 == 0)
         {
            FUNC_5(VAR_3->fifo_lock);
            FUNC_4(VAR_3->cond_lock);
            if (!VAR_3->thread_dead)
               FUNC_3(VAR_3->cond, VAR_3->cond_lock);
            FUNC_5(VAR_3->cond_lock);
         }
         else
         {
            size_t VAR_8 = FUNC_0(VAR_2 - VAR_6, VAR_7);
            FUNC_1(VAR_3->buffer,
                  (const char*)VAR_1 + VAR_6, VAR_8);
            FUNC_5(VAR_3->fifo_lock);
            VAR_6 += VAR_8;
         }
      }
      return VAR_6;
   }
}
