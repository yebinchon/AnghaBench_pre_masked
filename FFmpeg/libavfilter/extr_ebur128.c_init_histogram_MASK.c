
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void** VAR_0 ;
 void** VAR_1 ;
 void* FUNC_0 (double,double) ;

__attribute__((used)) static inline void FUNC_1(void)
{
    int VAR_2;

    VAR_1[0] = FUNC_0(10.0, (-70.0 + 0.691) / 10.0);
    for (VAR_2 = 0; VAR_2 < 1000; ++VAR_2) {
        VAR_0[VAR_2] =
            FUNC_0(10.0, ((double) VAR_2 / 10.0 - 69.95 + 0.691) / 10.0);
    }
    for (VAR_2 = 1; VAR_2 < 1001; ++VAR_2) {
        VAR_1[VAR_2] =
            FUNC_0(10.0, ((double) VAR_2 / 10.0 - 70.0 + 0.691) / 10.0);
    }
}
