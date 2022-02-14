
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int len; int data; } ;
struct net_device {int trans_start; } ;
struct bigmac {int tx_new; scalar_t__ creg; int lock; TYPE_3__* bmac_block; struct sk_buff** tx_skbs; TYPE_1__* bigmac_op; } ;
struct TYPE_6__ {TYPE_2__* be_txd; } ;
struct TYPE_5__ {int tx_flags; int tx_addr; } ;
struct TYPE_4__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (struct bigmac*) ;
 int FUNC_3 (int *,int ,int,int ) ;
 int VAR_9 ;
 struct bigmac* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (int ,scalar_t__) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct sk_buff *VAR_10, struct net_device *VAR_11)
{
 struct bigmac *VAR_12 = FUNC_4(VAR_11);
 int VAR_13, VAR_14;
 u32 VAR_15;

 VAR_13 = VAR_10->len;
 VAR_15 = FUNC_3(&VAR_12->bigmac_op->dev, VAR_10->data,
     VAR_13, VAR_2);


 FUNC_7(&VAR_12->lock);
 VAR_14 = VAR_12->tx_new;
 FUNC_0(("bigmac_start_xmit: len(%d) entry(%d)\n", VAR_13, VAR_14));
 VAR_12->bmac_block->be_txd[VAR_14].tx_flags = VAR_8;
 VAR_12->tx_skbs[VAR_14] = VAR_10;
 VAR_12->bmac_block->be_txd[VAR_14].tx_addr = VAR_15;
 VAR_12->bmac_block->be_txd[VAR_14].tx_flags =
  (VAR_6 | VAR_7 | VAR_4 | (VAR_13 & VAR_5));
 VAR_12->tx_new = FUNC_1(VAR_14);
 if (FUNC_2(VAR_12) <= 0)
  FUNC_5(VAR_11);
 FUNC_8(&VAR_12->lock);


 FUNC_6(VAR_1, VAR_12->creg + VAR_0);


 VAR_11->trans_start = VAR_9;

 return VAR_3;
}
