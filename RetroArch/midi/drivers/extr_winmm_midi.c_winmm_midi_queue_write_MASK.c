
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int rd_idx; int wr_idx; TYPE_2__* events; } ;
typedef TYPE_1__ winmm_midi_queue_t ;
struct TYPE_6__ {int data_size; int delta_time; int * data; } ;
typedef TYPE_2__ midi_event_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;

__attribute__((used)) static bool FUNC_1(winmm_midi_queue_t *VAR_1, const midi_event_t *VAR_2)
{
   int VAR_3;
   unsigned VAR_4;
   int VAR_5 = VAR_1->rd_idx;
   midi_event_t *VAR_6 = ((void*)0);

   if (VAR_1->wr_idx >= VAR_5)
      VAR_3 = VAR_0 - VAR_1->wr_idx + VAR_5;
   else
      VAR_3 = VAR_5 - VAR_1->wr_idx - 1;

   if (VAR_3 < 1)
   {



      return 0;
   }

   VAR_6 = &VAR_1->events[VAR_1->wr_idx];
   if (VAR_2->data_size > 4)
   {



      return 0;
   }

   for (VAR_4 = 0; VAR_4 < VAR_2->data_size; ++VAR_4)
      VAR_6->data[VAR_4] = VAR_2->data[VAR_4];

   VAR_6->data_size = VAR_2->data_size;
   VAR_6->delta_time = VAR_2->delta_time;

   if (VAR_1->wr_idx + 1 == VAR_0)
      VAR_1->wr_idx = 0;
   else
      ++VAR_1->wr_idx;

   return 1;
}
