
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
struct TYPE_2__ {int* tevSwapModeTable; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int,int) ;
 size_t FUNC_2 (int,int,int) ;
 TYPE_1__* VAR_0 ;

void FUNC_3(u8 VAR_1,u8 VAR_2)
{
 u32 VAR_3 = (FUNC_2(VAR_1,1,3));

 if(VAR_1&1)
  VAR_0->tevSwapModeTable[VAR_3] = (VAR_0->tevSwapModeTable[VAR_3]&~0x7C000)|(FUNC_1(VAR_2,14,5));
 else
  VAR_0->tevSwapModeTable[VAR_3] = (VAR_0->tevSwapModeTable[VAR_3]&~0x1F0)|(FUNC_1(VAR_2,4,5));
 FUNC_0(VAR_0->tevSwapModeTable[VAR_3]);
}
