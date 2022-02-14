
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ath5k_hw {int hw; int dev; } ;
struct ath5k_buf {TYPE_1__* desc; scalar_t__ skbaddr; TYPE_2__* skb; } ;
struct TYPE_4__ {int len; } ;
struct TYPE_3__ {scalar_t__ ds_data; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,scalar_t__,int ,int ) ;
 int FUNC_2 (int ,TYPE_2__*) ;

void
FUNC_3(struct ath5k_hw *VAR_1, struct ath5k_buf *VAR_2)
{
 FUNC_0(!VAR_2);
 if (!VAR_2->skb)
  return;
 FUNC_1(VAR_1->dev, VAR_2->skbaddr, VAR_2->skb->len,
   VAR_0);
 FUNC_2(VAR_1->hw, VAR_2->skb);
 VAR_2->skb = ((void*)0);
 VAR_2->skbaddr = 0;
 VAR_2->desc->ds_data = 0;
}
