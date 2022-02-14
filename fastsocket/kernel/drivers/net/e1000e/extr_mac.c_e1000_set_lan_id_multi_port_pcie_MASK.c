
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct e1000_bus_info {int func; } ;
struct e1000_hw {struct e1000_bus_info bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;

void FUNC_1(struct e1000_hw *VAR_3)
{
 struct e1000_bus_info *VAR_4 = &VAR_3->bus;
 u32 VAR_5;




 VAR_5 = FUNC_0(VAR_2);
 VAR_4->func = (VAR_5 & VAR_0) >> VAR_1;
}
