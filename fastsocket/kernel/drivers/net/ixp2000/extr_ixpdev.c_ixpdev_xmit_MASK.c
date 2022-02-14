
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ len; } ;
struct net_device {int trans_start; } ;
struct ixpdev_tx_desc {scalar_t__ pkt_length; int buf_addr; int channel; } ;
struct ixpdev_priv {scalar_t__ tx_queue_entries; int channel; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ,scalar_t__) ;
 int VAR_6 ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 struct ixpdev_priv* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct sk_buff*,int ) ;
 struct ixpdev_tx_desc* VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct sk_buff *VAR_9, struct net_device *VAR_10)
{
 struct ixpdev_priv *VAR_11 = FUNC_4(VAR_10);
 struct ixpdev_tx_desc *VAR_12;
 int VAR_13;
 unsigned long VAR_14;

 if (FUNC_8(VAR_9->len > VAR_1)) {

  FUNC_0(VAR_9);
  return VAR_0;
 }

 VAR_13 = VAR_8;
 VAR_8 = (VAR_8 + 1) % VAR_3;

 VAR_12 = VAR_7 + VAR_13;
 VAR_12->pkt_length = VAR_9->len;
 VAR_12->channel = VAR_11->channel;

 FUNC_7(VAR_9, FUNC_6(VAR_12->buf_addr));
 FUNC_0(VAR_9);

 FUNC_1(VAR_2,
  VAR_5 + (VAR_13 * sizeof(struct ixpdev_tx_desc)));

 VAR_10->trans_start = VAR_6;

 FUNC_3(VAR_14);
 VAR_11->tx_queue_entries++;
 if (VAR_11->tx_queue_entries == VAR_4)
  FUNC_5(VAR_10);
 FUNC_2(VAR_14);

 return VAR_0;
}
