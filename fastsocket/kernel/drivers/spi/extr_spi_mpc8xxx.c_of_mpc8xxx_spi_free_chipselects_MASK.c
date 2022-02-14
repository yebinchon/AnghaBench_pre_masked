
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpc8xxx_spi_probe_info {int * alow_flags; int * gpios; } ;
struct fsl_spi_platform_data {int max_chipselect; } ;
struct device {struct fsl_spi_platform_data* platform_data; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 struct mpc8xxx_spi_probe_info* FUNC_3 (struct fsl_spi_platform_data*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_0)
{
 struct fsl_spi_platform_data *VAR_1 = VAR_0->platform_data;
 struct mpc8xxx_spi_probe_info *VAR_2 = FUNC_3(VAR_1);
 int VAR_3;

 if (!VAR_2->gpios)
  return 0;

 for (VAR_3 = 0; VAR_3 < VAR_1->max_chipselect; VAR_3++) {
  if (FUNC_1(VAR_2->gpios[VAR_3]))
   FUNC_0(VAR_2->gpios[VAR_3]);
 }

 FUNC_2(VAR_2->gpios);
 FUNC_2(VAR_2->alow_flags);
 return 0;
}
