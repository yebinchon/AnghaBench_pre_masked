
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct sh_eth_private {int post_rx; int post_fw; TYPE_1__* cd; int ether_link_active_low; int no_ether_link; int edmac_endian; int phy_id; int lock; } ;
struct sh_eth_plat_data {int ether_link_active_low; int no_ether_link; int edmac_endian; int phy; } ;
struct resource {scalar_t__ start; } ;
struct TYPE_6__ {scalar_t__ platform_data; } ;
struct platform_device {int id; TYPE_3__ dev; } ;
struct net_device {int dma; int irq; int * dev_addr; scalar_t__ base_addr; int watchdog_timeo; int * netdev_ops; } ;
struct TYPE_5__ {int (* chip_reset ) (struct net_device*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct net_device*,TYPE_3__*) ;
 int VAR_6 ;
 int VAR_7 ;
 struct net_device* FUNC_1 (int) ;
 int FUNC_2 (TYPE_3__*,char*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 struct sh_eth_private* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct platform_device*,int ) ;
 struct resource* FUNC_7 (struct platform_device*,int ,int ) ;
 int FUNC_8 (struct platform_device*,struct net_device*) ;
 int FUNC_9 (char*,int ) ;
 int FUNC_10 (char*,int ,...) ;
 int FUNC_11 (struct net_device*) ;
 int FUNC_12 (struct net_device*) ;
 TYPE_1__ VAR_8 ;
 int VAR_9 ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (struct net_device*,int) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (struct net_device*) ;
 scalar_t__ FUNC_18 (int ) ;
 int FUNC_19 (struct net_device*) ;

__attribute__((used)) static int FUNC_20(struct platform_device *VAR_10)
{
 int VAR_11, VAR_12, VAR_13 = 0;
 struct resource *VAR_14;
 struct net_device *VAR_15 = ((void*)0);
 struct sh_eth_private *VAR_16;
 struct sh_eth_plat_data *VAR_17;


 VAR_14 = FUNC_7(VAR_10, VAR_3, 0);
 if (FUNC_18(VAR_14 == ((void*)0))) {
  FUNC_2(&VAR_10->dev, "invalid resource\n");
  VAR_11 = -VAR_0;
  goto out;
 }

 VAR_15 = FUNC_1(sizeof(struct sh_eth_private));
 if (!VAR_15) {
  FUNC_2(&VAR_10->dev, "Could not allocate device.\n");
  VAR_11 = -VAR_2;
  goto out;
 }


 VAR_15->base_addr = VAR_14->start;
 VAR_13 = VAR_10->id;
 if (VAR_13 < 0)
  VAR_13 = 0;

 VAR_15->dma = -1;
 VAR_11 = FUNC_6(VAR_10, 0);
 if (VAR_11 < 0) {
  VAR_11 = -VAR_1;
  goto out_release;
 }
 VAR_15->irq = VAR_11;

 FUNC_0(VAR_15, &VAR_10->dev);


 FUNC_3(VAR_15);

 VAR_16 = FUNC_5(VAR_15);
 FUNC_16(&VAR_16->lock);

 VAR_17 = (struct sh_eth_plat_data *)(VAR_10->dev.platform_data);

 VAR_16->phy_id = VAR_17->phy;

 VAR_16->edmac_endian = VAR_17->edmac_endian;
 VAR_16->no_ether_link = VAR_17->no_ether_link;
 VAR_16->ether_link_active_low = VAR_17->ether_link_active_low;


 VAR_16->cd = &VAR_8;
 FUNC_13(VAR_16->cd);


 VAR_15->netdev_ops = &VAR_9;
 VAR_15->watchdog_timeo = VAR_7;

 VAR_16->post_rx = VAR_5 >> (VAR_13 << 1);
 VAR_16->post_fw = VAR_4 >> (VAR_13 << 1);


 FUNC_11(VAR_15);


 if (!VAR_13) {
  if (VAR_16->cd->chip_reset)
   VAR_16->cd->chip_reset(VAR_15);





 }


 VAR_11 = FUNC_12(VAR_15);
 if (VAR_11)
  goto out_release;


 VAR_11 = FUNC_15(VAR_15, VAR_10->id);
 if (VAR_11)
  goto out_unregister;


 FUNC_9("Base address at 0x%x, ",
        (u32)VAR_15->base_addr);

 for (VAR_12 = 0; VAR_12 < 5; VAR_12++)
  FUNC_10("%02X:", VAR_15->dev_addr[VAR_12]);
 FUNC_10("%02X, IRQ %d.\n", VAR_15->dev_addr[VAR_12], VAR_15->irq);

 FUNC_8(VAR_10, VAR_15);

 return VAR_11;

out_unregister:
 FUNC_19(VAR_15);

out_release:

 if (VAR_15)
  FUNC_4(VAR_15);

out:
 return VAR_11;
}
