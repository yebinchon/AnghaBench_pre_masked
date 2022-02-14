
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct net_device {int features; } ;
struct e1000_hw {scalar_t__ mac_type; } ;
struct e1000_adapter {struct e1000_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct e1000_adapter* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_3, u32 VAR_4)
{
 struct e1000_adapter *VAR_5 = FUNC_0(VAR_3);
 struct e1000_hw *VAR_6 = &VAR_5->hw;

 if (VAR_6->mac_type < VAR_2) {
  if (!VAR_4)
   return -VAR_0;
  return 0;
 }

 if (VAR_4)
  VAR_3->features |= VAR_1;
 else
  VAR_3->features &= ~VAR_1;

 return 0;
}
