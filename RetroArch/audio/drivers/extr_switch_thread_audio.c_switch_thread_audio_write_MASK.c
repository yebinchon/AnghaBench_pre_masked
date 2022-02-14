
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fifoLock; int fifo; int condLock; int cond; scalar_t__ running; scalar_t__ nonblocking; } ;
typedef TYPE_1__ switch_thread_audio_t ;
typedef size_t ssize_t ;


 size_t FUNC_0 (size_t,size_t) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char const*,size_t) ;
 size_t FUNC_5 (int ) ;

__attribute__((used)) static ssize_t FUNC_6(void *VAR_0, const void *VAR_1, size_t VAR_2)
{
   size_t VAR_3, VAR_4;
   switch_thread_audio_t *VAR_5 = (switch_thread_audio_t *)VAR_0;

   if (!VAR_5 || !VAR_5->running)
         return 0;

   if (VAR_5->nonblocking)
   {
      FUNC_2(&VAR_5->fifoLock);
      VAR_3 = FUNC_5(VAR_5->fifo);
      VAR_4 = FUNC_0(VAR_3, VAR_2);
      if (VAR_4 > 0)
         FUNC_4(VAR_5->fifo, VAR_1, VAR_4);
      FUNC_3(&VAR_5->fifoLock);
   }
   else
   {
      VAR_4 = 0;
      while (VAR_4 < VAR_2 && VAR_5->running)
      {
         FUNC_2(&VAR_5->fifoLock);
         VAR_3 = FUNC_5(VAR_5->fifo);
         if (VAR_3 == 0)
         {
            FUNC_3(&VAR_5->fifoLock);
            FUNC_2(&VAR_5->condLock);
            if (VAR_5->running)
               FUNC_1(&VAR_5->cond, &VAR_5->condLock);
            FUNC_3(&VAR_5->condLock);
         }
         else
         {
            size_t VAR_6 = FUNC_0(VAR_2 - VAR_4, VAR_3);
            FUNC_4(VAR_5->fifo, (const char*)VAR_1 + VAR_4, VAR_6);
            FUNC_3(&VAR_5->fifoLock);
            VAR_4 += VAR_6;
         }
      }
   }

   return VAR_4;
}
