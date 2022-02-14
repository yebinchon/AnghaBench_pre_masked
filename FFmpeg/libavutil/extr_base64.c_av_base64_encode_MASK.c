
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int) ;
 unsigned int FUNC_1 (int const*) ;
 int VAR_0 ;

char *FUNC_2(char *VAR_1, int VAR_2, const uint8_t *VAR_3, int VAR_4)
{
    static const char VAR_5[] =
        "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
    char *VAR_6, *VAR_7;
    unsigned VAR_8 = 0;
    int VAR_9 = 0;
    int VAR_10 = VAR_4;

    if (VAR_4 >= VAR_0 / 4 ||
        VAR_2 < FUNC_0(VAR_4))
        return ((void*)0);
    VAR_6 = VAR_7 = VAR_1;
    while (VAR_10 > 3) {
        VAR_8 = FUNC_1(VAR_3);
        VAR_3 += 3; VAR_10 -= 3;
        *VAR_7++ = VAR_5[ VAR_8>>26 ];
        *VAR_7++ = VAR_5[(VAR_8>>20) & 0x3F];
        *VAR_7++ = VAR_5[(VAR_8>>14) & 0x3F];
        *VAR_7++ = VAR_5[(VAR_8>>8 ) & 0x3F];
    }
    VAR_8 = 0;
    while (VAR_10) {
        VAR_8 = (VAR_8 << 8) + *VAR_3++;
        VAR_10--;
        VAR_9 += 8;
    }
    while (VAR_9 > 0) {
        *VAR_7++ = VAR_5[(VAR_8 << 6 >> VAR_9) & 0x3f];
        VAR_9 -= 6;
    }
    while ((VAR_7 - VAR_6) & 3)
        *VAR_7++ = '=';
    *VAR_7 = '\0';

    return VAR_6;
}
