
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct timezone {int dummy; } ;
struct timeval {int tv_sec; int tv_usec; } ;


 scalar_t__ FUNC_0 (struct timeval*,struct timezone*) ;

uint32_t FUNC_1(void)
{
    struct timeval VAR_0;
    struct timezone VAR_1;
    if (FUNC_0(&VAR_0, &VAR_1) == 0) {
        return (VAR_0.tv_sec * 1000) + (VAR_0.tv_usec / 1000);
    }
    return 0;
}
