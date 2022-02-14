
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;



__attribute__((used)) static void FUNC_0(void *VAR_0, void *VAR_1, void *VAR_2, int VAR_3)
{
    int32_t *VAR_4 = VAR_0, *VAR_5 = VAR_1, *VAR_6 = VAR_2;
    int32_t VAR_7, VAR_8, VAR_9;
    int VAR_10;

    for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++) {
        VAR_8 = *VAR_4 - ((*VAR_6 + *VAR_5) >> 2);
        VAR_7 = VAR_8 + *VAR_6;
        VAR_9 = VAR_8 + *VAR_5;
        *VAR_4++ = VAR_7;
        *VAR_5++ = VAR_8;
        *VAR_6++ = VAR_9;
    }
}
