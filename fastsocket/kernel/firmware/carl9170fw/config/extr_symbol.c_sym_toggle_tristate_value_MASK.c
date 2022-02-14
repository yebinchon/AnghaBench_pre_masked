
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tristate ;
struct symbol {int dummy; } ;




 int FUNC_0 (struct symbol*) ;
 scalar_t__ FUNC_1 (struct symbol*,int) ;


tristate FUNC_2(struct symbol *VAR_0)
{
 tristate VAR_1, VAR_2;

 VAR_1 = VAR_2 = FUNC_0(VAR_0);
 do {
  switch (VAR_2) {
  case 129:
   VAR_2 = 130;
   break;
  case 130:
   VAR_2 = 128;
   break;
  case 128:
   VAR_2 = 129;
   break;
  }
  if (FUNC_1(VAR_0, VAR_2))
   break;
 } while (VAR_1 != VAR_2);
 return VAR_2;
}
