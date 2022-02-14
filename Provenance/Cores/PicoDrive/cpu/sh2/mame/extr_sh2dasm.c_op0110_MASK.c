
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
 switch(VAR_5 & 0xF)
 {
 case 0x00:
  FUNC_0(VAR_3, "MOV.B   @%s,%s", VAR_2[VAR_0], VAR_2[VAR_1]);
  break;
 case 0x01:
  FUNC_0(VAR_3, "MOV.W   @%s,%s", VAR_2[VAR_0], VAR_2[VAR_1]);
  break;
 case 0x02:
  FUNC_0(VAR_3, "MOV.L   @%s,%s", VAR_2[VAR_0], VAR_2[VAR_1]);
  break;
 case 0x03:
  FUNC_0(VAR_3, "MOV     %s,%s", VAR_2[VAR_0], VAR_2[VAR_1]);
  break;
 case 0x04:
  FUNC_0(VAR_3, "MOV.B   @%s+,%s", VAR_2[VAR_0], VAR_2[VAR_1]);
  break;
 case 0x05:
  FUNC_0(VAR_3, "MOV.W   @%s+,%s", VAR_2[VAR_0], VAR_2[VAR_1]);
  break;
 case 0x06:
  FUNC_0(VAR_3, "MOV.L   @%s+,%s", VAR_2[VAR_0], VAR_2[VAR_1]);
  break;
 case 0x07:
  FUNC_0(VAR_3, "NOT     %s,%s", VAR_2[VAR_0], VAR_2[VAR_1]);
  break;
 case 0x08:
  FUNC_0(VAR_3, "SWAP.B  %s,%s", VAR_2[VAR_0], VAR_2[VAR_1]);
  break;
 case 0x09:
  FUNC_0(VAR_3, "SWAP.W  %s,%s", VAR_2[VAR_0], VAR_2[VAR_1]);
  break;
 case 0x0a:
  FUNC_0(VAR_3, "NEGC    %s,%s", VAR_2[VAR_0], VAR_2[VAR_1]);
  break;
 case 0x0b:
  FUNC_0(VAR_3, "NEG     %s,%s", VAR_2[VAR_0], VAR_2[VAR_1]);
  break;
 case 0x0c:
  FUNC_0(VAR_3, "EXTU.B  %s,%s", VAR_2[VAR_0], VAR_2[VAR_1]);
  break;
 case 0x0d:
  FUNC_0(VAR_3, "EXTU.W  %s,%s", VAR_2[VAR_0], VAR_2[VAR_1]);
  break;
 case 0x0e:
  FUNC_0(VAR_3, "EXTS.B  %s,%s", VAR_2[VAR_0], VAR_2[VAR_1]);
  break;
 case 0x0f:
  FUNC_0(VAR_3, "EXTS.W  %s,%s", VAR_2[VAR_0], VAR_2[VAR_1]);
  break;
 }
 return 0;
}
