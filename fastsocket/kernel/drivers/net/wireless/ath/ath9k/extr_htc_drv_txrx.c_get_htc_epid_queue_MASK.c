
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff_head {int dummy; } ;
struct ath_common {int dummy; } ;
struct TYPE_2__ {struct sk_buff_head data_vo_queue; struct sk_buff_head data_vi_queue; struct sk_buff_head data_bk_queue; struct sk_buff_head data_be_queue; struct sk_buff_head cab_ep_queue; struct sk_buff_head mgmt_ep_queue; } ;
struct ath9k_htc_priv {TYPE_1__ tx; int data_vo_ep; int data_vi_ep; int data_bk_ep; int data_be_ep; int cab_ep; int mgmt_ep; int ah; } ;


 struct ath_common* FUNC_0 (int ) ;
 int FUNC_1 (struct ath_common*,char*,int ) ;

__attribute__((used)) static inline struct sk_buff_head*
FUNC_2(struct ath9k_htc_priv *VAR_0, u8 VAR_1)
{
 struct ath_common *VAR_2 = FUNC_0(VAR_0->ah);
 struct sk_buff_head *VAR_3 = ((void*)0);

 if (VAR_1 == VAR_0->mgmt_ep)
  VAR_3 = &VAR_0->tx.mgmt_ep_queue;
 else if (VAR_1 == VAR_0->cab_ep)
  VAR_3 = &VAR_0->tx.cab_ep_queue;
 else if (VAR_1 == VAR_0->data_be_ep)
  VAR_3 = &VAR_0->tx.data_be_queue;
 else if (VAR_1 == VAR_0->data_bk_ep)
  VAR_3 = &VAR_0->tx.data_bk_queue;
 else if (VAR_1 == VAR_0->data_vi_ep)
  VAR_3 = &VAR_0->tx.data_vi_queue;
 else if (VAR_1 == VAR_0->data_vo_ep)
  VAR_3 = &VAR_0->tx.data_vo_queue;
 else
  FUNC_1(VAR_2, "Invalid EPID: %d\n", VAR_1);

 return VAR_3;
}
