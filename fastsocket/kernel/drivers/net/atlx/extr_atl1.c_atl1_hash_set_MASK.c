
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct atl1_hw {scalar_t__ hw_addr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

void FUNC_2(struct atl1_hw *VAR_1, u32 VAR_2)
{
 u32 VAR_3, VAR_4;
 u32 VAR_5;
 VAR_4 = (VAR_2 >> 31) & 0x1;
 VAR_3 = (VAR_2 >> 26) & 0x1F;
 VAR_5 = FUNC_0((VAR_1->hw_addr + VAR_0) + (VAR_4 << 2));
 VAR_5 |= (1 << VAR_3);
 FUNC_1(VAR_5, (VAR_1->hw_addr + VAR_0) + (VAR_4 << 2));
}
