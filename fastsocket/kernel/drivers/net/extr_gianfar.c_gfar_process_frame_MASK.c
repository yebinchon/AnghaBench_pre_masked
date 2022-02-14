
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int protocol; scalar_t__ data; } ;
struct rxfcb {int flags; int vlctl; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int kernel_dropped; } ;
struct gfar_private {TYPE_1__ extra_stats; scalar_t__ vlgrp; scalar_t__ rx_csum_enable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*,struct net_device*) ;
 int FUNC_1 (struct sk_buff*,struct rxfcb*) ;
 struct gfar_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*,int) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (struct sk_buff*,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_2, struct sk_buff *VAR_3,
         int VAR_4)
{
 struct gfar_private *VAR_5 = FUNC_2(VAR_2);
 struct rxfcb *VAR_6 = ((void*)0);

 int VAR_7;


 VAR_6 = (struct rxfcb *)VAR_3->data;



 if (VAR_4)
  FUNC_4(VAR_3, VAR_4);

 if (VAR_5->rx_csum_enable)
  FUNC_1(VAR_3, VAR_6);


 VAR_3->protocol = FUNC_0(VAR_3, VAR_2);


 if (FUNC_5(VAR_5->vlgrp && (VAR_6->flags & VAR_1)))
  VAR_7 = FUNC_6(VAR_3, VAR_5->vlgrp, VAR_6->vlctl);
 else
  VAR_7 = FUNC_3(VAR_3);

 if (VAR_0 == VAR_7)
  VAR_5->extra_stats.kernel_dropped++;

 return 0;
}
