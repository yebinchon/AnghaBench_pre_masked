
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ili9320_reg {int value; int address; } ;
struct ili9320 {int dummy; } ;


 int FUNC_0 (struct ili9320*,int ,int ) ;

int FUNC_1(struct ili9320 *VAR_0,
         struct ili9320_reg *VAR_1,
         int VAR_2)
{
 int VAR_3;
 int VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++, VAR_1++) {
  VAR_4 = FUNC_0(VAR_0, VAR_1->address, VAR_1->value);
  if (VAR_4 != 0)
   return VAR_4;
 }

 return 0;
}
