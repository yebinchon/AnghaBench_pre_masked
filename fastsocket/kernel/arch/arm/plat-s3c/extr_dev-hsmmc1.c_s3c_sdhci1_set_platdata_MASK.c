
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3c_sdhci_platdata {scalar_t__ cfg_card; scalar_t__ cfg_gpio; int max_width; } ;


 struct s3c_sdhci_platdata VAR_0 ;

void FUNC_0(struct s3c_sdhci_platdata *VAR_1)
{
 struct s3c_sdhci_platdata *VAR_2 = &VAR_0;

 VAR_2->max_width = VAR_1->max_width;

 if (VAR_1->cfg_gpio)
  VAR_2->cfg_gpio = VAR_1->cfg_gpio;
 if (VAR_1->cfg_card)
  VAR_2->cfg_card = VAR_1->cfg_card;
}
