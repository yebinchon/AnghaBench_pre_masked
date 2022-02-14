
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct em28xx {scalar_t__ reg_gpo_num; int reg_gpo; scalar_t__ reg_gpio_num; int reg_gpio; } ;


 int FUNC_0 (struct em28xx*,scalar_t__) ;
 int FUNC_1 (struct em28xx*,scalar_t__,int*,int) ;

int FUNC_2(struct em28xx *VAR_0, u16 VAR_1, u8 VAR_2,
     u8 VAR_3)
{
 int VAR_4;
 u8 VAR_5;


 if (VAR_1 == VAR_0->reg_gpo_num)
  VAR_4 = VAR_0->reg_gpo;
 else if (VAR_1 == VAR_0->reg_gpio_num)
  VAR_4 = VAR_0->reg_gpio;
 else
  VAR_4 = FUNC_0(VAR_0, VAR_1);

 if (VAR_4 < 0)
  return VAR_4;

 VAR_5 = (((u8) VAR_4) & ~VAR_3) | (VAR_2 & VAR_3);

 return FUNC_1(VAR_0, VAR_1, &VAR_5, 1);
}
