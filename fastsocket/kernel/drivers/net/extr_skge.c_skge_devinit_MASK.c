
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int count; } ;
struct TYPE_4__ {int count; } ;
struct skge_port {int duplex; int speed; int wol; int port; int rx_csum; int link_timer; int advertising; int flow_control; int autoneg; TYPE_2__ rx_ring; TYPE_1__ tx_ring; int msg_enable; struct skge_hw* hw; struct net_device* netdev; int napi; } ;
struct skge_hw {scalar_t__ chip_id; scalar_t__ regs; struct net_device** dev; TYPE_3__* pdev; } ;
struct net_device {int features; int addr_len; int dev_addr; int perm_addr; int irq; int watchdog_timeo; int * ethtool_ops; int * netdev_ops; } ;
struct TYPE_6__ {int dev; int irq; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct net_device*,int *) ;
 int VAR_11 ;
 int VAR_12 ;
 struct net_device* FUNC_1 (int) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (int *,char*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,scalar_t__,int ) ;
 struct skge_port* FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (struct net_device*,int *,int ,int ) ;
 int FUNC_11 (struct net_device*) ;
 int FUNC_12 (int *,int ,unsigned long) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_13 (struct skge_hw*) ;
 int FUNC_14 (struct skge_hw*) ;
 int VAR_18 ;

__attribute__((used)) static struct net_device *FUNC_15(struct skge_hw *VAR_19, int VAR_20,
           int VAR_21)
{
 struct skge_port *VAR_22;
 struct net_device *VAR_23 = FUNC_1(sizeof(*VAR_22));

 if (!VAR_23) {
  FUNC_2(&VAR_19->pdev->dev, "etherdev alloc failed\n");
  return ((void*)0);
 }

 FUNC_0(VAR_23, &VAR_19->pdev->dev);
 VAR_23->netdev_ops = &VAR_16;
 VAR_23->ethtool_ops = &VAR_15;
 VAR_23->watchdog_timeo = VAR_11;
 VAR_23->irq = VAR_19->pdev->irq;

 if (VAR_21)
  VAR_23->features |= VAR_8;

 VAR_22 = FUNC_7(VAR_23);
 FUNC_10(VAR_23, &VAR_22->napi, VAR_17, VAR_7);
 VAR_22->netdev = VAR_23;
 VAR_22->hw = VAR_19;
 VAR_22->msg_enable = FUNC_9(VAR_13, VAR_14);

 VAR_22->tx_ring.count = VAR_4;
 VAR_22->rx_ring.count = VAR_3;


 VAR_22->autoneg = VAR_0;
 VAR_22->flow_control = VAR_6;
 VAR_22->duplex = -1;
 VAR_22->speed = -1;
 VAR_22->advertising = FUNC_13(VAR_19);

 if (FUNC_3(&VAR_19->pdev->dev)) {
  VAR_22->wol = FUNC_14(VAR_19) & VAR_12;
  FUNC_4(&VAR_19->pdev->dev, VAR_22->wol);
 }

 VAR_19->dev[VAR_20] = VAR_23;

 VAR_22->port = VAR_20;


 FUNC_12(&VAR_22->link_timer, VAR_18, (unsigned long) VAR_22);

 if (VAR_19->chip_id != VAR_2) {
  VAR_23->features |= VAR_9 | VAR_10;
  VAR_22->rx_csum = 1;
 }


 FUNC_6(VAR_23->dev_addr, VAR_19->regs + VAR_1 + VAR_20*8, VAR_5);
 FUNC_5(VAR_23->perm_addr, VAR_23->dev_addr, VAR_23->addr_len);


 FUNC_8(VAR_23);
 FUNC_11(VAR_23);

 return VAR_23;
}
