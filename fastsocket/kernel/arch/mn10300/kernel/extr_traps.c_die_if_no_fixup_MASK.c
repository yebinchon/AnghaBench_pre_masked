
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct pt_regs {scalar_t__ pc; } ;
typedef enum exception_code { ____Placeholder_exception_code } exception_code ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,struct pt_regs*,int) ;
 int FUNC_1 (struct pt_regs*) ;
 scalar_t__ FUNC_2 (struct pt_regs*,int) ;
 scalar_t__ FUNC_3 (int ,char const*,struct pt_regs*,int,int ,int ) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (struct pt_regs*) ;

int FUNC_6(const char *VAR_2, struct pt_regs *VAR_3,
      enum exception_code VAR_4)
{
 if (FUNC_5(VAR_3))
  return 0;

 FUNC_4(VAR_4);

 switch (VAR_4) {

 case 133:
 case 137:
 case 136:
 case 139:
 case 132:
 case 131:
 case 140:
 case 135:
 case 134:
 case 129:
 case 130:
 case 138:
  if (FUNC_1(VAR_3))
   return 1;
 case 128:
  if (VAR_3->pc && *(uint8_t *)VAR_3->pc == 0xff)
   if (FUNC_3(VAR_0, VAR_2, VAR_3, VAR_4, 0, 0))
    return 1;
  break;
 default:
  break;
 }







 if (FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4, 0, 0))
  return 1;


 FUNC_0(VAR_2, VAR_3, VAR_4);
}
