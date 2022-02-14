
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int vlan; } ;
struct TYPE_4__ {TYPE_1__ upper; } ;
union ixgbe_adv_rx_desc {TYPE_2__ wb; } ;
typedef int u16 ;
struct sk_buff {struct net_device* dev; } ;
struct net_device {int features; } ;
struct ixgbe_q_vector {int napi; struct ixgbe_adapter* adapter; } ;
struct ixgbe_adapter {int flags; int vlgrp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (union ixgbe_adv_rx_desc*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int *,int ,int ,struct sk_buff*) ;

__attribute__((used)) static void FUNC_5(struct ixgbe_q_vector *VAR_3,
    struct sk_buff *VAR_4, union ixgbe_adv_rx_desc *VAR_5)
{
 struct ixgbe_adapter *VAR_6 = VAR_3->adapter;
 struct net_device *VAR_7 = VAR_4->dev;

 if (!(VAR_6->flags & VAR_0)) {
  if ((VAR_7->features & VAR_2) &&
      FUNC_0(VAR_5, VAR_1)) {
   u16 VAR_8 = FUNC_1(VAR_5->wb.upper.vlan);
   FUNC_4(&VAR_3->napi, VAR_6->vlgrp, VAR_8, VAR_4);
  }
  else
   FUNC_2(&VAR_3->napi, VAR_4);
 } else {
  FUNC_3(VAR_4);
 }
}
