
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
typedef int int64 ;


 int FUNC_0 (struct timeval*,int ) ;
 int FUNC_1 (char*) ;

int64
FUNC_2(void)
{
    int VAR_0;
    struct timeval VAR_1;

    VAR_0 = FUNC_0(&VAR_1, 0);
    if (VAR_0 != 0) return FUNC_1("gettimeofday"), -1;

    return ((int64)VAR_1.tv_sec)*1000000000 + ((int64)VAR_1.tv_usec)*1000;
}
