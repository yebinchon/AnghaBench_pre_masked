
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT32 ;
typedef int UINT16 ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 char** VAR_2 ;
 int FUNC_0 (char*,char*,...) ;

__attribute__((used)) static UINT32 FUNC_1(char *VAR_3, UINT32 VAR_4, UINT16 VAR_5)
{
 switch (VAR_5 & 15)
 {
 case 0:
  FUNC_0(VAR_3, "MOV.B   %s,@%s", VAR_2[VAR_0], VAR_2[VAR_1]);
  break;
 case 1:
  FUNC_0(VAR_3, "MOV.W   %s,@%s", VAR_2[VAR_0], VAR_2[VAR_1]);
  break;
 case 2:
  FUNC_0(VAR_3, "MOV.L   %s,@%s", VAR_2[VAR_0], VAR_2[VAR_1]);
  break;
 case 3:
  FUNC_0(VAR_3, "??????  $%04X", VAR_5);
  break;
 case 4:
  FUNC_0(VAR_3, "MOV.B   %s,@-%s", VAR_2[VAR_0], VAR_2[VAR_1]);
  break;
 case 5:
  FUNC_0(VAR_3, "MOV.W   %s,@-%s", VAR_2[VAR_0], VAR_2[VAR_1]);
  break;
 case 6:
  FUNC_0(VAR_3, "MOV.L   %s,@-%s", VAR_2[VAR_0], VAR_2[VAR_1]);
  break;
 case 7:
  FUNC_0(VAR_3, "DIV0S   %s,%s", VAR_2[VAR_0], VAR_2[VAR_1]);
  break;
 case 8:
  FUNC_0(VAR_3, "TST     %s,%s", VAR_2[VAR_0], VAR_2[VAR_1]);
  break;
 case 9:
  FUNC_0(VAR_3, "AND     %s,%s", VAR_2[VAR_0], VAR_2[VAR_1]);
  break;
 case 10:
  FUNC_0(VAR_3, "XOR     %s,%s", VAR_2[VAR_0], VAR_2[VAR_1]);
  break;
 case 11:
  FUNC_0(VAR_3, "OR      %s,%s", VAR_2[VAR_0], VAR_2[VAR_1]);
  break;
 case 12:
  FUNC_0(VAR_3, "CMP/STR %s,%s", VAR_2[VAR_0], VAR_2[VAR_1]);
  break;
 case 13:
  FUNC_0(VAR_3, "XTRCT   %s,%s", VAR_2[VAR_0], VAR_2[VAR_1]);
  break;
 case 14:
  FUNC_0(VAR_3, "MULU.W  %s,%s", VAR_2[VAR_0], VAR_2[VAR_1]);
  break;
 case 15:
  FUNC_0(VAR_3, "MULS.W  %s,%s", VAR_2[VAR_0], VAR_2[VAR_1]);
  break;
 }
 return 0;
}
