
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void const** data; size_t read; scalar_t__ count; } ;
typedef TYPE_1__ diva_um_idi_data_queue_t ;



const void *FUNC_0(const diva_um_idi_data_queue_t *
      VAR_0)
{
 if (VAR_0->count) {
  return (VAR_0->data[VAR_0->read]);
 }
 return ((void*)0);
}
