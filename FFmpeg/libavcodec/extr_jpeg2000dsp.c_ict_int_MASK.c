
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int int32_t ;


 scalar_t__* VAR_0 ;

__attribute__((used)) static void FUNC_0(void *VAR_1, void *VAR_2, void *VAR_3, int VAR_4)
{
    int32_t *VAR_5 = VAR_1, *VAR_6 = VAR_2, *VAR_7 = VAR_3;
    int32_t VAR_8, VAR_9, VAR_10;
    int VAR_11;

    for (VAR_11 = 0; VAR_11 < VAR_4; VAR_11++) {
        VAR_8 = *VAR_5 + *VAR_7 + ((int)((26345U * *VAR_7) + (1 << 15)) >> 16);
        VAR_9 = *VAR_5 - ((int)(((unsigned)VAR_0[1] * *VAR_6) + (1 << 15)) >> 16)
                   - ((int)(((unsigned)VAR_0[2] * *VAR_7) + (1 << 15)) >> 16);
        VAR_10 = *VAR_5 + (2 * *VAR_6) + ((int)((-14942U * *VAR_6) + (1 << 15)) >> 16);
        *VAR_5++ = VAR_8;
        *VAR_6++ = VAR_9;
        *VAR_7++ = VAR_10;
    }
}
