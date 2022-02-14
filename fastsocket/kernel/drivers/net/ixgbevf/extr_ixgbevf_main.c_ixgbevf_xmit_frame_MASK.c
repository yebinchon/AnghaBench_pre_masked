
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct sk_buff {scalar_t__ protocol; int len; } ;
struct net_device {int dummy; } ;
struct ixgbevf_ring {unsigned int next_to_use; scalar_t__ tail; } ;
struct TYPE_3__ {scalar_t__ hw_addr; } ;
struct ixgbevf_adapter {TYPE_1__ hw; scalar_t__ vlgrp; int tx_busy; struct ixgbevf_ring* tx_ring; } ;
struct TYPE_4__ {unsigned short nr_frags; int * frags; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct ixgbevf_ring*,scalar_t__) ;
 int FUNC_6 (struct ixgbevf_ring*,struct sk_buff*,unsigned int,int *) ;
 scalar_t__ FUNC_7 (struct ixgbevf_ring*,struct sk_buff*,unsigned int) ;
 int FUNC_8 (struct ixgbevf_ring*,struct sk_buff*,unsigned int) ;
 int FUNC_9 (struct ixgbevf_ring*,unsigned int,int ,unsigned int,int ,int ) ;
 struct ixgbevf_adapter* FUNC_10 (struct net_device*) ;
 int FUNC_11 (int *) ;
 int * FUNC_12 (struct sk_buff*,int ,int ,int *) ;
 int FUNC_13 (struct sk_buff*) ;
 TYPE_2__* FUNC_14 (struct sk_buff*) ;
 unsigned int FUNC_15 (struct sk_buff*) ;
 scalar_t__ FUNC_16 (struct sk_buff*) ;
 int FUNC_17 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_18(struct sk_buff *VAR_9, struct net_device *VAR_10)
{
 struct ixgbevf_adapter *VAR_11 = FUNC_10(VAR_10);
 struct ixgbevf_ring *VAR_12;
 unsigned int VAR_13;
 unsigned int VAR_14 = 0;
 u8 VAR_15 = 0;
 int VAR_16 = 0, VAR_17;
 u16 VAR_18 = FUNC_0(FUNC_13(VAR_9));



 u8 *VAR_19 = FUNC_12(VAR_9, 0, 0, ((void*)0));
 if (!VAR_19 || FUNC_4(VAR_19)) {
  FUNC_1(VAR_9);
  return VAR_8;
 }

 VAR_12 = &VAR_11->tx_ring[VAR_16];
 VAR_18 += FUNC_14(VAR_9)->nr_frags;

 if (FUNC_5(VAR_12, VAR_18 + 3)) {
  VAR_11->tx_busy++;
  return VAR_7;
 }

 if (VAR_11->vlgrp && FUNC_16(VAR_9)) {
  VAR_14 |= FUNC_15(VAR_9);
  VAR_14 <<= VAR_6;
  VAR_14 |= VAR_5;
 }

 VAR_13 = VAR_12->next_to_use;

 if (VAR_9->protocol == FUNC_3(VAR_1))
  VAR_14 |= VAR_3;
 VAR_17 = FUNC_6(VAR_12, VAR_9, VAR_14, &VAR_15);
 if (VAR_17 < 0) {
  FUNC_2(VAR_9);
  return VAR_8;
 }

 if (VAR_17)
  VAR_14 |= VAR_4 | VAR_2;
 else if (FUNC_7(VAR_12, VAR_9, VAR_14))
  VAR_14 |= VAR_2;

 FUNC_9(VAR_12, VAR_14,
    FUNC_8(VAR_12, VAR_9, VAR_14),
    VAR_13, VAR_9->len, VAR_15);

 FUNC_17(VAR_12->next_to_use, VAR_11->hw.hw_addr + VAR_12->tail);

 FUNC_5(VAR_12, VAR_0);

 return VAR_8;
}
