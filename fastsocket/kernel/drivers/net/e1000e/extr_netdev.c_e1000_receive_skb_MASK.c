
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int protocol; } ;
struct net_device {int dummy; } ;
struct e1000_adapter {int napi; int vlgrp; } ;
typedef int __le16 ;


 int VAR_0 ;
 int FUNC_0 (struct e1000_adapter*,int,struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*,struct net_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,struct sk_buff*) ;
 int FUNC_4 (int *,int ,int ,struct sk_buff*) ;

__attribute__((used)) static void FUNC_5(struct e1000_adapter *VAR_1,
         struct net_device *VAR_2, struct sk_buff *VAR_3,
         u32 VAR_4, __le16 VAR_5)
{

 FUNC_0(VAR_1, VAR_4, VAR_3);

 VAR_3->protocol = FUNC_1(VAR_3, VAR_2);

 if (VAR_4 & VAR_0)
  FUNC_4(&VAR_1->napi, VAR_1->vlgrp,
     FUNC_2(VAR_5), VAR_3);
 else
  FUNC_3(&VAR_1->napi, VAR_3);
}
