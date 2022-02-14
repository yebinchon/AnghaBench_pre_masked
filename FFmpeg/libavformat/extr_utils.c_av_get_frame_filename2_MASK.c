
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf1 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*,int,char*,int,int) ;
 int FUNC_3 (char*) ;

int FUNC_4(char *VAR_1, int VAR_2, const char *VAR_3, int VAR_4, int VAR_5)
{
    const char *VAR_6;
    char *VAR_7, VAR_8[20], VAR_9;
    int VAR_10, VAR_11, VAR_12;

    VAR_7 = VAR_1;
    VAR_6 = VAR_3;
    VAR_12 = 0;
    for (;;) {
        VAR_9 = *VAR_6++;
        if (VAR_9 == '\0')
            break;
        if (VAR_9 == '%') {
            do {
                VAR_10 = 0;
                while (FUNC_0(*VAR_6))
                    VAR_10 = VAR_10 * 10 + *VAR_6++ - '0';
                VAR_9 = *VAR_6++;
            } while (FUNC_0(VAR_9));

            switch (VAR_9) {
            case '%':
                goto addchar;
            case 'd':
                if (!(VAR_5 & VAR_0) && VAR_12)
                    goto fail;
                VAR_12 = 1;
                if (VAR_4 < 0)
                    VAR_10 += 1;
                FUNC_2(VAR_8, sizeof(VAR_8), "%0*d", VAR_10, VAR_4);
                VAR_11 = FUNC_3(VAR_8);
                if ((VAR_7 - VAR_1 + VAR_11) > VAR_2 - 1)
                    goto fail;
                FUNC_1(VAR_7, VAR_8, VAR_11);
                VAR_7 += VAR_11;
                break;
            default:
                goto fail;
            }
        } else {
addchar:
            if ((VAR_7 - VAR_1) < VAR_2 - 1)
                *VAR_7++ = VAR_9;
        }
    }
    if (!VAR_12)
        goto fail;
    *VAR_7 = '\0';
    return 0;
fail:
    *VAR_7 = '\0';
    return -1;
}
