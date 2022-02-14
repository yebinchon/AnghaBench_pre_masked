
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spi_master {int dummy; } ;
struct TYPE_2__ {void* platform_data; } ;
struct spi_device {int * controller_state; int controller_data; TYPE_1__ dev; int modalias; int irq; int mode; int max_speed_hz; int chip_select; } ;
struct spi_board_info {int controller_data; scalar_t__ platform_data; int modalias; int irq; int mode; int max_speed_hz; int chip_select; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct spi_device*) ;
 struct spi_device* FUNC_2 (struct spi_master*) ;
 int FUNC_3 (struct spi_device*) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ) ;

struct spi_device *FUNC_6(struct spi_master *VAR_0,
      struct spi_board_info *VAR_1)
{
 struct spi_device *VAR_2;
 int VAR_3;
 VAR_2 = FUNC_2(VAR_0);
 if (!VAR_2)
  return ((void*)0);

 FUNC_0(FUNC_5(VAR_1->modalias) >= sizeof(VAR_2->modalias));

 VAR_2->chip_select = VAR_1->chip_select;
 VAR_2->max_speed_hz = VAR_1->max_speed_hz;
 VAR_2->mode = VAR_1->mode;
 VAR_2->irq = VAR_1->irq;
 FUNC_4(VAR_2->modalias, VAR_1->modalias, sizeof(VAR_2->modalias));
 VAR_2->dev.platform_data = (void *) VAR_1->platform_data;
 VAR_2->controller_data = VAR_1->controller_data;
 VAR_2->controller_state = ((void*)0);

 VAR_3 = FUNC_1(VAR_2);
 if (VAR_3 < 0) {
  FUNC_3(VAR_2);
  return ((void*)0);
 }

 return VAR_2;
}
