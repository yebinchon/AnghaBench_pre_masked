
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ wr_idx; scalar_t__ rd_idx; TYPE_1__* events; int * data; } ;
typedef TYPE_2__ winmm_midi_queue_t ;
struct TYPE_4__ {scalar_t__ delta_time; int * data; } ;


 unsigned int VAR_0 ;

__attribute__((used)) static void FUNC_0(winmm_midi_queue_t *VAR_1)
{
   unsigned VAR_2, VAR_3;

   for (VAR_2 = VAR_3 = 0; VAR_2 < VAR_0; ++VAR_2, VAR_3 += 4)
   {
      VAR_1->events[VAR_2].data = &VAR_1->data[VAR_3];
      VAR_1->events[VAR_2].delta_time = 0;
   }

   VAR_1->rd_idx = 0;
   VAR_1->wr_idx = 0;
}
