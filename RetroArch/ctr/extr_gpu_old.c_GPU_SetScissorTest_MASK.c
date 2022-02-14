
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int GPU_SCISSORMODE ;


 int FUNC_0 (int ,int*,int) ;
 int VAR_0 ;

void FUNC_1(GPU_SCISSORMODE VAR_1, u32 VAR_2, u32 VAR_3, u32 VAR_4, u32 VAR_5)
{
 u32 VAR_6[3];

 VAR_6[0x0] = VAR_1;
 VAR_6[0x1] = (VAR_3<<16)|(VAR_2&0xFFFF);
 VAR_6[0x2] = ((VAR_5-1)<<16)|((VAR_4-1)&0xFFFF);
 FUNC_0(VAR_0, VAR_6, 0x00000003);
}
