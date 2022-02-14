
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT32 ;
typedef int UINT16 ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,int,...) ;

__attribute__((used)) static UINT32 FUNC_1(char *VAR_1, UINT32 VAR_2, UINT16 VAR_3)
{
 UINT32 VAR_4 = 0;
 switch((VAR_3 >> 8) & 15)
 {
 case 0:
  FUNC_0(VAR_1, "MOV.B   R0,@($%02X,GBR)", VAR_3 & 0xff);
  break;
 case 1:
  FUNC_0(VAR_1, "MOV.W   R0,@($%04X,GBR)", (VAR_3 & 0xff) * 2);
  break;
 case 2:
  FUNC_0(VAR_1, "MOV.L   R0,@($%04X,GBR)", (VAR_3 & 0xff) * 4);
  break;
 case 3:
  FUNC_0(VAR_1, "TRAPA   #$%02X", VAR_3 & 0xff);
  VAR_4 = VAR_0;
  break;
 case 4:
  FUNC_0(VAR_1, "MOV.B   @($%02X,GBR),R0", VAR_3 & 0xff);
  break;
 case 5:
  FUNC_0(VAR_1, "MOV.W   @($%04X,GBR),R0", (VAR_3 & 0xff) * 2);
  break;
 case 6:
  FUNC_0(VAR_1, "MOV.L   @($%04X,GBR),R0", (VAR_3 & 0xff) * 4);
  break;
 case 7:
  FUNC_0(VAR_1, "MOVA    @($%04X,PC),R0  ; @$%08x", (VAR_3 & 0xff) * 4,
   ((VAR_2 + 2) & ~3) + (VAR_3 & 0xff) * 4);
  break;
 case 8:
  FUNC_0(VAR_1, "TST     #$%02X,R0", VAR_3 & 0xff);
  break;
 case 9:
  FUNC_0(VAR_1, "AND     #$%02X,R0", VAR_3 & 0xff);
  break;
 case 10:
  FUNC_0(VAR_1, "XOR     #$%02X,R0", VAR_3 & 0xff);
  break;
 case 11:
  FUNC_0(VAR_1, "OR      #$%02X,R0", VAR_3 & 0xff);
  break;
 case 12:
  FUNC_0(VAR_1, "TST.B   #$%02X,@(R0,GBR)", VAR_3 & 0xff);
  break;
 case 13:
  FUNC_0(VAR_1, "AND.B   #$%02X,@(R0,GBR)", VAR_3 & 0xff);
  break;
 case 14:
  FUNC_0(VAR_1, "XOR.B   #$%02X,@(R0,GBR)", VAR_3 & 0xff);
  break;
 case 15:
  FUNC_0(VAR_1, "OR.B    #$%02X,@(R0,GBR)", VAR_3 & 0xff);
  break;
 }
 return VAR_4;
}
