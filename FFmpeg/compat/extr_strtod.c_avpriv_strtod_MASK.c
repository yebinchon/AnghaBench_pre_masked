
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double VAR_0 ;
 double VAR_1 ;
 scalar_t__ FUNC_0 (char const) ;
 int FUNC_1 (char const*,char*,int) ;
 char* FUNC_2 (char const*) ;
 double FUNC_3 (char const*,char**) ;
 double FUNC_4 (char const*,char**,int) ;

double FUNC_5(const char *VAR_2, char **VAR_3)
{
    const char *VAR_4;
    double VAR_5;


    while (FUNC_0(*VAR_2))
        VAR_2++;

    if (!FUNC_1(VAR_2, "infinity", 8)) {
        VAR_4 = VAR_2 + 8;
        VAR_5 = VAR_0;
    } else if (!FUNC_1(VAR_2, "inf", 3)) {
        VAR_4 = VAR_2 + 3;
        VAR_5 = VAR_0;
    } else if (!FUNC_1(VAR_2, "+infinity", 9)) {
        VAR_4 = VAR_2 + 9;
        VAR_5 = VAR_0;
    } else if (!FUNC_1(VAR_2, "+inf", 4)) {
        VAR_4 = VAR_2 + 4;
        VAR_5 = VAR_0;
    } else if (!FUNC_1(VAR_2, "-infinity", 9)) {
        VAR_4 = VAR_2 + 9;
        VAR_5 = -VAR_0;
    } else if (!FUNC_1(VAR_2, "-inf", 4)) {
        VAR_4 = VAR_2 + 4;
        VAR_5 = -VAR_0;
    } else if (!FUNC_1(VAR_2, "nan", 3)) {
        VAR_4 = FUNC_2(VAR_2 + 3);
        VAR_5 = VAR_1;
    } else if (!FUNC_1(VAR_2, "+nan", 4) ||
               !FUNC_1(VAR_2, "-nan", 4)) {
        VAR_4 = FUNC_2(VAR_2 + 4);
        VAR_5 = VAR_1;
    } else if (!FUNC_1(VAR_2, "0x", 2) ||
               !FUNC_1(VAR_2, "-0x", 3) ||
               !FUNC_1(VAR_2, "+0x", 3)) {


        VAR_5 = FUNC_4(VAR_2, (char **)&VAR_4, 16);
    } else {
        VAR_5 = FUNC_3(VAR_2, (char **)&VAR_4);
    }

    if (VAR_3)
        *VAR_3 = (char *)VAR_4;

    return VAR_5;
}
