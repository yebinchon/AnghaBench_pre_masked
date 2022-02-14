
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {scalar_t__ tv_nsec; int tv_sec; } ;



__attribute__((used)) static void FUNC_0(struct timespec * VAR_0, struct timespec * VAR_1, long VAR_2)
{
    VAR_0->tv_nsec = VAR_2 + VAR_1->tv_nsec;
    if (VAR_0->tv_nsec < (VAR_1->tv_nsec)) {
        VAR_0->tv_sec += 1;
    }
}
