
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct net_device {int features; } ;
struct e1000_hw {scalar_t__ mac_type; } ;
struct e1000_adapter {int tso_force; struct e1000_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,char*,char*) ;
 struct e1000_adapter* FUNC_1 (struct net_device*) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_6, u32 VAR_7)
{
 struct e1000_adapter *VAR_8 = FUNC_1(VAR_6);
 struct e1000_hw *VAR_9 = &VAR_8->hw;

 if ((VAR_9->mac_type < VAR_3) ||
     (VAR_9->mac_type == VAR_4))
  return VAR_7 ? -VAR_0 : 0;

 if (VAR_7)
  VAR_6->features |= VAR_1;
 else
  VAR_6->features &= ~VAR_1;

 VAR_6->features &= ~VAR_2;

 FUNC_0(VAR_5, "TSO is %s\n", VAR_7 ? "Enabled" : "Disabled");
 VAR_8->tso_force = 1;
 return 0;
}
