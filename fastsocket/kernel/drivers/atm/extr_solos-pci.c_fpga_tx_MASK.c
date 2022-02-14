
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct solos_card {int tx_mask; int tx_lock; scalar_t__ config_regs; TYPE_2__* dev; scalar_t__ using_dma; int tx_queue_lock; int * tx_queue; struct sk_buff** tx_skb; } ;
struct sk_buff {int len; int data; } ;
struct atm_vcc {TYPE_1__* stats; } ;
struct TYPE_7__ {int dma_addr; struct atm_vcc* vcc; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {int tx; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_4__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct solos_card*,unsigned char) ;
 scalar_t__ FUNC_2 (unsigned char) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,unsigned char) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int,scalar_t__) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_10 (TYPE_2__*,int,int ,int ) ;
 int FUNC_11 (struct sk_buff*) ;
 struct sk_buff* FUNC_12 (int *) ;
 int FUNC_13 (struct atm_vcc*,struct sk_buff*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,unsigned long) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *,unsigned long) ;

__attribute__((used)) static uint32_t FUNC_18(struct solos_card *VAR_3)
{
 uint32_t VAR_4, VAR_5;
 uint32_t VAR_6 = 0;
 struct sk_buff *VAR_7;
 struct atm_vcc *VAR_8;
 unsigned char VAR_9;
 unsigned long VAR_10;

 FUNC_15(&VAR_3->tx_lock, VAR_10);

 VAR_5 = FUNC_6(VAR_3->config_regs + VAR_0);







 VAR_4 = VAR_3->tx_mask & ~VAR_5;

 for (VAR_9 = 0; VAR_4; VAR_4 >>= 1, VAR_9++) {
  if (VAR_4 & 1) {
   struct sk_buff *VAR_11 = VAR_3->tx_skb[VAR_9];
   if (VAR_11)
    FUNC_10(VAR_3->dev, FUNC_0(VAR_11)->dma_addr,
       VAR_11->len, VAR_1);

   FUNC_14(&VAR_3->tx_queue_lock);
   VAR_7 = FUNC_12(&VAR_3->tx_queue[VAR_9]);
   if (!VAR_7)
    VAR_3->tx_mask &= ~(1 << VAR_9);
   FUNC_16(&VAR_3->tx_queue_lock);

   if (VAR_7 && !VAR_3->using_dma) {
    FUNC_8(FUNC_1(VAR_3, VAR_9), VAR_7->data, VAR_7->len);
    VAR_6 |= 1 << VAR_9;
    VAR_11 = VAR_7;
   } else if (VAR_7 && VAR_3->using_dma) {
    FUNC_0(VAR_7)->dma_addr = FUNC_9(VAR_3->dev, VAR_7->data,
               VAR_7->len, VAR_1);
    FUNC_7(FUNC_0(VAR_7)->dma_addr,
       VAR_3->config_regs + FUNC_2(VAR_9));
   }

   if (!VAR_11)
    continue;


   if (VAR_2) {
    FUNC_4(&VAR_3->dev->dev, "Transmitted: port %d\n",
      VAR_9);
    FUNC_11(VAR_11);
   }

   VAR_8 = FUNC_0(VAR_11)->vcc;

   if (VAR_8) {
    FUNC_3(&VAR_8->stats->tx);
    FUNC_13(VAR_8, VAR_11);
   } else
    FUNC_5(VAR_11);

  }
 }

 if (VAR_6)
  FUNC_7(VAR_6, VAR_3->config_regs + VAR_0);

 FUNC_17(&VAR_3->tx_lock, VAR_10);
 return VAR_5;
}
