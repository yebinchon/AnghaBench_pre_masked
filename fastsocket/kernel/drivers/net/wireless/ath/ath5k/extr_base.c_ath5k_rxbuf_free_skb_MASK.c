
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath_common {int rx_bufsize; } ;
struct ath5k_hw {int dev; } ;
struct ath5k_buf {TYPE_1__* desc; scalar_t__ skbaddr; int * skb; } ;
struct TYPE_2__ {scalar_t__ ds_data; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 struct ath_common* FUNC_1 (struct ath5k_hw*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,scalar_t__,int ,int ) ;

void
FUNC_4(struct ath5k_hw *VAR_1, struct ath5k_buf *VAR_2)
{
 struct ath_common *VAR_3 = FUNC_1(VAR_1);

 FUNC_0(!VAR_2);
 if (!VAR_2->skb)
  return;
 FUNC_3(VAR_1->dev, VAR_2->skbaddr, VAR_3->rx_bufsize,
   VAR_0);
 FUNC_2(VAR_2->skb);
 VAR_2->skb = ((void*)0);
 VAR_2->skbaddr = 0;
 VAR_2->desc->ds_data = 0;
}
