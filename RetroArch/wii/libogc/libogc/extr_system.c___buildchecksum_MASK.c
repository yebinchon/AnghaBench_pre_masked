
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;



__attribute__((used)) static void FUNC_0(u16 *VAR_0,u16 *VAR_1,u16 *VAR_2)
{
 u32 VAR_3;

 *VAR_1 = 0;
 *VAR_2 = 0;
 for(VAR_3=0;VAR_3<4;VAR_3++) {
  *VAR_1 += VAR_0[6+VAR_3];
  *VAR_2 += VAR_0[6+VAR_3]^-1;
 }
}
