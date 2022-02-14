
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef int u_int ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const) ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static boolean_t
FUNC_4(const char *VAR_3, const u_long VAR_4)
{
    boolean_t VAR_5 = VAR_0;
    const char *VAR_6 = ((void*)0);
    char VAR_7[VAR_2];
    u_int VAR_8 = 0;

    VAR_8 = 0;
    for (VAR_6 = VAR_3; VAR_6 < VAR_3 + VAR_4; ++VAR_6) {
        if (FUNC_1(*VAR_6) && !VAR_8) continue;





        if (VAR_8 == VAR_2) goto finish;

        VAR_7[VAR_8++] = *VAR_6;
        if (FUNC_0(VAR_6)) {
            if (!VAR_8) continue;

            VAR_7[VAR_8] = '\0';

            if (!FUNC_2(VAR_7) &&
                !FUNC_3(VAR_7))
            {
                goto finish;
            }

            VAR_8 = 0;
        }
    }

    VAR_5 = VAR_1;
finish:
    return VAR_5;
}
