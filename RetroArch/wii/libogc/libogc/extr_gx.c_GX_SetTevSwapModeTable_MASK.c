
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
 TYPE_1__* VAR_0 ;

void FUNC_2(u8 VAR_1,u8 VAR_2,u8 VAR_3,u8 VAR_4,u8 VAR_5)
{
 u32 VAR_6 = 0+(FUNC_1(VAR_1,1,3));
 u32 VAR_7 = 1+(FUNC_1(VAR_1,1,3));

 VAR_0->tevSwapModeTable[VAR_6] = (VAR_0->tevSwapModeTable[VAR_6]&~0x3)|(VAR_2&0x3);
 VAR_0->tevSwapModeTable[VAR_6] = (VAR_0->tevSwapModeTable[VAR_6]&~0xC)|(FUNC_1(VAR_3,2,2));
 FUNC_0(VAR_0->tevSwapModeTable[VAR_6]);

 VAR_0->tevSwapModeTable[VAR_7] = (VAR_0->tevSwapModeTable[VAR_7]&~0x3)|(VAR_4&0x3);
 VAR_0->tevSwapModeTable[VAR_7] = (VAR_0->tevSwapModeTable[VAR_7]&~0xC)|(FUNC_1(VAR_5,2,2));
 FUNC_0(VAR_0->tevSwapModeTable[VAR_7]);
}
