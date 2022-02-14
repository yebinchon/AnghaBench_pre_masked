
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int redisContext ;
typedef int redisAsyncContext ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (char const*) ;
 int FUNC_3 (int *) ;

redisAsyncContext *FUNC_4(const char *VAR_0) {
    redisContext *VAR_1;
    redisAsyncContext *VAR_2;

    VAR_1 = FUNC_2(VAR_0);
    if (VAR_1 == ((void*)0))
        return ((void*)0);

    VAR_2 = FUNC_1(VAR_1);
    if (VAR_2 == ((void*)0)) {
        FUNC_3(VAR_1);
        return ((void*)0);
    }

    FUNC_0(VAR_2);
    return VAR_2;
}
