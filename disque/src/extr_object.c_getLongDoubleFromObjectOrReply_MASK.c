
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int robj ;
typedef int client ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (int *,long double*) ;

int FUNC_2(client *VAR_2, robj *VAR_3, long double *VAR_4, const char *VAR_5) {
    long double VAR_6;
    if (FUNC_1(VAR_3, &VAR_6) != VAR_1) {
        if (VAR_5 != ((void*)0)) {
            FUNC_0(VAR_2,(char*)VAR_5);
        } else {
            FUNC_0(VAR_2,"value is not a valid float");
        }
        return VAR_0;
    }
    *VAR_4 = VAR_6;
    return VAR_1;
}
