
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int redisContext ;
typedef int redisAsyncContext ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (char const*,int,char const*) ;

redisAsyncContext *FUNC_3(const char *VAR_0, int VAR_1,
                                         const char *VAR_2) {
    redisContext *VAR_3 = FUNC_2(VAR_0,VAR_1,VAR_2);
    redisAsyncContext *VAR_4 = FUNC_1(VAR_3);
    FUNC_0(VAR_4);
    return VAR_4;
}
