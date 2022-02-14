
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int mode; int chip_select; struct s3c24xx_spi_devstate* controller_state; } ;
struct s3c24xx_spi_devstate {int spcon; } ;
struct s3c24xx_spi {int pdata; int (* set_cs ) (int ,int ,unsigned int) ;scalar_t__ regs; } ;




 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,unsigned int) ;
 int FUNC_1 (int ,int ,unsigned int) ;
 struct s3c24xx_spi* FUNC_2 (struct spi_device*) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct spi_device *VAR_3, int VAR_4)
{
 struct s3c24xx_spi_devstate *VAR_5 = VAR_3->controller_state;
 struct s3c24xx_spi *VAR_6 = FUNC_2(VAR_3);
 unsigned int VAR_7 = VAR_3->mode & VAR_2 ? 1 : 0;



 switch (VAR_4) {
 case 128:
  VAR_6->set_cs(VAR_6->pdata, VAR_3->chip_select, VAR_7^1);
  FUNC_3(VAR_5->spcon, VAR_6->regs + VAR_0);
  break;

 case 129:
  FUNC_3(VAR_5->spcon | VAR_1,
         VAR_6->regs + VAR_0);
  VAR_6->set_cs(VAR_6->pdata, VAR_3->chip_select, VAR_7);
  break;
 }
}
