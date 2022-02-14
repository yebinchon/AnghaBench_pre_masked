
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct em28xx {scalar_t__ reg_gpo_num; char reg_gpo; scalar_t__ reg_gpio_num; char reg_gpio; } ;


 int VAR_0 ;
 int FUNC_0 (struct em28xx*,int ,scalar_t__,char*,int) ;

int FUNC_1(struct em28xx *VAR_1, u16 VAR_2, char *VAR_3, int VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(VAR_1, VAR_0, VAR_2, VAR_3, VAR_4);






 if (VAR_5 >= 0) {
  if (VAR_2 == VAR_1->reg_gpo_num)
   VAR_1->reg_gpo = VAR_3[0];
  else if (VAR_2 == VAR_1->reg_gpio_num)
   VAR_1->reg_gpio = VAR_3[0];
 }

 return VAR_5;
}
