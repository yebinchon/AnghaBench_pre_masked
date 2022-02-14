
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char) ;
 char* FUNC_1 (int) ;
 char FUNC_2 (char) ;
 int FUNC_3 (char const*) ;

char *FUNC_4(const char *VAR_0)
{
    int VAR_1 = 0, VAR_2 = 0, VAR_3 = 0;
    char VAR_4;
    char *VAR_5 = ((void*)0);

    if (!VAR_0)
        return ((void*)0);

    VAR_3 = FUNC_3(VAR_0) + 1;
    VAR_5 = FUNC_1(VAR_3);

    if (!VAR_5)
        return ((void*)0);

    while (VAR_1 < VAR_3) {
        VAR_4 = VAR_0[VAR_1++];

        if (VAR_4 == '%' && VAR_1 + 2 < VAR_3) {
            char VAR_6 = VAR_0[VAR_1++];
            char VAR_7 = VAR_0[VAR_1++];
            if (FUNC_0(VAR_6) && FUNC_0(VAR_7)) {
                VAR_6 = FUNC_2(VAR_6);
                VAR_7 = FUNC_2(VAR_7);

                if (VAR_6 <= '9')
                    VAR_6 = VAR_6 - '0';
                else
                    VAR_6 = VAR_6 - 'a' + 10;

                if (VAR_7 <= '9')
                    VAR_7 = VAR_7 - '0';
                else
                    VAR_7 = VAR_7 - 'a' + 10;

                VAR_5[VAR_2++] = 16 * VAR_6 + VAR_7;

            } else {
                VAR_5[VAR_2++] = VAR_4;
                VAR_5[VAR_2++] = VAR_6;
                VAR_5[VAR_2++] = VAR_7;
            }
        } else if (VAR_4 == '+') {
            VAR_5[VAR_2++] = ' ';
        } else {
            VAR_5[VAR_2++] = VAR_4;
        }

    }

    return VAR_5;
}
