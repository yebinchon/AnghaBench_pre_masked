
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spi_device {int chip_select; int master; } ;
struct sh_sci_spi {TYPE_1__* info; } ;
struct TYPE_2__ {int (* chip_select ) (TYPE_1__*,int ,int) ;} ;


 struct sh_sci_spi* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct spi_device *VAR_0, int VAR_1)
{
 struct sh_sci_spi *VAR_2 = FUNC_0(VAR_0->master);

 if (VAR_2->info && VAR_2->info->chip_select)
  (VAR_2->info->chip_select)(VAR_2->info, VAR_0->chip_select, VAR_1);
}
