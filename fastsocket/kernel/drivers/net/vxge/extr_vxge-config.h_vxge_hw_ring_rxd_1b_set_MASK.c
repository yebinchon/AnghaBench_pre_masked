
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vxge_hw_ring_rxd_1 {int control_1; int buffer0_ptr; } ;
typedef int dma_addr_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;

__attribute__((used)) static inline
void FUNC_1(
 void *VAR_1,
 dma_addr_t VAR_2,
 u32 VAR_3)
{
 struct vxge_hw_ring_rxd_1 *VAR_4 = (struct vxge_hw_ring_rxd_1 *)VAR_1;
 VAR_4->buffer0_ptr = VAR_2;
 VAR_4->control_1 &= ~VAR_0;
 VAR_4->control_1 |= FUNC_0(VAR_3);
}
