
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (double) ;
 scalar_t__ FUNC_1 (double) ;
 size_t FUNC_2 (char*,size_t,long long) ;
 size_t FUNC_3 (char*,size_t,char*,...) ;

int FUNC_4(char *VAR_0, size_t VAR_1, double VAR_2) {
    if (FUNC_1(VAR_2)) {
        VAR_1 = FUNC_3(VAR_0,VAR_1,"nan");
    } else if (FUNC_0(VAR_2)) {
        if (VAR_2 < 0)
            VAR_1 = FUNC_3(VAR_0,VAR_1,"-inf");
        else
            VAR_1 = FUNC_3(VAR_0,VAR_1,"inf");
    } else if (VAR_2 == 0) {

        if (1.0/VAR_2 < 0)
            VAR_1 = FUNC_3(VAR_0,VAR_1,"-0");
        else
            VAR_1 = FUNC_3(VAR_0,VAR_1,"0");
    } else {
            VAR_1 = FUNC_3(VAR_0,VAR_1,"%.17g",VAR_2);
    }

    return VAR_1;
}
