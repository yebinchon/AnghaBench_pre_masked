
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT32 ;
typedef int UINT16 ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 char** VAR_3 ;
 int FUNC_0 (char*,char*,...) ;

__attribute__((used)) static UINT32 FUNC_1(char *VAR_4, UINT32 VAR_5, UINT16 VAR_6)
{
 UINT32 VAR_7 = 0;
 switch(VAR_6 & 0x3f)
 {
 case 0x02:
  FUNC_0(VAR_4,"STC     SR,%s", VAR_3[VAR_2]);
  break;
 case 0x03:
  FUNC_0(VAR_4,"BSRF    %s", VAR_3[VAR_2]);
  break;
 case 0x08:
  FUNC_0(VAR_4,"CLRT");
  break;
 case 0x09:
  FUNC_0(VAR_4,"NOP");
  break;
 case 0x0A:
  FUNC_0(VAR_4,"STS     MACH,%s", VAR_3[VAR_2]);
  break;
 case 0x0B:
  FUNC_0(VAR_4,"RTS");
  VAR_7 = VAR_0;
  break;
 case 0x12:
  FUNC_0(VAR_4,"STS     GBR,%s", VAR_3[VAR_2]);
  break;
 case 0x18:
  FUNC_0(VAR_4,"SETT");
  break;
 case 0x19:
  FUNC_0(VAR_4,"DIV0U");
  break;
 case 0x1A:
  FUNC_0(VAR_4,"STS     MACL,%s", VAR_3[VAR_2]);
  break;
 case 0x1B:
  FUNC_0(VAR_4,"SLEEP");
  break;
 case 0x22:
  FUNC_0(VAR_4,"STC     VBR,%s", VAR_3[VAR_2]);
  break;
 case 0x23:
  FUNC_0(VAR_4,"BRAF    %s", VAR_3[VAR_2]);
  break;
 case 0x28:
  FUNC_0(VAR_4,"CLRMAC");
  break;
 case 0x29:
  FUNC_0(VAR_4,"MOVT    %s", VAR_3[VAR_2]);
  break;
 case 0x2A:
  FUNC_0(VAR_4,"STS     PR,%s", VAR_3[VAR_2]);
  break;
 case 0x2B:
  FUNC_0(VAR_4,"RTE");
  VAR_7 = VAR_0;
  break;
 default:
  switch(VAR_6 & 15)
  {
  case 0:
   FUNC_0(VAR_4, "??????  $%04X", VAR_6);
   break;
  case 1:
   FUNC_0(VAR_4, "??????  $%04X", VAR_6);
   break;
  case 2:
   FUNC_0(VAR_4, "??????  $%04X", VAR_6);
   break;
  case 3:
   FUNC_0(VAR_4, "??????  $%04X", VAR_6);
   break;
  case 4:
   FUNC_0(VAR_4, "MOV.B   %s,@(R0,%s)", VAR_3[VAR_1], VAR_3[VAR_2]);
   break;
  case 5:
   FUNC_0(VAR_4, "MOV.W   %s,@(R0,%s)", VAR_3[VAR_1], VAR_3[VAR_2]);
   break;
  case 6:
   FUNC_0(VAR_4, "MOV.L   %s,@(R0,%s)", VAR_3[VAR_1], VAR_3[VAR_2]);
   break;
  case 7:
   FUNC_0(VAR_4, "MUL.L   %s,%s", VAR_3[VAR_1], VAR_3[VAR_2]);
   break;
  case 8:
   FUNC_0(VAR_4, "??????  $%04X", VAR_6);
   break;
  case 9:
   FUNC_0(VAR_4, "??????  $%04X", VAR_6);
   break;
  case 10:
   FUNC_0(VAR_4, "??????  $%04X", VAR_6);
   break;
  case 11:
   FUNC_0(VAR_4, "??????  $%04X", VAR_6);
   break;
  case 12:
   FUNC_0(VAR_4, "MOV.B   @(R0,%s),%s", VAR_3[VAR_1], VAR_3[VAR_2]);
   break;
  case 13:
   FUNC_0(VAR_4, "MOV.W   @(R0,%s),%s", VAR_3[VAR_1], VAR_3[VAR_2]);
   break;
  case 14:
   FUNC_0(VAR_4, "MOV.L   @(R0,%s),%s", VAR_3[VAR_1], VAR_3[VAR_2]);
   break;
  case 15:
   FUNC_0(VAR_4, "MAC.L   @%s+,@%s+", VAR_3[VAR_2], VAR_3[VAR_1]);
   break;
  }
 }
 return VAR_7;
}
