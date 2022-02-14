
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HTTPContext ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(HTTPContext *VAR_0, char *VAR_1, int VAR_2)
{
    int VAR_3;
    char *VAR_4;

    VAR_4 = VAR_1;
    for (;;) {
        VAR_3 = FUNC_0(VAR_0);
        if (VAR_3 < 0)
            return VAR_3;
        if (VAR_3 == '\n') {

            if (VAR_4 > VAR_1 && VAR_4[-1] == '\r')
                VAR_4--;
            *VAR_4 = '\0';

            return 0;
        } else {
            if ((VAR_4 - VAR_1) < VAR_2 - 1)
                *VAR_4++ = VAR_3;
        }
    }
}
