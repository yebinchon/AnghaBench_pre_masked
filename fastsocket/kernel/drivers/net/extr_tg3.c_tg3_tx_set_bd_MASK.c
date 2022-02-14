
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct tg3_tx_buffer_desc {int addr_hi; int addr_lo; int len_flags; int vlan_tag; } ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static inline void FUNC_0(struct tg3_tx_buffer_desc *VAR_3,
     dma_addr_t VAR_4, u32 VAR_5, u32 VAR_6,
     u32 VAR_7, u32 VAR_8)
{
 VAR_3->addr_hi = ((u64) VAR_4 >> 32);
 VAR_3->addr_lo = ((u64) VAR_4 & 0xffffffff);
 VAR_3->len_flags = (VAR_5 << VAR_0) | (VAR_6 & 0x0000ffff);
 VAR_3->vlan_tag = (VAR_7 << VAR_1) | (VAR_8 << VAR_2);
}
