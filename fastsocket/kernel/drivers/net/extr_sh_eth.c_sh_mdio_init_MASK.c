
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sh_eth_private {TYPE_1__* mii_bus; } ;
struct net_device {int dev; scalar_t__ base_addr; } ;
struct TYPE_7__ {int * ops; } ;
struct bb_info {int mdi_msk; int mdo_msk; int mmd_msk; int mdc_msk; TYPE_5__ ctrl; scalar_t__ addr; } ;
struct TYPE_6__ {char* name; struct bb_info* irq; int id; int * parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct bb_info VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_1__* FUNC_0 (TYPE_5__*) ;
 int VAR_6 ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct bb_info*) ;
 struct bb_info* FUNC_4 (int,int ) ;
 struct bb_info* FUNC_5 (int,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 struct sh_eth_private* FUNC_7 (struct net_device*) ;
 int FUNC_8 (int ,int ,char*,int) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_7, int VAR_8)
{
 int VAR_9, VAR_10;
 struct bb_info *VAR_11;
 struct sh_eth_private *VAR_12 = FUNC_7(VAR_7);


 VAR_11 = FUNC_5(sizeof(struct bb_info), VAR_1);
 if (!VAR_11) {
  VAR_9 = -VAR_0;
  goto out;
 }


 VAR_11->addr = VAR_7->base_addr + VAR_5;
 VAR_11->mdi_msk = 0x08;
 VAR_11->mdo_msk = 0x04;
 VAR_11->mmd_msk = 0x02;
 VAR_11->mdc_msk = 0x01;
 VAR_11->ctrl.ops = &VAR_6;


 VAR_12->mii_bus = FUNC_0(&VAR_11->ctrl);
 if (!VAR_12->mii_bus) {
  VAR_9 = -VAR_0;
  goto out_free_bitbang;
 }


 VAR_12->mii_bus->name = "sh_mii";
 VAR_12->mii_bus->parent = &VAR_7->dev;
 FUNC_8(VAR_12->mii_bus->id, VAR_2, "%x", VAR_8);


 VAR_12->mii_bus->irq = FUNC_4(sizeof(int)*VAR_3, VAR_1);
 if (!VAR_12->mii_bus->irq) {
  VAR_9 = -VAR_0;
  goto out_free_bus;
 }

 for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++)
  VAR_12->mii_bus->irq[VAR_10] = VAR_4;


 VAR_9 = FUNC_6(VAR_12->mii_bus);
 if (VAR_9)
  goto out_free_irq;

 FUNC_1(&VAR_7->dev, VAR_12->mii_bus);

 return 0;

out_free_irq:
 FUNC_3(VAR_12->mii_bus->irq);

out_free_bus:
 FUNC_2(VAR_12->mii_bus);

out_free_bitbang:
 FUNC_3(VAR_11);

out:
 return VAR_9;
}
