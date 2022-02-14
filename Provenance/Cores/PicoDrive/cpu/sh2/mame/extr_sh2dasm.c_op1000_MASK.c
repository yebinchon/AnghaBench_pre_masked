
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT32 ;
typedef int UINT16 ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 char** VAR_1 ;
 int FUNC_1 (char*,char*,int,...) ;

__attribute__((used)) static UINT32 FUNC_2(char *VAR_2, UINT32 VAR_3, UINT16 VAR_4)
{
 switch((VAR_4 >> 8) & 15)
 {
 case 0:
  FUNC_1(VAR_2, "MOV.B   R0,@($%02X,%s)", (VAR_4 & 15), VAR_1[VAR_0]);
  break;
 case 1:
  FUNC_1(VAR_2, "MOV.W   R0,@($%02X,%s)", (VAR_4 & 15) * 2, VAR_1[VAR_0]);
  break;
 case 4:
  FUNC_1(VAR_2, "MOV.B   @($%02X,%s),R0", (VAR_4 & 15), VAR_1[VAR_0]);
  break;
 case 5:
  FUNC_1(VAR_2, "MOV.W   @($%02X,%s),R0", (VAR_4 & 15), VAR_1[VAR_0]);
  break;
 case 8:
  FUNC_1(VAR_2, "CMP/EQ  #$%02X,R0", (VAR_4 & 0xff));
  break;
 case 9:
  FUNC_1(VAR_2, "BT      $%08x", VAR_3 + FUNC_0(VAR_4 & 0xff) * 2 + 2);
  break;
 case 11:
  FUNC_1(VAR_2, "BF      $%08x", VAR_3 + FUNC_0(VAR_4 & 0xff) * 2 + 2);
  break;
 case 13:
  FUNC_1(VAR_2, "BTS     $%08x", VAR_3 + FUNC_0(VAR_4 & 0xff) * 2 + 2);
  break;
 case 15:
  FUNC_1(VAR_2, "BFS     $%08x", VAR_3 + FUNC_0(VAR_4 & 0xff) * 2 + 2);
  break;
 default :
  FUNC_1(VAR_2, "invalid $%04X", VAR_4);
 }
 return 0;
}
