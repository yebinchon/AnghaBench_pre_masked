
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int segments; scalar_t__ segment_pending; scalar_t__ count; scalar_t__ write; scalar_t__ read; scalar_t__* length; int ** data; } ;
typedef TYPE_1__ diva_um_idi_data_queue_t ;


 int FUNC_0 (int ,int *) ;

int FUNC_1(diva_um_idi_data_queue_t * VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->segments; VAR_1++) {
  if (VAR_0->data[VAR_1]) {
   FUNC_0(0, VAR_0->data[VAR_1]);
  }
  VAR_0->data[VAR_1] = ((void*)0);
  VAR_0->length[VAR_1] = 0;
 }
 VAR_0->read = VAR_0->write = VAR_0->count = VAR_0->segment_pending = 0;

 return (0);
}
