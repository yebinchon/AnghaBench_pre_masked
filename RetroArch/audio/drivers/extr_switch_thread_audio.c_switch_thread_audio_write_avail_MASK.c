
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fifoLock; int fifo; } ;
typedef TYPE_1__ switch_thread_audio_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 size_t FUNC_2 (int ) ;

__attribute__((used)) static size_t FUNC_3(void *VAR_0)
{
   size_t VAR_1;
   switch_thread_audio_t* VAR_2 = (switch_thread_audio_t*)VAR_0;

   FUNC_0(&VAR_2->fifoLock);
   VAR_1 = FUNC_2(VAR_2->fifo);
   FUNC_1(&VAR_2->fifoLock);

   return VAR_1;
}
