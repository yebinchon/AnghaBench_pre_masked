
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {int dummy; } ;
struct ixgbe_adapter {int dcbx_cap; } ;
 struct ixgbe_adapter* FUNC_0 (struct net_device*) ;

__attribute__((used)) static u8 FUNC_1(struct net_device *VAR_0, int VAR_1, u8 *VAR_2)
{
 struct ixgbe_adapter *VAR_3 = FUNC_0(VAR_0);

 switch (VAR_1) {
 case 130:
  *VAR_2 = 1;
  break;
 case 132:
  *VAR_2 = 1;
  break;
 case 128:
  *VAR_2 = 0;
  break;
 case 129:
  *VAR_2 = 0x80;
  break;
 case 131:
  *VAR_2 = 0x80;
  break;
 case 133:
  *VAR_2 = 1;
  break;
 case 135:
  *VAR_2 = 0;
  break;
 case 134:
  *VAR_2 = VAR_3->dcbx_cap;
  break;
 default:
  *VAR_2 = 0;
  break;
 }

 return 0;
}
