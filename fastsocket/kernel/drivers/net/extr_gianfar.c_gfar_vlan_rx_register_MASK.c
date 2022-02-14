
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct vlan_group {int dummy; } ;
struct net_device {int mtu; } ;
struct gfar_private {int rxlock; TYPE_1__* regs; struct vlan_group* vlgrp; } ;
struct TYPE_2__ {int rctrl; int tctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct net_device*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 struct gfar_private* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_4,
  struct vlan_group *VAR_5)
{
 struct gfar_private *VAR_6 = FUNC_3(VAR_4);
 unsigned long VAR_7;
 u32 VAR_8;

 FUNC_4(&VAR_6->rxlock, VAR_7);

 VAR_6->vlgrp = VAR_5;

 if (VAR_5) {

  VAR_8 = FUNC_1(&VAR_6->regs->tctrl);
  VAR_8 |= VAR_3;

  FUNC_2(&VAR_6->regs->tctrl, VAR_8);


  VAR_8 = FUNC_1(&VAR_6->regs->rctrl);
  VAR_8 |= (VAR_2 | VAR_0);
  FUNC_2(&VAR_6->regs->rctrl, VAR_8);
 } else {

  VAR_8 = FUNC_1(&VAR_6->regs->tctrl);
  VAR_8 &= ~VAR_3;
  FUNC_2(&VAR_6->regs->tctrl, VAR_8);


  VAR_8 = FUNC_1(&VAR_6->regs->rctrl);
  VAR_8 &= ~VAR_2;

  if (VAR_8 & VAR_1)
   VAR_8 |= VAR_0;
  else
   VAR_8 &= ~VAR_0;
  FUNC_2(&VAR_6->regs->rctrl, VAR_8);
 }

 FUNC_0(VAR_4, VAR_4->mtu);

 FUNC_5(&VAR_6->rxlock, VAR_7);
}
