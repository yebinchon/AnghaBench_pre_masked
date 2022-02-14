
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int robj ;
typedef int buf ;


 int * FUNC_0 (char*,int) ;
 int FUNC_1 (char*,int,char*,long double) ;
 int * FUNC_2 (char*,char) ;

robj *FUNC_3(long double VAR_0) {
    char VAR_1[256];
    int VAR_2;






    VAR_2 = FUNC_1(VAR_1,sizeof(VAR_1),"%.17Lf", VAR_0);

    if (FUNC_2(VAR_1,'.') != ((void*)0)) {
        char *VAR_3 = VAR_1+VAR_2-1;
        while(*VAR_3 == '0') {
            VAR_3--;
            VAR_2--;
        }
        if (*VAR_3 == '.') VAR_2--;
    }
    return FUNC_0(VAR_1,VAR_2);
}
