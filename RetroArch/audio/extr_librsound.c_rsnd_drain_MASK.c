
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mutex; } ;
struct TYPE_5__ {int start_time; int rate; int channels; int samplesize; int bytes_in_buffer; TYPE_1__ thread; int fifo_buffer; scalar_t__ total_written; scalar_t__ has_written; } ;
typedef TYPE_2__ rsound_t ;
typedef int int64_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(rsound_t *VAR_0)
{

   if ( VAR_0->has_written )
   {

      int64_t VAR_1 = FUNC_1();

      int64_t VAR_2 = VAR_1 - VAR_0->start_time;
      VAR_2 *= VAR_0->rate * VAR_0->channels * VAR_0->samplesize;
      VAR_2 /= 1000000;

      FUNC_2(VAR_0->thread.mutex);
      VAR_0->bytes_in_buffer = (int)((int64_t)VAR_0->total_written + (int64_t)FUNC_0(VAR_0->fifo_buffer) - VAR_2);
      FUNC_3(VAR_0->thread.mutex);
   }
   else
   {
      FUNC_2(VAR_0->thread.mutex);
      VAR_0->bytes_in_buffer = FUNC_0(VAR_0->fifo_buffer);
      FUNC_3(VAR_0->thread.mutex);
   }
}
