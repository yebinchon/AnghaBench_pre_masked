
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ GPU_SHADER_TYPE ;


 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (scalar_t__,int*,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

void FUNC_2(GPU_SHADER_TYPE VAR_3, u32 VAR_4, u32* VAR_5, u32 VAR_6)
{
 if(!VAR_5)return;

 int VAR_7=(VAR_3==VAR_2)?(-0x30):(0x0);

 FUNC_0(VAR_0+VAR_7, 0x80000000|VAR_4);
 FUNC_1(VAR_1+VAR_7, VAR_5, VAR_6*4);
}
