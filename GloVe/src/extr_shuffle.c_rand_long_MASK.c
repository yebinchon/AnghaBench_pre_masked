
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 long VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 () ;

__attribute__((used)) static long FUNC_1(long VAR_2) {
    long VAR_3 = VAR_0 - VAR_0 % VAR_2;
    long VAR_4;
    do {
        VAR_4 = ((long)VAR_1 + 1) * (long)FUNC_0() + (long)FUNC_0();
    } while (VAR_4 >= VAR_3);
    return VAR_4 % VAR_2;
}
