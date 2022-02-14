
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sata_fsl_host_priv {int hcr_base; int irq; } ;
struct of_device {int dev; } ;
struct ata_host {struct sata_fsl_host_priv* private_data; } ;


 int FUNC_0 (struct ata_host*) ;
 struct ata_host* FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct sata_fsl_host_priv*) ;

__attribute__((used)) static int FUNC_6(struct of_device *VAR_0)
{
 struct ata_host *VAR_1 = FUNC_1(&VAR_0->dev);
 struct sata_fsl_host_priv *VAR_2 = VAR_1->private_data;

 FUNC_0(VAR_1);

 FUNC_2(&VAR_0->dev, ((void*)0));

 FUNC_4(VAR_2->irq);
 FUNC_3(VAR_2->hcr_base);
 FUNC_5(VAR_2);

 return 0;
}
