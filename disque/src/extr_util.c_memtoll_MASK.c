
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 long long VAR_0 ;
 scalar_t__ FUNC_0 (char const) ;
 int FUNC_1 (char*,char const*,unsigned int) ;
 int FUNC_2 (char const*,char*) ;
 long long FUNC_3 (char*,int *,int) ;

long long FUNC_4(const char *VAR_1, int *VAR_2) {
    const char *VAR_3;
    char VAR_4[128];
    long VAR_5;
    long long VAR_6;
    unsigned int VAR_7;

    if (VAR_2) *VAR_2 = 0;

    VAR_3 = VAR_1;
    if (*VAR_3 == '-') VAR_3++;
    while(*VAR_3 && FUNC_0(*VAR_3)) VAR_3++;
    if (*VAR_3 == '\0' || !FUNC_2(VAR_3,"b")) {
        VAR_5 = 1;
    } else if (!FUNC_2(VAR_3,"k")) {
        VAR_5 = 1000;
    } else if (!FUNC_2(VAR_3,"kb")) {
        VAR_5 = 1024;
    } else if (!FUNC_2(VAR_3,"m")) {
        VAR_5 = 1000*1000;
    } else if (!FUNC_2(VAR_3,"mb")) {
        VAR_5 = 1024*1024;
    } else if (!FUNC_2(VAR_3,"g")) {
        VAR_5 = 1000L*1000*1000;
    } else if (!FUNC_2(VAR_3,"gb")) {
        VAR_5 = 1024L*1024*1024;
    } else {
        if (VAR_2) *VAR_2 = 1;
        VAR_5 = 1;
    }
    VAR_7 = VAR_3-VAR_1;
    if (VAR_7 >= sizeof(VAR_4)) {
        if (VAR_2) *VAR_2 = 1;
        return VAR_0;
    }
    FUNC_1(VAR_4,VAR_1,VAR_7);
    VAR_4[VAR_7] = '\0';
    VAR_6 = FUNC_3(VAR_4,((void*)0),10);
    return VAR_6*VAR_5;
}
