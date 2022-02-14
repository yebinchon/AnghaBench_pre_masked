
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct net_device {int dummy; } ;
struct e1000_hw {int dummy; } ;
struct e1000_adapter {int flags; int vlgrp; struct e1000_hw hw; } ;


 int FUNC_0 (struct e1000_hw*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct e1000_adapter*) ;
 int FUNC_2 (struct e1000_adapter*) ;
 int FUNC_3 (struct e1000_hw*,int,int) ;
 struct e1000_adapter* FUNC_4 (struct net_device*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int,int *) ;

__attribute__((used)) static void FUNC_7(struct net_device *VAR_2, u16 VAR_3)
{
 struct e1000_adapter *VAR_4 = FUNC_4(VAR_2);
 struct e1000_hw *VAR_5 = &VAR_4->hw;
 u32 VAR_6, VAR_7;

 if (!FUNC_5(VAR_1, &VAR_4->flags))
  FUNC_1(VAR_4);
 FUNC_6(VAR_4->vlgrp, VAR_3, ((void*)0));
 if (!FUNC_5(VAR_1, &VAR_4->flags))
  FUNC_2(VAR_4);


 VAR_7 = (VAR_3 >> 5) & 0x7F;
 VAR_6 = FUNC_0(VAR_5, VAR_0, VAR_7);
 VAR_6 &= ~(1 << (VAR_3 & 0x1F));
 FUNC_3(VAR_5, VAR_7, VAR_6);
}
