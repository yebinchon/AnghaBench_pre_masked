
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int mta_reg_count; } ;
struct e1000_hw {TYPE_1__ mac; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 () ;

void FUNC_3(struct e1000_hw *VAR_1, u32 VAR_2)
{
 u32 VAR_3, VAR_4, VAR_5;
 VAR_4 = (VAR_2 >> 5) & (VAR_1->mac.mta_reg_count - 1);
 VAR_3 = VAR_2 & 0x1F;

 VAR_5 = FUNC_0(VAR_0, VAR_4);

 VAR_5 |= (1 << VAR_3);

 FUNC_1(VAR_0, VAR_4, VAR_5);
 FUNC_2();
}
