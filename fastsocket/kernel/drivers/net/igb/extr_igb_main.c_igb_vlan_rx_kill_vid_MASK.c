
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct net_device {int dummy; } ;
struct e1000_hw {int dummy; } ;
struct igb_adapter {int vfs_allocated_count; int state; int vlgrp; struct e1000_hw hw; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int FUNC_0 (struct igb_adapter*) ;
 int FUNC_1 (struct igb_adapter*) ;
 int FUNC_2 (struct e1000_hw*,int ,int) ;
 scalar_t__ FUNC_3 (struct igb_adapter*,int ,int,int) ;
 struct igb_adapter* FUNC_4 (struct net_device*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int ,int *) ;

__attribute__((used)) static void FUNC_7(struct net_device *VAR_1, u16 VAR_2)
{
 struct igb_adapter *VAR_3 = FUNC_4(VAR_1);
 struct e1000_hw *VAR_4 = &VAR_3->hw;
 int VAR_5 = VAR_3->vfs_allocated_count;
 s32 VAR_6;

 FUNC_0(VAR_3);
 FUNC_6(VAR_3->vlgrp, VAR_2, ((void*)0));

 if (!FUNC_5(VAR_0, &VAR_3->state))
  FUNC_1(VAR_3);


 VAR_6 = FUNC_3(VAR_3, VAR_2, 0, VAR_5);


 if (VAR_6)
  FUNC_2(VAR_4, VAR_2, 0);
}
