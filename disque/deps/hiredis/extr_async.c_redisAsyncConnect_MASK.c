
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int redisContext ;
typedef int redisAsyncContext ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (char const*,int) ;
 int FUNC_3 (int *) ;

redisAsyncContext *FUNC_4(const char *VAR_0, int VAR_1) {
    redisContext *VAR_2;
    redisAsyncContext *VAR_3;

    VAR_2 = FUNC_2(VAR_0,VAR_1);
    if (VAR_2 == ((void*)0))
        return ((void*)0);

    VAR_3 = FUNC_1(VAR_2);
    if (VAR_3 == ((void*)0)) {
        FUNC_3(VAR_2);
        return ((void*)0);
    }

    FUNC_0(VAR_3);
    return VAR_3;
}
