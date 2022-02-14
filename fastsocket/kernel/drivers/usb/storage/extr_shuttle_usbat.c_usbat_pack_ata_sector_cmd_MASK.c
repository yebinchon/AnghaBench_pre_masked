
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;



__attribute__((used)) static void FUNC_0(unsigned char *VAR_0,
     unsigned char VAR_1,
     u32 VAR_2, unsigned char VAR_3)
{
 VAR_0[0] = 0;
 VAR_0[1] = VAR_1;
 VAR_0[2] = VAR_2 & 0xFF;
 VAR_0[3] = (VAR_2 >> 8) & 0xFF;
 VAR_0[4] = (VAR_2 >> 16) & 0xFF;
 VAR_0[5] = 0xE0 | ((VAR_2 >> 24) & 0x0F);
 VAR_0[6] = VAR_3;
}
