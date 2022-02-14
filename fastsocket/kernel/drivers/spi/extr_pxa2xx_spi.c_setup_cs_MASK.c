
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int mode; int dev; } ;
struct pxa2xx_spi_chip {int gpio_cs; scalar_t__ cs_control; } ;
struct chip_data {int gpio_cs_inverted; int gpio_cs; scalar_t__ cs_control; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int FUNC_5(struct spi_device *VAR_1, struct chip_data *VAR_2,
      struct pxa2xx_spi_chip *VAR_3)
{
 int VAR_4 = 0;

 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
  return 0;




 if (FUNC_3(VAR_2->gpio_cs))
  FUNC_2(VAR_2->gpio_cs);


 if (VAR_3->cs_control) {
  VAR_2->cs_control = VAR_3->cs_control;
  return 0;
 }

 if (FUNC_3(VAR_3->gpio_cs)) {
  VAR_4 = FUNC_4(VAR_3->gpio_cs, "SPI_CS");
  if (VAR_4) {
   FUNC_0(&VAR_1->dev, "failed to request chip select "
     "GPIO%d\n", VAR_3->gpio_cs);
   return VAR_4;
  }

  VAR_2->gpio_cs = VAR_3->gpio_cs;
  VAR_2->gpio_cs_inverted = VAR_1->mode & VAR_0;

  VAR_4 = FUNC_1(VAR_2->gpio_cs,
     !VAR_2->gpio_cs_inverted);
 }

 return VAR_4;
}
