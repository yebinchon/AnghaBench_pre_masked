
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 () ;

__attribute__((used)) static inline int FUNC_2(intptr_t *VAR_0, intptr_t *VAR_1,
                                                 intptr_t VAR_2)
{
    int VAR_3;
    FUNC_0();
    if (*VAR_0 == *VAR_1) {
        VAR_3 = 1;
        *VAR_0 = VAR_2;
    } else {
        VAR_3 = 0;
        *VAR_1 = *VAR_0;
    }
    FUNC_1();
    return VAR_3;
}
