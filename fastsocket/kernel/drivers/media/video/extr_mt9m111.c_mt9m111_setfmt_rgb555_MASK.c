
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt9m111 {scalar_t__ swap_rgb_even_odd; scalar_t__ swap_rgb_red_blue; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct i2c_client*,int) ;
 struct mt9m111* FUNC_1 (struct i2c_client*) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_4)
{
 struct mt9m111 *VAR_5 = FUNC_1(VAR_4);
 int VAR_6 = 0;

 if (VAR_5->swap_rgb_red_blue)
  VAR_6 |= VAR_3;
 if (VAR_5->swap_rgb_even_odd)
  VAR_6 |= VAR_2;
 VAR_6 |= VAR_0 | VAR_1;

 return FUNC_0(VAR_4, VAR_6);
}
