
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct temac_local {int indirect_mutex; int dev; struct mii_bus* mii_bus; int mdio_irqs; } ;
struct resource {scalar_t__ start; } ;
struct mii_bus {char* name; int irq; int parent; int write; int read; struct temac_local* priv; int id; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ) ;
 struct mii_bus* FUNC_1 () ;
 int FUNC_2 (struct mii_bus*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct device_node*,int ,struct resource*) ;
 int* FUNC_6 (struct device_node*,char*,int*) ;
 int FUNC_7 (struct mii_bus*,struct device_node*) ;
 int FUNC_8 (int ,int ,char*,unsigned long long) ;
 int FUNC_9 (struct temac_local*,int ) ;
 int FUNC_10 (struct temac_local*,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_11(struct temac_local *VAR_5, struct device_node *VAR_6)
{
 struct mii_bus *VAR_7;
 const u32 *VAR_8;
 int VAR_9;
 int VAR_10, VAR_11;
 struct resource VAR_12;


 VAR_9 = 0x3f;
 VAR_8 = FUNC_6(VAR_6, "clock-frequency", &VAR_11);
 if (VAR_8 && VAR_11 >= sizeof(*VAR_8)) {
  VAR_9 = (*VAR_8) / (2500 * 1000 * 2) - 1;
  if (VAR_9 < 1)
   VAR_9 = 1;
  if (VAR_9 > 0x3f)
   VAR_9 = 0x3f;
 }



 FUNC_3(&VAR_5->indirect_mutex);
 FUNC_10(VAR_5, VAR_2, 1 << 6 | VAR_9);
 FUNC_4(&VAR_5->indirect_mutex);

 VAR_7 = FUNC_1();
 if (!VAR_7)
  return -VAR_0;

 FUNC_5(VAR_6, 0, &VAR_12);
 FUNC_8(VAR_7->id, VAR_1, "%.8llx",
   (unsigned long long)VAR_12.start);
 VAR_7->priv = VAR_5;
 VAR_7->name = "Xilinx TEMAC MDIO";
 VAR_7->read = VAR_3;
 VAR_7->write = VAR_4;
 VAR_7->parent = VAR_5->dev;
 VAR_7->irq = VAR_5->mdio_irqs;

 VAR_5->mii_bus = VAR_7;

 VAR_10 = FUNC_7(VAR_7, VAR_6);
 if (VAR_10)
  goto err_register;

 FUNC_3(&VAR_5->indirect_mutex);
 FUNC_0(VAR_5->dev, "MDIO bus registered;  MC:%x\n",
  FUNC_9(VAR_5, VAR_2));
 FUNC_4(&VAR_5->indirect_mutex);
 return 0;

 err_register:
 FUNC_2(VAR_7);
 return VAR_10;
}
