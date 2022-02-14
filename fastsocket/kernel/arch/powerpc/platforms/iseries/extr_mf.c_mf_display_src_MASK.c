
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int ce ;


 int FUNC_0 (int*,int ,int) ;
 int FUNC_1 (int*,int *) ;

void FUNC_2(u32 VAR_0)
{
 u8 VAR_1[12];

 FUNC_0(VAR_1, 0, sizeof(VAR_1));
 VAR_1[3] = 0x4a;
 VAR_1[7] = 0x01;
 VAR_1[8] = VAR_0 >> 24;
 VAR_1[9] = VAR_0 >> 16;
 VAR_1[10] = VAR_0 >> 8;
 VAR_1[11] = VAR_0;
 FUNC_1(VAR_1, ((void*)0));
}
