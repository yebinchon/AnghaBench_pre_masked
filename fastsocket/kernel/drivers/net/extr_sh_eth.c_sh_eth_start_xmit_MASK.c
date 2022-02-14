
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct sk_buff {scalar_t__ len; int data; } ;
struct sh_eth_txdesc {scalar_t__ buffer_length; int status; int addr; } ;
struct sh_eth_private {int cur_tx; int dirty_tx; TYPE_1__* cd; struct sh_eth_txdesc* tx_ring; struct sk_buff** tx_skbuff; int lock; } ;
struct net_device {int trans_start; scalar_t__ base_addr; } ;
struct TYPE_2__ {int hw_swap; } ;


 int FUNC_0 (int ,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (struct sh_eth_private*,int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;
 int VAR_8 ;
 struct sh_eth_private* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,scalar_t__) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static int FUNC_13(struct sk_buff *VAR_9, struct net_device *VAR_10)
{
 struct sh_eth_private *VAR_11 = FUNC_5(VAR_10);
 struct sh_eth_txdesc *VAR_12;
 u32 VAR_13;
 unsigned long VAR_14;

 FUNC_10(&VAR_11->lock, VAR_14);
 if ((VAR_11->cur_tx - VAR_11->dirty_tx) >= (VAR_7 - 4)) {
  if (!FUNC_9(VAR_10)) {
   FUNC_6(VAR_10);
   FUNC_11(&VAR_11->lock, VAR_14);
   return VAR_3;
  }
 }
 FUNC_11(&VAR_11->lock, VAR_14);

 VAR_13 = VAR_11->cur_tx % VAR_7;
 VAR_11->tx_skbuff[VAR_13] = VAR_9;
 VAR_12 = &VAR_11->tx_ring[VAR_13];
 VAR_12->addr = FUNC_12(VAR_9->data);

 if (!VAR_11->cd->hw_swap)
  FUNC_8(FUNC_7(FUNC_0(VAR_12->addr, 4)),
     VAR_9->len + 2);

 FUNC_1(VAR_9->data, VAR_9->len);
 if (VAR_9->len < VAR_2)
  VAR_12->buffer_length = VAR_2;
 else
  VAR_12->buffer_length = VAR_9->len;

 if (VAR_13 >= VAR_7 - 1)
  VAR_12->status |= FUNC_2(VAR_11, VAR_5 | VAR_6);
 else
  VAR_12->status |= FUNC_2(VAR_11, VAR_5);

 VAR_11->cur_tx++;

 if (!(FUNC_3(VAR_10->base_addr + VAR_0) & VAR_1))
  FUNC_4(VAR_1, VAR_10->base_addr + VAR_0);

 VAR_10->trans_start = VAR_8;

 return VAR_4;
}
