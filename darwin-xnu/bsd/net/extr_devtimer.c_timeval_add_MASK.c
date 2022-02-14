
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static __inline__ void
FUNC_0(struct timeval VAR_1, struct timeval VAR_2,
     struct timeval * VAR_3)
{
    VAR_3->tv_sec = VAR_1 + VAR_2;
    VAR_3->tv_usec = VAR_1 + VAR_2;
    if (VAR_3->tv_usec > VAR_0) {
 VAR_3->tv_usec -= VAR_0;
 VAR_3->tv_sec++;
    }
    return;
}
