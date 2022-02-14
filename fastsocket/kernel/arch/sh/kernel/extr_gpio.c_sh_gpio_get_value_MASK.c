
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pinmux_info {int dummy; } ;
struct pinmux_data_reg {int reg_width; int reg; } ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (struct pinmux_info*,unsigned int,struct pinmux_data_reg**,int*) ;
 int FUNC_2 (int ,int ,int,int) ;

__attribute__((used)) static int FUNC_3(struct pinmux_info *VAR_0, unsigned VAR_1)
{
 struct pinmux_data_reg *VAR_2 = ((void*)0);
 int VAR_3 = 0;

 if (!VAR_0 || FUNC_1(VAR_0, VAR_1, &VAR_2, &VAR_3) != 0) {
  FUNC_0();
  return 0;
 }

 return FUNC_2(VAR_2->reg, VAR_2->reg_width, 1, VAR_3);
}
