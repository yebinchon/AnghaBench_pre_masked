
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_3__ {int* r; } ;
typedef TYPE_1__ GXFogAdjTbl ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int,int) ;

void FUNC_2(u8 VAR_0,u16 VAR_1,GXFogAdjTbl *VAR_2)
{
 u32 VAR_3;

 if(VAR_0) {
  VAR_3 = 0xe9000000|(FUNC_1(VAR_2->r[1],12,12))|(VAR_2->r[0]&0x0fff);
  FUNC_0(VAR_3);

  VAR_3 = 0xea000000|(FUNC_1(VAR_2->r[3],12,12))|(VAR_2->r[2]&0x0fff);
  FUNC_0(VAR_3);

  VAR_3 = 0xeb000000|(FUNC_1(VAR_2->r[5],12,12))|(VAR_2->r[4]&0x0fff);
  FUNC_0(VAR_3);

  VAR_3 = 0xec000000|(FUNC_1(VAR_2->r[7],12,12))|(VAR_2->r[6]&0x0fff);
  FUNC_0(VAR_3);

  VAR_3 = 0xed000000|(FUNC_1(VAR_2->r[9],12,12))|(VAR_2->r[8]&0x0fff);
  FUNC_0(VAR_3);
 }
 VAR_3 = 0xe8000000|(FUNC_1(VAR_0,10,1))|((VAR_1 + 342)&0x03ff);
 FUNC_0(VAR_3);
}
