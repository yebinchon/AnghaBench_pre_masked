
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT32 ;
typedef int UINT16 ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 char** VAR_2 ;
 int FUNC_0 (char*,char*,char*,char*) ;

__attribute__((used)) static UINT32 FUNC_1(char *VAR_3, UINT32 VAR_4, UINT16 VAR_5)
{
 switch (VAR_5 & 15)
 {
 case 0:
  FUNC_0(VAR_3, "CMP/EQ  %s,%s", VAR_2[VAR_0], VAR_2[VAR_1]);
  break;
 case 1:
  FUNC_0(VAR_3, "??????  %s,%s", VAR_2[VAR_0], VAR_2[VAR_1]);
  break;
 case 2:
  FUNC_0(VAR_3, "CMP/HS  %s,%s", VAR_2[VAR_0], VAR_2[VAR_1]);
  break;
 case 3:
  FUNC_0(VAR_3, "CMP/GE  %s,%s", VAR_2[VAR_0], VAR_2[VAR_1]);
  break;
 case 4:
  FUNC_0(VAR_3, "DIV1    %s,%s", VAR_2[VAR_0], VAR_2[VAR_1]);
  break;
 case 5:
  FUNC_0(VAR_3, "DMULU.L %s,%s", VAR_2[VAR_0], VAR_2[VAR_1]);
  break;
 case 6:
  FUNC_0(VAR_3, "CMP/HI  %s,%s", VAR_2[VAR_0], VAR_2[VAR_1]);
  break;
 case 7:
  FUNC_0(VAR_3, "CMP/GT  %s,%s", VAR_2[VAR_0], VAR_2[VAR_1]);
  break;
 case 8:
  FUNC_0(VAR_3, "SUB     %s,%s", VAR_2[VAR_0], VAR_2[VAR_1]);
  break;
 case 9:
  FUNC_0(VAR_3, "??????  %s,%s", VAR_2[VAR_0], VAR_2[VAR_1]);
  break;
 case 10:
  FUNC_0(VAR_3, "SUBC    %s,%s", VAR_2[VAR_0], VAR_2[VAR_1]);
  break;
 case 11:
  FUNC_0(VAR_3, "SUBV    %s,%s", VAR_2[VAR_0], VAR_2[VAR_1]);
  break;
 case 12:
  FUNC_0(VAR_3, "ADD     %s,%s", VAR_2[VAR_0], VAR_2[VAR_1]);
  break;
 case 13:
  FUNC_0(VAR_3, "DMULS.L %s,%s", VAR_2[VAR_0], VAR_2[VAR_1]);
  break;
 case 14:
  FUNC_0(VAR_3, "ADDC    %s,%s", VAR_2[VAR_0], VAR_2[VAR_1]);
  break;
 case 15:
  FUNC_0(VAR_3, "ADDV    %s,%s", VAR_2[VAR_0], VAR_2[VAR_1]);
  break;
 }
 return 0;
}
