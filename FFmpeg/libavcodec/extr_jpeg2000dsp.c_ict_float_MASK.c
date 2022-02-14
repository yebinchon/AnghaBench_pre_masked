
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float* VAR_0 ;

__attribute__((used)) static void FUNC_0(void *VAR_1, void *VAR_2, void *VAR_3, int VAR_4)
{
    float *VAR_5 = VAR_1, *VAR_6 = VAR_2, *VAR_7 = VAR_3;
    float VAR_8, VAR_9, VAR_10;
    int VAR_11;

    for (VAR_11 = 0; VAR_11 < VAR_4; VAR_11++) {
        VAR_8 = *VAR_5 + (VAR_0[0] * *VAR_7);
        VAR_9 = *VAR_5 - (VAR_0[1] * *VAR_6)
                    - (VAR_0[2] * *VAR_7);
        VAR_10 = *VAR_5 + (VAR_0[3] * *VAR_6);
        *VAR_5++ = VAR_8;
        *VAR_6++ = VAR_9;
        *VAR_7++ = VAR_10;
    }
}
