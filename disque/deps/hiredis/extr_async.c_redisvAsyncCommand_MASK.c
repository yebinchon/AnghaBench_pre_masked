
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
typedef int redisCallbackFn ;
typedef int redisAsyncContext ;


 int FUNC_0 (int *,int *,void*,char*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char**,char const*,int ) ;

int FUNC_3(redisAsyncContext *VAR_0, redisCallbackFn *VAR_1, void *VAR_2, const char *VAR_3, va_list VAR_4) {
    char *VAR_5;
    int VAR_6;
    int VAR_7;
    VAR_6 = FUNC_2(&VAR_5,VAR_3,VAR_4);
    VAR_7 = FUNC_0(VAR_0,VAR_1,VAR_2,VAR_5,VAR_6);
    FUNC_1(VAR_5);
    return VAR_7;
}
