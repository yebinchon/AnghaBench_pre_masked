
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timeval {int tv_sec; int tv_usec; } ;
struct mbedtls_timing_hr_time {int dummy; } ;
struct TYPE_2__ {int tv_sec; int tv_usec; } ;
struct _hr_time {TYPE_1__ start; } ;


 int FUNC_0 (struct timeval*,int *) ;

unsigned long FUNC_1( struct mbedtls_timing_hr_time *VAR_0, int VAR_1 )
{
    unsigned long VAR_2;
    struct timeval VAR_3;
    struct _hr_time *VAR_4 = (struct _hr_time *) VAR_0;

    FUNC_0( &VAR_3, ((void*)0) );

    if( VAR_1 )
    {
        VAR_4->start.tv_sec = VAR_3.tv_sec;
        VAR_4->start.tv_usec = VAR_3.tv_usec;
        return( 0 );
    }

    VAR_2 = ( VAR_3.tv_sec - VAR_4->start.tv_sec ) * 1000
          + ( VAR_3.tv_usec - VAR_4->start.tv_usec ) / 1000;

    return( VAR_2 );
}
