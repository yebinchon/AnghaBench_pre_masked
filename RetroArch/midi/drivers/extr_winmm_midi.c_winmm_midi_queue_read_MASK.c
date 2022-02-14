
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t rd_idx; size_t wr_idx; TYPE_2__* events; } ;
typedef TYPE_1__ winmm_midi_queue_t ;
struct TYPE_6__ {unsigned int data_size; int delta_time; int * data; } ;
typedef TYPE_2__ midi_event_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;

__attribute__((used)) static bool FUNC_1(winmm_midi_queue_t *VAR_1, midi_event_t *VAR_2)
{
   unsigned VAR_3;
   midi_event_t *VAR_4 = ((void*)0);

   if (VAR_1->rd_idx == VAR_1->wr_idx)
      return 0;

   if (VAR_2->data_size < VAR_1->events[VAR_1->rd_idx].data_size)
   {



      return 0;
   }

   VAR_4 = &VAR_1->events[VAR_1->rd_idx];

   for (VAR_3 = 0; VAR_3 < VAR_4->data_size; ++VAR_3)
      VAR_2->data[VAR_3] = VAR_4->data[VAR_3];

   VAR_2->data_size = VAR_4->data_size;
   VAR_2->delta_time = VAR_4->delta_time;

   if (VAR_1->rd_idx + 1 == VAR_0)
      VAR_1->rd_idx = 0;
   else
      ++VAR_1->rd_idx;

   return 1;
}
