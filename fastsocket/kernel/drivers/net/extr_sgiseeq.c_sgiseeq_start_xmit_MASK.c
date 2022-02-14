
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int len; int data; } ;
struct TYPE_6__ {int cntinfo; int pbuf; } ;
struct sgiseeq_tx_desc {TYPE_3__ tdma; struct sk_buff* skb; } ;
struct sgiseeq_private {int tx_new; int tx_old; int tx_lock; struct sgiseeq_tx_desc* tx_desc; struct hpc3_ethregs* hregs; } ;
struct TYPE_5__ {int parent; } ;
struct TYPE_4__ {int tx_bytes; } ;
struct net_device {int trans_start; TYPE_2__ dev; TYPE_1__ stats; } ;
struct hpc3_ethregs {int tx_ctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 size_t FUNC_1 (int) ;
 int FUNC_2 (struct sgiseeq_private*) ;
 int FUNC_3 (int ,int ,int,int ) ;
 int FUNC_4 (struct net_device*,struct sgiseeq_tx_desc*) ;
 int FUNC_5 (struct net_device*,struct sgiseeq_tx_desc*) ;
 int VAR_9 ;
 int FUNC_6 (struct net_device*,struct sgiseeq_private*,struct hpc3_ethregs*) ;
 struct sgiseeq_private* FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 scalar_t__ FUNC_9 (struct sk_buff*,int) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_12(struct sk_buff *VAR_10, struct net_device *VAR_11)
{
 struct sgiseeq_private *VAR_12 = FUNC_7(VAR_11);
 struct hpc3_ethregs *VAR_13 = VAR_12->hregs;
 unsigned long VAR_14;
 struct sgiseeq_tx_desc *VAR_15;
 int VAR_16, VAR_17;

 FUNC_10(&VAR_12->tx_lock, VAR_14);


 VAR_16 = VAR_10->len;
 if (VAR_16 < VAR_1) {
  if (FUNC_9(VAR_10, VAR_1))
   return VAR_8;
  VAR_16 = VAR_1;
 }

 VAR_11->stats.tx_bytes += VAR_16;
 VAR_17 = VAR_12->tx_new;
 VAR_15 = &VAR_12->tx_desc[VAR_17];
 FUNC_4(VAR_11, VAR_15);
 VAR_15->skb = VAR_10;
 VAR_15->tdma.pbuf = FUNC_3(VAR_11->dev.parent, VAR_10->data,
           VAR_16, VAR_0);
 VAR_15->tdma.cntinfo = (VAR_16 & VAR_3) |
                    VAR_7 | VAR_5 | VAR_6 | VAR_4;
 FUNC_5(VAR_11, VAR_15);
 if (VAR_12->tx_old != VAR_12->tx_new) {
  struct sgiseeq_tx_desc *VAR_18;

  VAR_18 = &VAR_12->tx_desc[FUNC_1(VAR_12->tx_new)];
  FUNC_4(VAR_11, VAR_18);
  VAR_18->tdma.cntinfo &= ~VAR_4;
  FUNC_5(VAR_11, VAR_18);
 }
 VAR_12->tx_new = FUNC_0(VAR_12->tx_new);


 if (!(VAR_13->tx_ctrl & VAR_2))
  FUNC_6(VAR_11, VAR_12, VAR_13);

 VAR_11->trans_start = VAR_9;

 if (!FUNC_2(VAR_12))
  FUNC_8(VAR_11);
 FUNC_11(&VAR_12->tx_lock, VAR_14);

 return VAR_8;
}
