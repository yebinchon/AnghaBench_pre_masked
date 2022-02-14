
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spi_device {int dummy; } ;
struct s3c2410_spigpio {TYPE_1__* info; } ;
struct TYPE_2__ {int (* chip_select ) (TYPE_1__*,int) ;} ;


 struct s3c2410_spigpio* FUNC_0 (struct spi_device*) ;
 int FUNC_1 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_2(struct spi_device *VAR_0, int VAR_1)
{
 struct s3c2410_spigpio *VAR_2 = FUNC_0(VAR_0);

 if (VAR_2->info && VAR_2->info->chip_select)
  (VAR_2->info->chip_select)(VAR_2->info, VAR_1);
}
