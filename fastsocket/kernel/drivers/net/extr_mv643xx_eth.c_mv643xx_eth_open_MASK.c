
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int irq; int dev; int name; } ;
struct TYPE_2__ {scalar_t__ expires; } ;
struct mv643xx_eth_private {int int_mask; int rxq_count; int txq_count; scalar_t__ rxq; scalar_t__ txq; TYPE_1__ rx_oom; scalar_t__ oom; int rx_recycle; int napi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int *,char*) ;
 int FUNC_2 (int ,struct net_device*) ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int FUNC_3 (struct mv643xx_eth_private*) ;
 int FUNC_4 (int *) ;
 struct mv643xx_eth_private* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct mv643xx_eth_private*) ;
 int FUNC_7 (struct mv643xx_eth_private*,int ) ;
 int FUNC_8 (int ,int ,int ,int ,struct net_device*) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (struct mv643xx_eth_private*,int) ;
 int FUNC_11 (scalar_t__,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (scalar_t__) ;
 int FUNC_14 (struct mv643xx_eth_private*,int) ;
 int FUNC_15 (struct mv643xx_eth_private*,int ,int) ;

__attribute__((used)) static int FUNC_16(struct net_device *VAR_16)
{
 struct mv643xx_eth_private *VAR_17 = FUNC_5(VAR_16);
 int VAR_18;
 int VAR_19;

 FUNC_15(VAR_17, VAR_2, 0);
 FUNC_15(VAR_17, VAR_3, 0);
 FUNC_7(VAR_17, VAR_3);

 VAR_18 = FUNC_8(VAR_16->irq, VAR_15,
     VAR_12, VAR_16->name, VAR_16);
 if (VAR_18) {
  FUNC_1(VAR_13, &VAR_16->dev, "can't assign irq\n");
  return -VAR_0;
 }

 FUNC_3(VAR_17);

 FUNC_4(&VAR_17->napi);

 FUNC_12(&VAR_17->rx_recycle);

 VAR_17->int_mask = VAR_4;

 for (VAR_19 = 0; VAR_19 < VAR_17->rxq_count; VAR_19++) {
  VAR_18 = FUNC_10(VAR_17, VAR_19);
  if (VAR_18) {
   while (--VAR_19 >= 0)
    FUNC_9(VAR_17->rxq + VAR_19);
   goto out;
  }

  FUNC_11(VAR_17->rxq + VAR_19, VAR_9);
  VAR_17->int_mask |= VAR_10 << VAR_19;
 }

 if (VAR_17->oom) {
  VAR_17->rx_oom.expires = VAR_14 + (VAR_1 / 10);
  FUNC_0(&VAR_17->rx_oom);
 }

 for (VAR_19 = 0; VAR_19 < VAR_17->txq_count; VAR_19++) {
  VAR_18 = FUNC_14(VAR_17, VAR_19);
  if (VAR_18) {
   while (--VAR_19 >= 0)
    FUNC_13(VAR_17->txq + VAR_19);
   goto out_free;
  }
  VAR_17->int_mask |= VAR_11 << VAR_19;
 }

 FUNC_6(VAR_17);

 FUNC_15(VAR_17, VAR_8, VAR_5 | VAR_6);
 FUNC_15(VAR_17, VAR_7, VAR_17->int_mask);

 return 0;


out_free:
 for (VAR_19 = 0; VAR_19 < VAR_17->rxq_count; VAR_19++)
  FUNC_9(VAR_17->rxq + VAR_19);
out:
 FUNC_2(VAR_16->irq, VAR_16);

 return VAR_18;
}
