
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct timespec {int tv_sec; int tv_nsec; } ;


 struct timespec FUNC_0 () ;

u32 FUNC_1(void)
{
    struct timespec VAR_0;

    VAR_0 = FUNC_0();
    return (VAR_0.tv_sec * 10000) + (VAR_0.tv_nsec / 100000);
}
