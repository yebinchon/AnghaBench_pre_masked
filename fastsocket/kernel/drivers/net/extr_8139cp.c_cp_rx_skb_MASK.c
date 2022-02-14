
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; int protocol; } ;
struct cp_private {int vlgrp; TYPE_2__* dev; } ;
struct cp_desc {int opts2; } ;
struct TYPE_3__ {int rx_bytes; int rx_packets; } ;
struct TYPE_4__ {TYPE_1__ stats; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*,TYPE_2__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static inline void FUNC_6 (struct cp_private *VAR_1, struct sk_buff *VAR_2,
         struct cp_desc *VAR_3)
{
 VAR_2->protocol = FUNC_1 (VAR_2, VAR_1->dev);

 VAR_1->dev->stats.rx_packets++;
 VAR_1->dev->stats.rx_bytes += VAR_2->len;







  FUNC_3(VAR_2);
}
