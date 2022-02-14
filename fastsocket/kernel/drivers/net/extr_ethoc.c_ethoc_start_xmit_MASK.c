
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; int data; } ;
struct net_device {int trans_start; int dev; } ;
struct ethoc_bd {int stat; int addr; } ;
struct TYPE_2__ {int tx_errors; } ;
struct ethoc {unsigned int cur_tx; unsigned int num_tx; unsigned int dty_tx; int lock; TYPE_1__ stats; } ;
typedef int netdev_tx_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct ethoc*,unsigned int,struct ethoc_bd*) ;
 int FUNC_4 (struct ethoc*,unsigned int,struct ethoc_bd*) ;
 int VAR_7 ;
 int FUNC_5 (void*,int ,scalar_t__) ;
 struct ethoc* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 void* FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static netdev_tx_t FUNC_12(struct sk_buff *VAR_8, struct net_device *VAR_9)
{
 struct ethoc *VAR_10 = FUNC_6(VAR_9);
 struct ethoc_bd VAR_11;
 unsigned int VAR_12;
 void *VAR_13;

 if (FUNC_11(VAR_8->len > VAR_0)) {
  VAR_10->stats.tx_errors++;
  goto out;
 }

 VAR_12 = VAR_10->cur_tx % VAR_10->num_tx;
 FUNC_9(&VAR_10->lock);
 VAR_10->cur_tx++;

 FUNC_3(VAR_10, VAR_12, &VAR_11);
 if (FUNC_11(VAR_8->len < VAR_1))
  VAR_11.stat |= VAR_4;
 else
  VAR_11.stat &= ~VAR_4;

 VAR_13 = FUNC_8(VAR_11.addr);
 FUNC_5(VAR_13, VAR_8->data, VAR_8->len);

 VAR_11.stat &= ~(VAR_6 | VAR_3);
 VAR_11.stat |= FUNC_0(VAR_8->len);
 FUNC_4(VAR_10, VAR_12, &VAR_11);

 VAR_11.stat |= VAR_5;
 FUNC_4(VAR_10, VAR_12, &VAR_11);

 if (VAR_10->cur_tx == (VAR_10->dty_tx + VAR_10->num_tx)) {
  FUNC_1(&VAR_9->dev, "stopping queue\n");
  FUNC_7(VAR_9);
 }

 VAR_9->trans_start = VAR_7;
 FUNC_10(&VAR_10->lock);
out:
 FUNC_2(VAR_8);
 return VAR_2;
}
