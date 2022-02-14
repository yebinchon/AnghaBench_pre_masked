
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8_t ;
typedef int str ;


 size_t FUNC_0 (size_t,int) ;

const char *FUNC_1(const void *VAR_0, size_t VAR_1)
{
    static const char VAR_2[] = "0123456789abcdef";
    static char VAR_3[129];
    const u8_t *VAR_4 = VAR_0;
    int VAR_5;

    VAR_1 = FUNC_0(VAR_1, (sizeof(VAR_3) - 1) / 2);

    for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
        VAR_3[VAR_5 * 2] = VAR_2[VAR_4[VAR_5] >> 4];
        VAR_3[VAR_5 * 2 + 1] = VAR_2[VAR_4[VAR_5] & 0xf];
    }

    VAR_3[VAR_5 * 2] = '\0';

    return VAR_3;
}
