
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct hv_ring_buffer_info {TYPE_1__* ring_buffer; } ;
struct TYPE_2__ {scalar_t__ interrupt_mask; } ;


 int FUNC_0 (struct hv_ring_buffer_info*,int *,int *) ;
 int FUNC_1 () ;

u32 FUNC_2(struct hv_ring_buffer_info *VAR_0)
{
 u32 VAR_1;
 u32 VAR_2;

 VAR_0->ring_buffer->interrupt_mask = 0;
 FUNC_1();






 FUNC_0(VAR_0, &VAR_1, &VAR_2);

 return VAR_1;
}
