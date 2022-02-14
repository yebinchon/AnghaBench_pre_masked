
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct sk_buff {int protocol; struct net_device* dev; } ;
struct TYPE_2__ {scalar_t__ napi; } ;
struct s2io_nic {TYPE_1__ config; scalar_t__ vlgrp; scalar_t__ vlan_strip_flag; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct sk_buff*,struct net_device*) ;
 struct s2io_nic* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*,scalar_t__,scalar_t__) ;
 int FUNC_5 (struct sk_buff*,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct sk_buff *VAR_0, u16 VAR_1)
{
 struct net_device *VAR_2 = VAR_0->dev;
 struct s2io_nic *VAR_3 = FUNC_1(VAR_2);

 VAR_0->protocol = FUNC_0(VAR_0, VAR_2);
 if (VAR_3->vlgrp && VAR_1 && (VAR_3->vlan_strip_flag)) {

  if (VAR_3->config.napi)
   FUNC_4(VAR_0, VAR_3->vlgrp, VAR_1);
  else
   FUNC_5(VAR_0, VAR_3->vlgrp, VAR_1);
 } else {
  if (VAR_3->config.napi)
   FUNC_2(VAR_0);
  else
   FUNC_3(VAR_0);
 }
}
