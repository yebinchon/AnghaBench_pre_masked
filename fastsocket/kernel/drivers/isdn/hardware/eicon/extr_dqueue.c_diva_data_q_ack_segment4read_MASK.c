
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t read; size_t segments; scalar_t__ count; scalar_t__* length; } ;
typedef TYPE_1__ diva_um_idi_data_queue_t ;



void FUNC_0(diva_um_idi_data_queue_t * VAR_0)
{
 if (VAR_0->count) {
  VAR_0->length[VAR_0->read] = 0;
  VAR_0->count--;
  VAR_0->read++;
  if (VAR_0->read >= VAR_0->segments) {
   VAR_0->read = 0;
  }
 }
}
