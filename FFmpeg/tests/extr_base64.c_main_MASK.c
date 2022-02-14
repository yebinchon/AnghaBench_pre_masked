
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (char) ;

int FUNC_3(void)
{
    static const char VAR_1[] =
        "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
    unsigned VAR_2 = 0;
    int VAR_3 = 0;
    int VAR_4 = 0;
    int VAR_5;
    while ((VAR_5 = FUNC_0()) != VAR_0) {
        VAR_2 = (VAR_2 << 8) + VAR_5;
        VAR_3 += 8;
        while (VAR_3 > 6)
            do { FUNC_2(VAR_1[(VAR_2 << 6 >> VAR_3) & 0x3f]); VAR_4++; VAR_3 -= 6; } while (0);
    }
    while (VAR_3 > 0)
        do { FUNC_2(VAR_1[(VAR_2 << 6 >> VAR_3) & 0x3f]); VAR_4++; VAR_3 -= 6; } while (0);
    while (VAR_4++ & 3)
        FUNC_2('=');
    FUNC_2('\n');

    return 0;
}
