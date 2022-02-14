
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_driver {scalar_t__ id_table; } ;
struct spi_device {int modalias; } ;
struct device_driver {int name; } ;
struct device {int dummy; } ;


 int FUNC_0 (scalar_t__,struct spi_device const*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 struct spi_device* FUNC_2 (struct device*) ;
 struct spi_driver* FUNC_3 (struct device_driver*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_0, struct device_driver *VAR_1)
{
 const struct spi_device *VAR_2 = FUNC_2(VAR_0);
 const struct spi_driver *VAR_3 = FUNC_3(VAR_1);

 if (VAR_3->id_table)
  return !!FUNC_0(VAR_3->id_table, VAR_2);

 return FUNC_1(VAR_2->modalias, VAR_1->name) == 0;
}
