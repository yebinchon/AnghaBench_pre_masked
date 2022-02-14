
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int protocol; } ;
struct e1000_adapter {int napi; scalar_t__ vlgrp; int netdev; } ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,struct sk_buff*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int *,scalar_t__,int,struct sk_buff*) ;

__attribute__((used)) static void FUNC_5(struct e1000_adapter *VAR_2, u8 VAR_3,
         __le16 VAR_4, struct sk_buff *VAR_5)
{
 VAR_5->protocol = FUNC_0(VAR_5, VAR_2->netdev);

 if ((FUNC_3(VAR_2->vlgrp && (VAR_3 & VAR_1))))
  FUNC_4(&VAR_2->napi, VAR_2->vlgrp,
     FUNC_1(VAR_4) & VAR_0,
     VAR_5);
 else
  FUNC_2(&VAR_2->napi, VAR_5);
}
