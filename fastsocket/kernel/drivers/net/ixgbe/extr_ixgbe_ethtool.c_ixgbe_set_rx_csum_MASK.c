
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct net_device {int features; } ;
struct TYPE_4__ {int type; } ;
struct TYPE_3__ {TYPE_2__ mac; } ;
struct ixgbe_adapter {int flags2; TYPE_1__ hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct net_device*) ;


 int FUNC_1 (struct ixgbe_adapter*) ;
 struct ixgbe_adapter* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_4, u32 VAR_5)
{
 struct ixgbe_adapter *VAR_6 = FUNC_2(VAR_4);
 bool VAR_7 = 0;

 if (VAR_5) {
  VAR_4->features |= VAR_3;
 } else {
  VAR_4->features &= ~VAR_3;

  if (VAR_6->flags2 & VAR_0) {
   VAR_6->flags2 &= ~VAR_1;
   VAR_4->features &= ~VAR_2;
  }

  switch (VAR_6->hw.mac.type) {
  case 128:
   FUNC_1(VAR_6);
   break;
  case 129:
   VAR_7 = 1;
   break;
  default:
   break;
  }
 }

 if (VAR_7)
  FUNC_0(VAR_4);

 return 0;
}
