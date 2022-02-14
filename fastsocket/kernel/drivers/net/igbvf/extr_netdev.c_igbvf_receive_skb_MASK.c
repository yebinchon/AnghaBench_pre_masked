
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct igbvf_adapter {int flags; int vlgrp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct igbvf_adapter *VAR_4,
                              struct net_device *VAR_5,
                              struct sk_buff *VAR_6,
                              u32 VAR_7, u16 VAR_8)
{
 u16 VAR_9;

 if (VAR_4->vlgrp && (VAR_7 & VAR_2)) {
  if ((VAR_4->flags & VAR_3) &&
      (VAR_7 & VAR_0))
   VAR_9 = FUNC_0(VAR_8) & VAR_1;
  else
   VAR_9 = FUNC_1(VAR_8) & VAR_1;
  FUNC_3(VAR_6, VAR_4->vlgrp, VAR_9);
 } else
  FUNC_2(VAR_6);
}
