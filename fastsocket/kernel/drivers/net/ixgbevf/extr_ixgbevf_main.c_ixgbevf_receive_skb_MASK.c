
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int vlan; } ;
struct TYPE_4__ {TYPE_1__ upper; } ;
union ixgbe_adv_rx_desc {TYPE_2__ wb; } ;
typedef int u8 ;
typedef int u16 ;
struct sk_buff {int dummy; } ;
struct ixgbevf_q_vector {int napi; struct ixgbevf_adapter* adapter; } ;
struct ixgbevf_adapter {int flags; scalar_t__ vlgrp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int *,scalar_t__,int ,struct sk_buff*) ;

__attribute__((used)) static void FUNC_4(struct ixgbevf_q_vector *VAR_2,
    struct sk_buff *VAR_3, u8 VAR_4,
    union ixgbe_adv_rx_desc *VAR_5)
{
 struct ixgbevf_adapter *VAR_6 = VAR_2->adapter;
 bool VAR_7 = (VAR_4 & VAR_1);
 u16 VAR_8 = FUNC_0(VAR_5->wb.upper.vlan);

 if (!(VAR_6->flags & VAR_0)) {
  if (VAR_6->vlgrp && VAR_7)
   FUNC_3(&VAR_2->napi,
      VAR_6->vlgrp,
      VAR_8, VAR_3);
  else
   FUNC_1(&VAR_2->napi, VAR_3);
 } else
  FUNC_2(VAR_3);
}
