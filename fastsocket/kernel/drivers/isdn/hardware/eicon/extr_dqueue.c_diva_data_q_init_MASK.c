
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int max_length; int segments; int ** data; scalar_t__ segment_pending; scalar_t__ count; scalar_t__ write; scalar_t__ read; scalar_t__* length; } ;
typedef TYPE_1__ diva_um_idi_data_queue_t ;


 int FUNC_0 (TYPE_1__*) ;
 int * FUNC_1 (int ,int) ;

int
FUNC_2(diva_um_idi_data_queue_t * VAR_0,
   int VAR_1, int VAR_2)
{
 int VAR_3;

 VAR_0->max_length = VAR_1;
 VAR_0->segments = VAR_2;

 for (VAR_3 = 0; VAR_3 < VAR_0->segments; VAR_3++) {
  VAR_0->data[VAR_3] = ((void*)0);
  VAR_0->length[VAR_3] = 0;
 }
 VAR_0->read = VAR_0->write = VAR_0->count = VAR_0->segment_pending = 0;

 for (VAR_3 = 0; VAR_3 < VAR_0->segments; VAR_3++) {
  if (!(VAR_0->data[VAR_3] = FUNC_1(0, VAR_0->max_length))) {
   FUNC_0(VAR_0);
   return (-1);
  }
 }

 return (0);
}
