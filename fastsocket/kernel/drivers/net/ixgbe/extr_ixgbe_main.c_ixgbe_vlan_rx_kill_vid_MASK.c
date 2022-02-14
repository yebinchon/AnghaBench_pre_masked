
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct net_device {int dummy; } ;
struct TYPE_3__ {int (* set_vfta ) (struct ixgbe_hw*,int ,int ,int) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ mac; } ;
struct ixgbe_adapter {struct ixgbe_hw hw; int state; int vlgrp; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct ixgbe_adapter*) ;
 int FUNC_2 (struct ixgbe_adapter*,int,int) ;
 struct ixgbe_adapter* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct ixgbe_hw*,int ,int ,int) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int ,int *) ;

__attribute__((used)) static void FUNC_7(struct net_device *VAR_1, u16 VAR_2)
{
 struct ixgbe_adapter *VAR_3 = FUNC_3(VAR_1);
 struct ixgbe_hw *VAR_4 = &VAR_3->hw;

 if (!FUNC_5(VAR_0, &VAR_3->state))
  FUNC_1(VAR_3);

 FUNC_6(VAR_3->vlgrp, VAR_2, ((void*)0));

 if (!FUNC_5(VAR_0, &VAR_3->state))
  FUNC_2(VAR_3, 1, 1);


 VAR_4->mac.ops.set_vfta(&VAR_3->hw, VAR_2, FUNC_0(0), 0);
}
