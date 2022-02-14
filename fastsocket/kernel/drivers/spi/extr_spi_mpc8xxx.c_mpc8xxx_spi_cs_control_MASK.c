
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u16 ;
struct TYPE_2__ {struct device* parent; } ;
struct spi_device {size_t chip_select; TYPE_1__ dev; } ;
struct mpc8xxx_spi_probe_info {int* gpios; int* alow_flags; } ;
struct device {int platform_data; } ;


 int FUNC_0 (int,int) ;
 struct mpc8xxx_spi_probe_info* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct spi_device *VAR_0, bool VAR_1)
{
 struct device *VAR_2 = VAR_0->dev.parent;
 struct mpc8xxx_spi_probe_info *VAR_3 = FUNC_1(VAR_2->platform_data);
 u16 VAR_4 = VAR_0->chip_select;
 int VAR_5 = VAR_3->gpios[VAR_4];
 bool VAR_6 = VAR_3->alow_flags[VAR_4];

 FUNC_0(VAR_5, VAR_1 ^ VAR_6);
}
