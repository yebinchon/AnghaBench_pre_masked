
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
typedef int GPU_COMBINEFUNC ;


 int FUNC_0 (int,int*,int) ;
 int VAR_0 ;
 int* VAR_1 ;
 int FUNC_1 (int*,int,int) ;

void FUNC_2(u8 VAR_2, u16 VAR_3, u16 VAR_4, u16 VAR_5, u16 VAR_6, GPU_COMBINEFUNC VAR_7, GPU_COMBINEFUNC VAR_8, u32 VAR_9)
{
 if(VAR_2>6)return;
 u32 VAR_10[0x5];
 FUNC_1(VAR_10, 0x00, 5*4);

 VAR_10[0x0]=(VAR_4<<16)|(VAR_3);
 VAR_10[0x1]=(VAR_6<<12)|(VAR_5);
 VAR_10[0x2]=(VAR_8<<16)|(VAR_7);
 VAR_10[0x3]=VAR_9;
 VAR_10[0x4]=0x00000000;

 FUNC_0(VAR_0|VAR_1[VAR_2], VAR_10, 0x00000005);
}
