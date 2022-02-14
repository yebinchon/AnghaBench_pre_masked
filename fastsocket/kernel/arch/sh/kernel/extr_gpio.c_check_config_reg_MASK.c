
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pinmux_info {int dummy; } ;
struct pinmux_cfg_reg {int field_width; int reg_width; int reg; } ;


 unsigned long FUNC_0 (int ,int ,int,unsigned long) ;

__attribute__((used)) static int FUNC_1(struct pinmux_info *VAR_0,
       struct pinmux_cfg_reg *VAR_1,
       int VAR_2)
{
 unsigned long VAR_3, VAR_4, VAR_5;

 VAR_3 = 1 << VAR_1->field_width;
 VAR_4 = VAR_2 / VAR_3;
 VAR_5 = VAR_2 % VAR_3;

 if (FUNC_0(VAR_1->reg, VAR_1->reg_width,
     VAR_1->field_width, VAR_4) == VAR_5)
  return 0;

 return -1;
}
