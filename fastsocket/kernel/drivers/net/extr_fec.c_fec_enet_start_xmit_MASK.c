
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; void* data; } ;
struct TYPE_2__ {int tx_bytes; } ;
struct net_device {int trans_start; int dev; TYPE_1__ stats; int name; } ;
struct fec_enet_private {size_t skb_cur; int tx_full; int hw_lock; struct bufdesc* cur_tx; struct bufdesc* dirty_tx; struct bufdesc* tx_bd_base; scalar_t__ hwp; struct sk_buff** tx_skbuff; void** tx_bounce; int link; } ;
struct bufdesc {unsigned short cbd_sc; int cbd_bufaddr; scalar_t__ cbd_datlen; } ;


 unsigned short VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 unsigned short VAR_4 ;
 unsigned short VAR_5 ;
 int VAR_6 ;
 unsigned long VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int *,void*,int ,int ) ;
 int VAR_13 ;
 int FUNC_1 (void*,void*,scalar_t__) ;
 struct fec_enet_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_8(struct sk_buff *VAR_14, struct net_device *VAR_15)
{
 struct fec_enet_private *VAR_16 = FUNC_2(VAR_15);
 struct bufdesc *VAR_17;
 void *VAR_18;
 unsigned short VAR_19;
 unsigned long VAR_20;

 if (!VAR_16->link) {

  return VAR_10;
 }

 FUNC_5(&VAR_16->hw_lock, VAR_20);

 VAR_17 = VAR_16->cur_tx;

 VAR_19 = VAR_17->cbd_sc;

 if (VAR_19 & VAR_2) {



  FUNC_4("%s: tx queue full!.\n", VAR_15->name);
  FUNC_6(&VAR_16->hw_lock, VAR_20);
  return VAR_10;
 }


 VAR_19 &= ~VAR_3;


 VAR_18 = VAR_14->data;
 VAR_17->cbd_datlen = VAR_14->len;






 if (((unsigned long) VAR_18) & VAR_7) {
  unsigned int VAR_21;
  VAR_21 = VAR_17 - VAR_16->tx_bd_base;
  FUNC_1(VAR_16->tx_bounce[VAR_21], (void *)VAR_14->data, VAR_14->len);
  VAR_18 = VAR_16->tx_bounce[VAR_21];
 }


 VAR_16->tx_skbuff[VAR_16->skb_cur] = VAR_14;

 VAR_15->stats.tx_bytes += VAR_14->len;
 VAR_16->skb_cur = (VAR_16->skb_cur+1) & VAR_12;




 VAR_17->cbd_bufaddr = FUNC_0(&VAR_15->dev, VAR_18,
   VAR_8, VAR_6);




 VAR_19 |= (VAR_2 | VAR_0
   | VAR_1 | VAR_4);
 VAR_17->cbd_sc = VAR_19;

 VAR_15->trans_start = VAR_13;


 FUNC_7(0, VAR_16->hwp + VAR_9);


 if (VAR_19 & VAR_5)
  VAR_17 = VAR_16->tx_bd_base;
 else
  VAR_17++;

 if (VAR_17 == VAR_16->dirty_tx) {
  VAR_16->tx_full = 1;
  FUNC_3(VAR_15);
 }

 VAR_16->cur_tx = VAR_17;

 FUNC_6(&VAR_16->hw_lock, VAR_20);

 return VAR_11;
}
