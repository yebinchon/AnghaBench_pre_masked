
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static boolean_t
FUNC_0(const char *VAR_4)
{
    boolean_t VAR_5 = VAR_0;
    u_int VAR_6 = 0;

    for (VAR_6 = 0; VAR_6 < VAR_2 - 1; ++VAR_6) {
        if (VAR_4[VAR_6] < '0' || VAR_4[VAR_6] > '9') goto finish;
    }

    if (VAR_4[VAR_6] != '-') goto finish;

    for (VAR_6 = VAR_2; VAR_6 < VAR_3 - 1; ++VAR_6) {
        if (VAR_4[VAR_6] < '0' || VAR_4[VAR_6] > '9') goto finish;
    }

    if (VAR_4[VAR_6] != '\0') goto finish;

    VAR_5 = VAR_1;
finish:
    return VAR_5;
}
