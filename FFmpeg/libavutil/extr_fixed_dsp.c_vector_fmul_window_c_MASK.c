
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t int64_t ;
typedef size_t int32_t ;



__attribute__((used)) static void FUNC_0(int32_t *VAR_0, const int32_t *VAR_1,
                                       const int32_t *VAR_2, const int32_t *VAR_3,
                                       int VAR_4)
{
    int32_t VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;

    VAR_0 += VAR_4;
    VAR_3 += VAR_4;
    VAR_1+= VAR_4;

    for (VAR_9=-VAR_4, VAR_10=VAR_4-1; VAR_9<0; VAR_9++, VAR_10--) {
        VAR_5 = VAR_1[VAR_9];
        VAR_6 = VAR_2[VAR_10];
        VAR_7 = VAR_3[VAR_9];
        VAR_8 = VAR_3[VAR_10];
        VAR_0[VAR_9] = ((int64_t)VAR_5*VAR_8 - (int64_t)VAR_6*VAR_7 + 0x40000000) >> 31;
        VAR_0[VAR_10] = ((int64_t)VAR_5*VAR_7 + (int64_t)VAR_6*VAR_8 + 0x40000000) >> 31;
    }
}
