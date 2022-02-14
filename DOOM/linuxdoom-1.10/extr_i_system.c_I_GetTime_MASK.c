
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timezone {int dummy; } ;
struct timeval {int tv_sec; int tv_usec; } ;


 int VAR_0 ;
 int FUNC_0 (struct timeval*,struct timezone*) ;

int FUNC_1 (void)
{
    struct timeval VAR_1;
    struct timezone VAR_2;
    int VAR_3;
    static int VAR_4=0;

    FUNC_0(&VAR_1, &VAR_2);
    if (!VAR_4)
 VAR_4 = VAR_1.tv_sec;
    VAR_3 = (VAR_1.tv_sec-VAR_4)*VAR_0 + VAR_1.tv_usec*VAR_0/1000000;
    return VAR_3;
}
