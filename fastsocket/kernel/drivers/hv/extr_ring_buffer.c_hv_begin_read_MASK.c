
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hv_ring_buffer_info {TYPE_1__* ring_buffer; } ;
struct TYPE_2__ {int interrupt_mask; } ;


 int FUNC_0 () ;

void FUNC_1(struct hv_ring_buffer_info *VAR_0)
{
 VAR_0->ring_buffer->interrupt_mask = 1;
 FUNC_0();
}
