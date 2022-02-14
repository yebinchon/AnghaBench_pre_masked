
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct atl1_hw {scalar_t__ hw_addr; scalar_t__* mac_addr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,scalar_t__) ;

void FUNC_1(struct atl1_hw *VAR_1)
{
 u32 VAR_2;





 VAR_2 = (((u32) VAR_1->mac_addr[2]) << 24) |
     (((u32) VAR_1->mac_addr[3]) << 16) |
     (((u32) VAR_1->mac_addr[4]) << 8) | (((u32) VAR_1->mac_addr[5]));
 FUNC_0(VAR_2, VAR_1->hw_addr + VAR_0);

 VAR_2 = (((u32) VAR_1->mac_addr[0]) << 8) | (((u32) VAR_1->mac_addr[1]));
 FUNC_0(VAR_2, (VAR_1->hw_addr + VAR_0) + (1 << 2));
}
