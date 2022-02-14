
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*,int) ;
 int FUNC_1 (char*,char const*,int) ;
 scalar_t__ FUNC_2 (char const*,char*,int *) ;
 char* FUNC_3 (char*,char) ;
 int FUNC_4 (char*,char*) ;
 char* FUNC_5 (char*,char) ;
 char* FUNC_6 (char const*,char*) ;

void FUNC_7(char *VAR_0, int VAR_1, const char *VAR_2,
                          const char *VAR_3)
{
    char *VAR_4, *VAR_5;

    if (VAR_2 && FUNC_6(VAR_2, "://") && VAR_3[0] == '/') {
        if (VAR_2 != VAR_0)
            FUNC_1(VAR_0, VAR_2, VAR_1);
        VAR_4 = FUNC_6(VAR_0, "://");
        if (VAR_4) {

            if (VAR_3[1] == '/') {
                VAR_4[1] = '\0';
            } else {

                VAR_4 += 3;
                VAR_4 = FUNC_3(VAR_4, '/');
                if (VAR_4)
                    *VAR_4 = '\0';
            }
        }
        FUNC_0(VAR_0, VAR_3, VAR_1);
        return;
    }

    if (!VAR_2 || FUNC_6(VAR_3, "://") || VAR_3[0] == '/') {
        FUNC_1(VAR_0, VAR_3, VAR_1);
        return;
    }
    if (VAR_2 != VAR_0)
        FUNC_1(VAR_0, VAR_2, VAR_1);


    VAR_5 = FUNC_3(VAR_0, '?');
    if (VAR_5)
        *VAR_5 = '\0';


    if (VAR_3[0] == '?') {
        FUNC_0(VAR_0, VAR_3, VAR_1);
        return;
    }


    VAR_4 = FUNC_5(VAR_0, '/');
    if (VAR_4)
        VAR_4[1] = '\0';
    else
        VAR_0[0] = '\0';
    while (FUNC_2(VAR_3, "../", ((void*)0)) && VAR_4) {

        VAR_4[0] = '\0';
        VAR_4 = FUNC_5(VAR_0, '/');

        if (!FUNC_4(VAR_4 ? &VAR_4[1] : VAR_0, "..")) {

            FUNC_0(VAR_0, "/", VAR_1);
            break;
        }

        if (VAR_4)
            VAR_4[1] = '\0';
        else
            VAR_0[0] = '\0';
        VAR_3 += 3;
    }
    FUNC_0(VAR_0, VAR_3, VAR_1);
}
