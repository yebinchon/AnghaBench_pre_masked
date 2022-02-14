
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int s32 ;
typedef int s16 ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(s32 *VAR_1, s32 *VAR_2, s16 *VAR_3, u32 VAR_4) {
    u32 VAR_5;

    for(VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {

        *VAR_1 = (*VAR_1 * VAR_0) / 100;
        if (*VAR_1 > 0x7FFF) *VAR_3 = 0x7FFF;
        else if (*VAR_1 < -0x8000) *VAR_3 = -0x8000;
        else *VAR_3 = *VAR_1;
        VAR_1++;
        VAR_3++;

        *VAR_2 = (*VAR_2 * VAR_0) / 100;
        if (*VAR_2 > 0x7FFF) *VAR_3 = 0x7FFF;
        else if (*VAR_2 < -0x8000) *VAR_3 = -0x8000;
        else *VAR_3 = *VAR_2;
        VAR_2++;
        VAR_3++;
    }
}
