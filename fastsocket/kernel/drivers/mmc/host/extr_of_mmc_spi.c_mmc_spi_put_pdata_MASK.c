
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int * platform_data; int archdata; } ;
struct spi_device {struct device dev; } ;
struct of_mmc_spi {int * gpios; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (int *) ;
 struct device_node* FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct of_mmc_spi*) ;
 struct of_mmc_spi* FUNC_5 (struct device*) ;

void FUNC_6(struct spi_device *VAR_0)
{
 struct device *VAR_1 = &VAR_0->dev;
 struct device_node *VAR_2 = FUNC_1(&VAR_1->archdata);
 struct of_mmc_spi *VAR_3 = FUNC_5(VAR_1);
 int VAR_4;

 if (!VAR_1->platform_data || !VAR_2)
  return;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_3->gpios); VAR_4++) {
  if (FUNC_3(VAR_3->gpios[VAR_4]))
   FUNC_2(VAR_3->gpios[VAR_4]);
 }
 FUNC_4(VAR_3);
 VAR_1->platform_data = ((void*)0);
}
