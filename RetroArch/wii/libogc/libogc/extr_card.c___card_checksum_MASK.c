
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;



__attribute__((used)) static void FUNC_0(u16 *VAR_0,u32 VAR_1,u16 *VAR_2,u16 *VAR_3)
{
 u32 VAR_4;
    *VAR_2 = 0;
 *VAR_3 = 0;
 VAR_1 /= 2;
    for (VAR_4 = 0; VAR_4 < VAR_1; ++VAR_4) {
        *VAR_2 += VAR_0[VAR_4];
        *VAR_3 += (VAR_0[VAR_4] ^ 0xffff);
    }
    if (*VAR_2 == 0xffff) *VAR_2 = 0;
    if (*VAR_3 == 0xffff) *VAR_3 = 0;
}
