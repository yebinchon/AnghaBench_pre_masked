
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct mmc_spi_host {int power_mode; int powerup_msecs; TYPE_2__* spi; TYPE_1__* pdata; } ;
struct mmc_ios {int power_mode; scalar_t__ clock; int vdd; } ;
struct mmc_host {int dummy; } ;
struct TYPE_5__ {int mode; scalar_t__ max_speed_hz; int dev; } ;
struct TYPE_4__ {int (* setpower ) (int *,int ) ;} ;



 int const VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int) ;
 struct mmc_spi_host* FUNC_2 (struct mmc_host*) ;
 int FUNC_3 (struct mmc_spi_host*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (TYPE_2__*,int *,int) ;
 int FUNC_7 (int *,int ) ;

__attribute__((used)) static void FUNC_8(struct mmc_host *VAR_3, struct mmc_ios *VAR_4)
{
 struct mmc_spi_host *VAR_5 = FUNC_2(VAR_3);

 if (VAR_5->power_mode != VAR_4->power_mode) {
  int VAR_6;

  VAR_6 = VAR_5->pdata && VAR_5->pdata->setpower;

  FUNC_0(&VAR_5->spi->dev, "mmc_spi: power %s (%d)%s\n",
    FUNC_1(VAR_4->power_mode),
    VAR_4->vdd,
    VAR_6 ? ", can switch" : "");




  if (VAR_6) {
   switch (VAR_4->power_mode) {
   case 129:
   case 128:
    VAR_5->pdata->setpower(&VAR_5->spi->dev,
      VAR_4->vdd);
    if (VAR_4->power_mode == 128)
     FUNC_4(VAR_5->powerup_msecs);
   }
  }


  if (VAR_4->power_mode == VAR_0)
   FUNC_3(VAR_5);
  if (VAR_6 && VAR_4->power_mode == 129) {
   int VAR_7;
   u8 VAR_8 = 0;

   VAR_5->spi->mode &= ~(VAR_2|VAR_1);
   VAR_7 = FUNC_5(VAR_5->spi);
   if (VAR_7 < 0)
    FUNC_0(&VAR_5->spi->dev,
     "switch to SPI mode 0 failed\n");

   if (FUNC_6(VAR_5->spi, &VAR_8, 1) < 0)
    FUNC_0(&VAR_5->spi->dev,
     "put spi signals to low failed\n");
   FUNC_4(10);
   if (VAR_7 == 0) {
    VAR_5->spi->mode |= (VAR_2|VAR_1);
    VAR_7 = FUNC_5(VAR_5->spi);
    if (VAR_7 < 0)
     FUNC_0(&VAR_5->spi->dev,
      "switch back to SPI mode 3"
      " failed\n");
   }
  }

  VAR_5->power_mode = VAR_4->power_mode;
 }

 if (VAR_5->spi->max_speed_hz != VAR_4->clock && VAR_4->clock != 0) {
  int VAR_9;

  VAR_5->spi->max_speed_hz = VAR_4->clock;
  VAR_9 = FUNC_5(VAR_5->spi);
  FUNC_0(&VAR_5->spi->dev,
   "mmc_spi:  clock to %d Hz, %d\n",
   VAR_5->spi->max_speed_hz, VAR_9);
 }
}
