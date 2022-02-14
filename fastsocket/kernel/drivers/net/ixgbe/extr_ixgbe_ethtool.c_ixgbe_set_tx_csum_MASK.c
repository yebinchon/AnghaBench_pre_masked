
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int features; } ;
struct TYPE_3__ {int type; } ;
struct TYPE_4__ {TYPE_1__ mac; } ;
struct ixgbe_adapter {TYPE_2__ hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 struct ixgbe_adapter* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_3, u32 VAR_4)
{
 struct ixgbe_adapter *VAR_5 = FUNC_0(VAR_3);
 u32 VAR_6;

 VAR_6 = (VAR_1 | VAR_0);
 switch (VAR_5->hw.mac.type) {
 case 129:
 case 128:
  VAR_6 |= VAR_2;
  break;
 default:
  break;
 }
 if (VAR_4)
  VAR_3->features |= VAR_6;
 else
  VAR_3->features &= ~VAR_6;

 return 0;
}
