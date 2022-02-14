
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_3__ {int autoneg; } ;
struct TYPE_4__ {TYPE_1__ mac; } ;
struct e1000_adapter {TYPE_2__ hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct e1000_adapter*) ;
 struct e1000_adapter* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_2)
{
 struct e1000_adapter *VAR_3 = FUNC_1(VAR_2);

 if (!FUNC_2(VAR_2))
  return -VAR_0;

 if (!VAR_3->hw.mac.autoneg)
  return -VAR_1;

 FUNC_0(VAR_3);

 return 0;
}
