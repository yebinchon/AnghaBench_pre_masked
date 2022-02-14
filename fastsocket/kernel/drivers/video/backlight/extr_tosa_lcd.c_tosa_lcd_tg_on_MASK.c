
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tosa_lcd_data {int i2c; struct spi_device* spi; scalar_t__ is_vga; } ;
struct spi_device {int dummy; } ;
struct i2c_board_info {char* type; struct spi_device* platform_data; int addr; } ;
struct i2c_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct i2c_adapter* FUNC_0 (int ) ;
 int FUNC_1 (struct i2c_adapter*,struct i2c_board_info*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct spi_device*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct tosa_lcd_data *VAR_7)
{
 struct spi_device *VAR_8 = VAR_7->spi;
 int VAR_9 = VAR_3 | VAR_5 | VAR_4;

 if (VAR_7->is_vga)
  VAR_9 |= VAR_6;

 FUNC_3(VAR_8, VAR_2, VAR_9);


 FUNC_3(VAR_8, VAR_1,0x4);
 FUNC_2(50);


 FUNC_3(VAR_8, VAR_1,0x0);

 if (!VAR_7->i2c) {


  struct i2c_adapter *VAR_10 = FUNC_0(0);
  struct i2c_board_info VAR_11 = {
   .type = "tosa-bl",
   .addr = VAR_0,
   .platform_data = VAR_7->spi,
  };
  VAR_7->i2c = FUNC_1(VAR_10, &VAR_11);
 }
}
