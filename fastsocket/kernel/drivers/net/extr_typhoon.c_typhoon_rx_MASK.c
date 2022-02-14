
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct typhoon {int state_lock; int * vlgrp; int dev; int pdev; struct rxbuff_ent* rxbuffers; } ;
struct sk_buff {int ip_summed; int protocol; int data; } ;
struct rxbuff_ent {int dma_addr; struct sk_buff* skb; } ;
struct rx_desc {scalar_t__ addr; int flags; int rxStatus; int vlanTag; int frameLen; } ;
struct basic_ring {scalar_t__ ringBase; } ;
typedef int dma_addr_t ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (scalar_t__) ;
 struct sk_buff* FUNC_1 (int) ;
 int FUNC_2 (struct sk_buff*,int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int volatile) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int ,int ) ;
 int FUNC_8 (int ,int ,int ,int ) ;
 int FUNC_9 (int ,int ,int ,int ) ;
 int VAR_9 ;
 int FUNC_10 (struct sk_buff*,int ,int) ;
 int FUNC_11 (struct sk_buff*,int) ;
 int FUNC_12 (struct sk_buff*,int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct typhoon*,scalar_t__) ;
 int FUNC_16 (scalar_t__*,int) ;
 int FUNC_17 (struct typhoon*,scalar_t__) ;
 int FUNC_18 (struct sk_buff*,int *,int) ;

__attribute__((used)) static int
FUNC_19(struct typhoon *VAR_10, struct basic_ring *VAR_11, volatile __le32 * VAR_12,
    volatile __le32 * VAR_13, int VAR_14)
{
 struct rx_desc *VAR_15;
 struct sk_buff *VAR_16, *VAR_17;
 struct rxbuff_ent *VAR_18;
 dma_addr_t VAR_19;
 u32 VAR_20;
 u32 VAR_21;
 int VAR_22;
 u32 VAR_23;
 __le32 VAR_24;
 int VAR_25;

 VAR_25 = 0;
 VAR_20 = FUNC_4(*VAR_12);
 VAR_21 = FUNC_4(*VAR_13);
 while(VAR_21 != VAR_20 && VAR_14 > 0) {
  VAR_15 = (struct rx_desc *) (VAR_11->ringBase + VAR_21);
  VAR_23 = VAR_15->addr;
  VAR_18 = &VAR_10->rxbuffers[VAR_23];
  VAR_16 = VAR_18->skb;
  VAR_19 = VAR_18->dma_addr;

  FUNC_16(&VAR_21, 1);

  if(VAR_15->flags & VAR_4) {
   FUNC_17(VAR_10, VAR_23);
   continue;
  }

  VAR_22 = FUNC_3(VAR_15->frameLen);

  if(VAR_22 < VAR_9 &&
     (VAR_17 = FUNC_1(VAR_22 + 2)) != ((void*)0)) {
   FUNC_12(VAR_17, 2);
   FUNC_7(VAR_10->pdev, VAR_19,
          VAR_3,
          VAR_2);
   FUNC_10(VAR_17, VAR_16->data, VAR_22);
   FUNC_8(VAR_10->pdev, VAR_19,
             VAR_3,
             VAR_2);
   FUNC_11(VAR_17, VAR_22);
   FUNC_17(VAR_10, VAR_23);
  } else {
   VAR_17 = VAR_16;
   FUNC_11(VAR_17, VAR_22);
   FUNC_9(VAR_10->pdev, VAR_19, VAR_3,
           VAR_2);
   FUNC_15(VAR_10, VAR_23);
  }
  VAR_17->protocol = FUNC_2(VAR_17, VAR_10->dev);
  VAR_24 = VAR_15->rxStatus & (VAR_5 |
   VAR_7 | VAR_6);
  if(VAR_24 ==
     (VAR_5 | VAR_6)
     || VAR_24 ==
     (VAR_5 | VAR_7)) {
   VAR_17->ip_summed = VAR_1;
  } else
   VAR_17->ip_summed = VAR_0;

  FUNC_13(&VAR_10->state_lock);
  if(VAR_10->vlgrp != ((void*)0) && VAR_15->rxStatus & VAR_8)
   FUNC_18(VAR_17, VAR_10->vlgrp,
       FUNC_6(VAR_15->vlanTag) & 0xffff);
  else
   FUNC_5(VAR_17);
  FUNC_14(&VAR_10->state_lock);

  VAR_25++;
  VAR_14--;
 }
 *VAR_13 = FUNC_0(VAR_21);

 return VAR_25;
}
