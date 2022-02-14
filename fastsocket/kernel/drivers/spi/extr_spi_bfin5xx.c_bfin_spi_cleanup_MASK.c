
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spi_device {TYPE_1__* master; } ;
struct chip_data {int chip_select_num; int cs_gpio; } ;
struct TYPE_2__ {int num_chipselect; size_t bus_num; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct chip_data*) ;
 int FUNC_2 (int ) ;
 struct chip_data* FUNC_3 (struct spi_device*) ;
 int ** VAR_0 ;

__attribute__((used)) static void FUNC_4(struct spi_device *VAR_1)
{
 struct chip_data *VAR_2 = FUNC_3(VAR_1);

 if (!VAR_2)
  return;

 if ((VAR_2->chip_select_num > 0)
  && (VAR_2->chip_select_num <= VAR_1->master->num_chipselect))
  FUNC_2(VAR_0[VAR_1->master->bus_num]
     [VAR_2->chip_select_num-1]);

 if (VAR_2->chip_select_num == 0)
  FUNC_0(VAR_2->cs_gpio);

 FUNC_1(VAR_2);
}
