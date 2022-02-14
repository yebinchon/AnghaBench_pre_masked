
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_13 (char*,...) ;
 int FUNC_14 (int ) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void FUNC_15(void)
{
 if (VAR_4)
  FUNC_13("HHSPEC");

 switch (FUNC_14(VAR_2)) {
 case 0x26:
  FUNC_7();
  return;
 case 0x25:
  FUNC_8();
  return;
 case 0x27:
  FUNC_3();
  return;
 case 0x28:
  FUNC_4(VAR_3);
  return;
 case 0x29:
 case 0x2c:
  FUNC_0();
  return;
 case 0x2f:
  FUNC_2();
  return;
 case 0x30:
  FUNC_11();
  return;
 case 0xfe:
  if (VAR_4)
   FUNC_13("FORMAT Command");
  break;
 default:
  if (VAR_4)
   FUNC_13("UNKNOWN Command %02X", FUNC_14(VAR_2));
  break;
 }

 VAR_1 = 168;
 VAR_0;
}
