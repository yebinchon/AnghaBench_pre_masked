
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ixgbe_bus_info {int func; int lan_id; } ;
struct ixgbe_hw {struct ixgbe_bus_info bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_1(struct ixgbe_hw *VAR_5)
{
 struct ixgbe_bus_info *VAR_6 = &VAR_5->bus;
 u32 VAR_7;

 VAR_7 = FUNC_0(VAR_5, VAR_2);
 VAR_6->func = (VAR_7 & VAR_3) >> VAR_4;
 VAR_6->lan_id = VAR_6->func;


 VAR_7 = FUNC_0(VAR_5, VAR_0);
 if (VAR_7 & VAR_1)
  VAR_6->func ^= 0x1;
}
