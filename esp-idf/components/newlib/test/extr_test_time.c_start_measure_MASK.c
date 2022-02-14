
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_usec; scalar_t__ tv_sec; } ;
typedef int int64_t ;


 int FUNC_0 () ;
 int FUNC_1 (struct timeval*,int *) ;

__attribute__((used)) static void FUNC_2(int64_t* VAR_0, int64_t* VAR_1)
{
    struct timeval VAR_2;
    int64_t VAR_3, VAR_4;
    do {
        VAR_3 = FUNC_0();
        FUNC_1(&VAR_2, ((void*)0));
        VAR_4 = FUNC_0();
    } while (VAR_4 - VAR_3 > 40);
    *VAR_1 = VAR_4;
    *VAR_0 = (int64_t)VAR_2.tv_sec * 1000000L + VAR_2.tv_usec;
}
