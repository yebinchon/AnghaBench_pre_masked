
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int robj ;
typedef int client ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 long long VAR_2 ;
 long long VAR_3 ;
 int FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (int *,int *,long long*,char const*) ;

int FUNC_2(client *VAR_4, robj *VAR_5, long *VAR_6, const char *VAR_7) {
    long long VAR_8;

    if (FUNC_1(VAR_4, VAR_5, &VAR_8, VAR_7) != VAR_1) return VAR_0;
    if (VAR_8 < VAR_3 || VAR_8 > VAR_2) {
        if (VAR_7 != ((void*)0)) {
            FUNC_0(VAR_4,(char*)VAR_7);
        } else {
            FUNC_0(VAR_4,"value is out of range");
        }
        return VAR_0;
    }
    *VAR_6 = VAR_8;
    return VAR_1;
}
