
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmc_spi_host {TYPE_1__* spi; } ;
struct TYPE_2__ {int dev; int mode; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct mmc_spi_host*,int) ;
 int FUNC_3 (struct mmc_spi_host*,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_5(struct mmc_spi_host *VAR_2)
{



 FUNC_3(VAR_2, VAR_1);
 FUNC_2(VAR_2, 10);
 VAR_2->spi->mode |= VAR_0;
 if (FUNC_4(VAR_2->spi) != 0) {

  FUNC_1(&VAR_2->spi->dev,
    "can't change chip-select polarity\n");
  VAR_2->spi->mode &= ~VAR_0;
 } else {
  FUNC_2(VAR_2, 18);

  VAR_2->spi->mode &= ~VAR_0;
  if (FUNC_4(VAR_2->spi) != 0) {

   FUNC_0(&VAR_2->spi->dev,
     "can't restore chip-select polarity\n");
  }
 }
}
