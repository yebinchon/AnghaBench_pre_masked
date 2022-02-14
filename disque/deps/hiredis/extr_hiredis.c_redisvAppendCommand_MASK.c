
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
typedef int redisContext ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,int ,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char**,char const*,int ) ;

int FUNC_4(redisContext *VAR_3, const char *VAR_4, va_list VAR_5) {
    char *VAR_6;
    int VAR_7;

    VAR_7 = FUNC_3(&VAR_6,VAR_4,VAR_5);
    if (VAR_7 == -1) {
        FUNC_1(VAR_3,VAR_1,"Out of memory");
        return VAR_0;
    }

    if (FUNC_0(VAR_3,VAR_6,VAR_7) != VAR_2) {
        FUNC_2(VAR_6);
        return VAR_0;
    }

    FUNC_2(VAR_6);
    return VAR_2;
}
