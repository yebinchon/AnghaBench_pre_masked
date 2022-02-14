
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int segment_pending; scalar_t__ count; scalar_t__ segments; void** data; size_t write; } ;
typedef TYPE_1__ diva_um_idi_data_queue_t ;



void *FUNC_0(diva_um_idi_data_queue_t * VAR_0)
{
 if ((!VAR_0->segment_pending) && (VAR_0->count < VAR_0->segments)) {
  VAR_0->segment_pending = 1;
  return (VAR_0->data[VAR_0->write]);
 }

 return ((void*)0);
}
