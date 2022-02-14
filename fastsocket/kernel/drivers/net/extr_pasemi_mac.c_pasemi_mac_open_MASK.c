
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct pasemi_mac {scalar_t__ type; TYPE_5__* tx; int napi; scalar_t__ phydev; TYPE_5__* rx; TYPE_1__* pdev; int rx_irq_name; int tx_irq_name; int dma_if; int num_cs; } ;
struct net_device {int mtu; char* name; } ;
struct TYPE_17__ {unsigned long data; scalar_t__ expires; int function; } ;
struct TYPE_16__ {int chno; } ;
struct TYPE_12__ {int irq; int chno; } ;
struct TYPE_15__ {TYPE_2__ chan; TYPE_8__ clean_timer; } ;
struct TYPE_14__ {TYPE_7__ chan; } ;
struct TYPE_13__ {TYPE_7__ chan; } ;
struct TYPE_11__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 int VAR_17 ;
 unsigned int VAR_18 ;
 unsigned int VAR_19 ;
 unsigned int VAR_20 ;
 unsigned int VAR_21 ;
 unsigned int VAR_22 ;
 unsigned int VAR_23 ;
 unsigned int VAR_24 ;
 int VAR_25 ;
 unsigned int FUNC_7 (int) ;
 unsigned int VAR_26 ;
 unsigned int FUNC_8 (int) ;
 unsigned int FUNC_9 (int) ;
 unsigned int FUNC_10 (int) ;
 unsigned int FUNC_11 (int) ;
 int VAR_27 ;
 unsigned int FUNC_12 (int ) ;
 unsigned int FUNC_13 (int ) ;
 int FUNC_14 (int) ;
 int VAR_28 ;
 int FUNC_15 (TYPE_8__*) ;
 int FUNC_16 (int *,char*,int ,int) ;
 int FUNC_17 (int *,char*,...) ;
 int FUNC_18 (int ,TYPE_5__*) ;
 int FUNC_19 (TYPE_8__*) ;
 scalar_t__ VAR_29 ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 struct pasemi_mac* FUNC_22 (struct net_device*) ;
 int FUNC_23 (struct net_device*) ;
 int FUNC_24 (struct net_device*) ;
 int FUNC_25 (TYPE_7__*,int) ;
 int FUNC_26 (struct pasemi_mac*) ;
 int FUNC_27 (struct pasemi_mac*) ;
 int FUNC_28 (struct pasemi_mac*) ;
 int FUNC_29 (struct net_device*) ;
 int FUNC_30 (struct net_device*,int) ;
 int FUNC_31 (struct pasemi_mac*) ;
 int FUNC_32 (struct pasemi_mac*) ;
 int VAR_30 ;
 int FUNC_33 (struct pasemi_mac*) ;
 int FUNC_34 (struct net_device*) ;
 TYPE_5__* FUNC_35 (struct net_device*) ;
 int VAR_31 ;
 int VAR_32 ;
 int FUNC_36 (scalar_t__) ;
 int FUNC_37 (int ,int *,int ,int ,TYPE_5__*) ;
 TYPE_4__* FUNC_38 (struct pasemi_mac*) ;
 int FUNC_39 (int ,int,char*,char*) ;
 TYPE_3__* FUNC_40 (struct pasemi_mac*) ;
 int FUNC_41 (int ,int) ;
 int FUNC_42 (int ,int ) ;
 int FUNC_43 (struct pasemi_mac*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_44(struct net_device *VAR_33)
{
 struct pasemi_mac *VAR_34 = FUNC_22(VAR_33);
 unsigned int VAR_35;
 int VAR_36, VAR_37;

 VAR_35 = VAR_26 | FUNC_8(3) |
  FUNC_9(3) | FUNC_7(0xf) |
  FUNC_11(8) | FUNC_10(12);

 FUNC_43(VAR_34, VAR_25, VAR_35);

 VAR_37 = FUNC_34(VAR_33);
 if (VAR_37)
  goto out_rx_resources;

 VAR_34->tx = FUNC_35(VAR_33);

 if (!VAR_34->tx)
  goto out_tx_ring;




 if (VAR_33->mtu > 1500 && !VAR_34->num_cs) {
  FUNC_33(VAR_34);
  if (!VAR_34->num_cs)
   goto out_tx_ring;
 }


 for (VAR_36 = 0; VAR_36 < 32; VAR_36++)
  FUNC_43(VAR_34, FUNC_14(VAR_36), 0);


 FUNC_42(VAR_16,
        FUNC_2(0x3ff));

 FUNC_42(FUNC_3(VAR_34->rx->chan.chno),
        FUNC_4(256));

 FUNC_42(FUNC_5(VAR_34->tx->chan.chno),
        FUNC_6(32));

 FUNC_43(VAR_34, VAR_27,
        FUNC_13(VAR_34->rx->chan.chno) |
        FUNC_12(VAR_34->rx->chan.chno));


 FUNC_41(FUNC_1(VAR_34->dma_if),
        VAR_10 |
        VAR_9 |
        VAR_7 |
        VAR_11 |
        VAR_8);


 FUNC_25(&FUNC_38(VAR_34)->chan, VAR_4 |
         VAR_6 |
         VAR_5 |
         VAR_3);


 FUNC_25(&FUNC_40(VAR_34)->chan, VAR_15 |
         VAR_13 |
         VAR_14 |
         VAR_12);

 FUNC_30(VAR_33, VAR_28);

 FUNC_41(FUNC_0(FUNC_38(VAR_34)->chan.chno),
        VAR_28>>1);


 FUNC_31(VAR_34);
 FUNC_32(VAR_34);

 VAR_35 = VAR_20 | VAR_19 | VAR_18;

 if (VAR_34->type == VAR_2)
  VAR_35 |= VAR_24 | VAR_22;
 else
  VAR_35 |= VAR_23 | VAR_21;


 FUNC_43(VAR_34, VAR_17, VAR_35);

 VAR_37 = FUNC_29(VAR_33);
 if (VAR_37) {

  FUNC_28(VAR_34);
  if (VAR_34->type == VAR_2) {

   FUNC_17(&VAR_34->pdev->dev,
     "PHY init failed: %d.\n", VAR_37);
   FUNC_17(&VAR_34->pdev->dev,
     "Defaulting to 1Gbit full duplex\n");
  }
 }

 FUNC_23(VAR_33);
 FUNC_21(&VAR_34->napi);

 FUNC_39(VAR_34->tx_irq_name, sizeof(VAR_34->tx_irq_name), "%s tx",
   VAR_33->name);

 VAR_37 = FUNC_37(VAR_34->tx->chan.irq, &VAR_31, VAR_1,
     VAR_34->tx_irq_name, VAR_34->tx);
 if (VAR_37) {
  FUNC_16(&VAR_34->pdev->dev, "request_irq of irq %d failed: %d\n",
   VAR_34->tx->chan.irq, VAR_37);
  goto out_tx_int;
 }

 FUNC_39(VAR_34->rx_irq_name, sizeof(VAR_34->rx_irq_name), "%s rx",
   VAR_33->name);

 VAR_37 = FUNC_37(VAR_34->rx->chan.irq, &VAR_30, VAR_1,
     VAR_34->rx_irq_name, VAR_34->rx);
 if (VAR_37) {
  FUNC_16(&VAR_34->pdev->dev, "request_irq of irq %d failed: %d\n",
   VAR_34->rx->chan.irq, VAR_37);
  goto out_rx_int;
 }

 if (VAR_34->phydev)
  FUNC_36(VAR_34->phydev);

 FUNC_19(&VAR_34->tx->clean_timer);
 VAR_34->tx->clean_timer.function = VAR_32;
 VAR_34->tx->clean_timer.data = (unsigned long)VAR_34->tx;
 VAR_34->tx->clean_timer.expires = VAR_29+VAR_0;
 FUNC_15(&VAR_34->tx->clean_timer);

 return 0;

out_rx_int:
 FUNC_18(VAR_34->tx->chan.irq, VAR_34->tx);
out_tx_int:
 FUNC_20(&VAR_34->napi);
 FUNC_24(VAR_33);
out_tx_ring:
 if (VAR_34->tx)
  FUNC_27(VAR_34);
 FUNC_26(VAR_34);
out_rx_resources:

 return VAR_37;
}
