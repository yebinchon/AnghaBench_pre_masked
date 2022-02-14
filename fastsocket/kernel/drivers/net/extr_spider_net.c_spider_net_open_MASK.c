
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* def; } ;
struct spider_net_card {int aneg_timer; int tx_chain; int rx_chain; int napi; int * low_watermark; TYPE_2__ phy; int medium; scalar_t__ aneg_count; } ;
struct net_device {int name; int irq; } ;
struct TYPE_3__ {scalar_t__ phy_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *) ;
 struct spider_net_card* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 scalar_t__ FUNC_6 (int ,int ,int ,int ,struct net_device*) ;
 scalar_t__ FUNC_7 (struct spider_net_card*) ;
 int FUNC_8 (struct spider_net_card*) ;
 int FUNC_9 (struct spider_net_card*) ;
 int FUNC_10 (struct spider_net_card*,int *) ;
 int FUNC_11 (struct spider_net_card*) ;
 int FUNC_12 (struct spider_net_card*,int *) ;
 int FUNC_13 (struct spider_net_card*) ;
 int VAR_5 ;
 int FUNC_14 (struct net_device*) ;
 int FUNC_15 (struct spider_net_card*) ;

int
FUNC_16(struct net_device *VAR_6)
{
 struct spider_net_card *VAR_7 = FUNC_3(VAR_6);
 int VAR_8;

 VAR_8 = FUNC_13(VAR_7);
 if (VAR_8)
  goto init_firmware_failed;


 VAR_7->aneg_count = 0;
 VAR_7->medium = VAR_0;
 FUNC_15(VAR_7);
 if (VAR_7->phy.def->phy_id)
  FUNC_1(&VAR_7->aneg_timer, VAR_4 + VAR_3);

 VAR_8 = FUNC_12(VAR_7, &VAR_7->tx_chain);
 if (VAR_8)
  goto alloc_tx_failed;
 VAR_7->low_watermark = ((void*)0);

 VAR_8 = FUNC_12(VAR_7, &VAR_7->rx_chain);
 if (VAR_8)
  goto alloc_rx_failed;


 if (FUNC_7(VAR_7))
  goto alloc_skbs_failed;

 FUNC_14(VAR_6);



 VAR_8 = -VAR_1;
 if (FUNC_6(VAR_6->irq, VAR_5,
        VAR_2, VAR_6->name, VAR_6))
  goto register_int_failed;

 FUNC_8(VAR_7);

 FUNC_5(VAR_6);
 FUNC_4(VAR_6);
 FUNC_2(&VAR_7->napi);

 FUNC_9(VAR_7);

 return 0;

register_int_failed:
 FUNC_11(VAR_7);
alloc_skbs_failed:
 FUNC_10(VAR_7, &VAR_7->rx_chain);
alloc_rx_failed:
 FUNC_10(VAR_7, &VAR_7->tx_chain);
alloc_tx_failed:
 FUNC_0(&VAR_7->aneg_timer);
init_firmware_failed:
 return VAR_8;
}
