
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_imx_data {int* chipselect; } ;
struct spi_device {size_t chip_select; int mode; int master; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 struct spi_imx_data* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct spi_device *VAR_2, int VAR_3)
{
 struct spi_imx_data *VAR_4 = FUNC_1(VAR_2->master);
 int VAR_5 = VAR_4->chipselect[VAR_2->chip_select];
 int VAR_6 = VAR_3 != VAR_0;
 int VAR_7 = !(VAR_2->mode & VAR_1);

 if (VAR_5 < 0)
  return;

 FUNC_0(VAR_5, VAR_7 ^ VAR_6);
}
