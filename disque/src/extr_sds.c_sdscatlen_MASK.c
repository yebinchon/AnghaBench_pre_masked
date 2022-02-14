
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* sds ;


 int FUNC_0 (char*,void const*,size_t) ;
 char* FUNC_1 (char*,size_t) ;
 size_t FUNC_2 (char*) ;
 int FUNC_3 (char*,size_t) ;

sds FUNC_4(sds VAR_0, const void *VAR_1, size_t VAR_2) {
    size_t VAR_3 = FUNC_2(VAR_0);

    VAR_0 = FUNC_1(VAR_0,VAR_2);
    if (VAR_0 == ((void*)0)) return ((void*)0);
    FUNC_0(VAR_0+VAR_3, VAR_1, VAR_2);
    FUNC_3(VAR_0, VAR_3+VAR_2);
    VAR_0[VAR_3+VAR_2] = '\0';
    return VAR_0;
}
