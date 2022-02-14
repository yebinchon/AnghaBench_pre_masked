
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* length; size_t write; size_t segments; scalar_t__ segment_pending; int count; } ;
typedef TYPE_1__ diva_um_idi_data_queue_t ;



void
FUNC_0(diva_um_idi_data_queue_t * VAR_0, int VAR_1)
{
 if (VAR_0->segment_pending) {
  VAR_0->length[VAR_0->write] = VAR_1;
  VAR_0->count++;
  VAR_0->write++;
  if (VAR_0->write >= VAR_0->segments) {
   VAR_0->write = 0;
  }
  VAR_0->segment_pending = 0;
 }
}
