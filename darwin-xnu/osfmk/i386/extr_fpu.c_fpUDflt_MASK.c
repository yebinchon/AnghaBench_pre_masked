
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ user_addr_t ;
typedef int uint8_t ;
typedef int boolean_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,...) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (scalar_t__,char*,int) ;
 int FUNC_3 () ;
 scalar_t__ VAR_6 ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int ) ;

void
FUNC_7(user_addr_t VAR_7)
{
 uint8_t VAR_8;
 boolean_t VAR_9 = VAR_2;
 user_addr_t VAR_10 = VAR_7;
 do {




  if (FUNC_2(VAR_7, (char *) &VAR_8, 1)) {
   return;
  }
  FUNC_0("fpUDflt(0x%016llx) prefix: 0x%x\n",
   VAR_7, VAR_8);



  switch (VAR_8) {
      case 0x2E:
      case 0x36:
      case 0x3E:
      case 0x26:
      case 0x64:
      case 0x65:
      case 0x66:
      case 0x67:

   VAR_7++;
   if ((VAR_7 - VAR_10) > VAR_3) {
    return;
   }
   break;
      case 0x62:
      case 0xC5:
      case 0xC4:
   VAR_9 = VAR_4;
   break;
      default:
   return;
  }
 } while (!VAR_9);






 if (VAR_6 != VAR_0)
  return;

 FUNC_1(FUNC_6(VAR_5) == VAR_1);

 FUNC_0("fpUDflt() switching xstate to AVX512\n");
 (void) FUNC_4(FUNC_3());

 FUNC_5();

}
