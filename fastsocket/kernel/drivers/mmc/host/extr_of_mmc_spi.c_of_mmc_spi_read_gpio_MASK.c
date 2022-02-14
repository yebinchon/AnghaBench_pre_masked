
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct of_mmc_spi {int* alow_gpios; int * gpios; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 struct of_mmc_spi* FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_0, int VAR_1)
{
 struct of_mmc_spi *VAR_2 = FUNC_1(VAR_0);
 bool VAR_3 = VAR_2->alow_gpios[VAR_1];
 bool VAR_4 = FUNC_0(VAR_2->gpios[VAR_1]);

 return VAR_3 ^ VAR_4;
}
