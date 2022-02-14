
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tosa_lcd_data {int lcd_power; } ;
struct lcd_device {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;
 struct tosa_lcd_data* FUNC_1 (struct lcd_device*) ;
 int FUNC_2 (struct tosa_lcd_data*) ;
 int FUNC_3 (struct tosa_lcd_data*) ;

int FUNC_4(struct lcd_device *VAR_0, int VAR_1)
{
 struct tosa_lcd_data *VAR_2 = FUNC_1(VAR_0);

 if (FUNC_0(VAR_1) && !FUNC_0(VAR_2->lcd_power))
  FUNC_3(VAR_2);

 if (!FUNC_0(VAR_1) && FUNC_0(VAR_2->lcd_power))
  FUNC_2(VAR_2);

 VAR_2->lcd_power = VAR_1;
 return 0;
}
