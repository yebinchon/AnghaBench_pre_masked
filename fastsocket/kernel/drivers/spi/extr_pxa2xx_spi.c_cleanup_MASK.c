
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int dummy; } ;
struct chip_data {int gpio_cs; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct chip_data*) ;
 struct chip_data* FUNC_3 (struct spi_device*) ;

__attribute__((used)) static void FUNC_4(struct spi_device *VAR_0)
{
 struct chip_data *VAR_1 = FUNC_3(VAR_0);

 if (!VAR_1)
  return;

 if (FUNC_1(VAR_1->gpio_cs))
  FUNC_0(VAR_1->gpio_cs);

 FUNC_2(VAR_1);
}
