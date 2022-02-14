
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wb35_reg {int BB2C; } ;
struct hw_data {struct wb35_reg reg; } ;


 int FUNC_0 (int) ;

u8 FUNC_1(struct hw_data *VAR_0)
{
 struct wb35_reg *VAR_1 = &VAR_0->reg;

 if ((VAR_1->BB2C & FUNC_0(11)) == 0)
  return 0;
 else
  return 1;
}
