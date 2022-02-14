
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum expr_type { ____Placeholder_expr_type } expr_type ;
 int FUNC_0 (char*,int,int) ;

int FUNC_1(enum expr_type VAR_0, enum expr_type VAR_1)
{



 if (VAR_0 == VAR_1)
  return 0;
 switch (VAR_0) {
 case 132:
 case 128:
  if (VAR_1 == 130)
   return 1;
 case 130:
  if (VAR_1 == 133)
   return 1;
 case 133:
  if (VAR_1 == 129)
   return 1;
 case 129:
  if (VAR_1 == 131)
   return 1;
 case 131:
  if (VAR_1 == 0)
   return 1;
 default:
  return -1;
 }
 FUNC_0("[%dgt%d?]", VAR_0, VAR_1);
 return 0;

}
