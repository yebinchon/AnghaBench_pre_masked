
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tosa_lcd_data {struct spi_device* spi; } ;
struct spi_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct spi_device*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct tosa_lcd_data *VAR_2)
{
 struct spi_device *VAR_3 = VAR_2->spi;


 FUNC_2(VAR_3, VAR_0,0x4);
 FUNC_1(50);


 FUNC_2(VAR_3, VAR_0,0x6);
 FUNC_1(50);


 FUNC_0(VAR_1, 1);
 FUNC_1(100);
}
