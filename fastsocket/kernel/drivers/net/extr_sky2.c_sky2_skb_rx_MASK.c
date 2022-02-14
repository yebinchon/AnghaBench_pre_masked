
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct sky2_port {TYPE_1__* hw; scalar_t__ vlgrp; int rx_tag; } ;
struct sk_buff {scalar_t__ ip_summed; } ;
struct TYPE_2__ {int napi; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int *,scalar_t__,int ,struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*,scalar_t__,int ) ;

__attribute__((used)) static inline void FUNC_5(const struct sky2_port *VAR_2,
          u32 VAR_3, struct sk_buff *VAR_4)
{
 if (VAR_4->ip_summed == VAR_0)
  FUNC_2(VAR_4);
 else
  FUNC_1(&VAR_2->hw->napi, VAR_4);
}
