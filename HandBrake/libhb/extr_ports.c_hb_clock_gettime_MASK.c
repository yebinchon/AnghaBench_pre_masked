
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_usec; int tv_sec; } ;
struct timespec {int tv_nsec; int tv_sec; } ;


 int FUNC_0 (struct timeval*,int *) ;

void FUNC_1( struct timespec *VAR_0 )
{
    struct timeval VAR_1;

    FUNC_0( &VAR_1, ((void*)0) );
    VAR_0->tv_sec = VAR_1.tv_sec;
    VAR_0->tv_nsec = VAR_1.tv_usec * 1000;
}
