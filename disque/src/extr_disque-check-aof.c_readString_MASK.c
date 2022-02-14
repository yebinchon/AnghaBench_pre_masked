
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (long) ;
 int FUNC_2 (int *,char*,long) ;
 int FUNC_3 (int *,char,long*) ;

int FUNC_4(FILE *VAR_0, char** VAR_1) {
    long VAR_2;
    *VAR_1 = ((void*)0);
    if (!FUNC_3(VAR_0,'$',&VAR_2)) {
        return 0;
    }


    VAR_2 += 2;
    *VAR_1 = (char*)FUNC_1(VAR_2);
    if (!FUNC_2(VAR_0,*VAR_1,VAR_2)) {
        return 0;
    }
    if (!FUNC_0(*VAR_1+VAR_2-2)) {
        return 0;
    }
    (*VAR_1)[VAR_2-2] = '\0';
    return 1;
}
