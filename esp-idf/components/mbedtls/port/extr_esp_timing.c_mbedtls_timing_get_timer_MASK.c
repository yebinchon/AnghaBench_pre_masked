
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {unsigned long tv_sec; int tv_usec; } ;
struct mbedtls_timing_hr_time {int dummy; } ;
struct _hr_time {struct timeval start; } ;


 int FUNC_0 (struct timeval*,int *) ;

unsigned long FUNC_1( struct mbedtls_timing_hr_time *VAR_0, int VAR_1 )
{
    struct _hr_time *VAR_2 = (struct _hr_time *) VAR_0;

    if( VAR_1 )
    {
        FUNC_0( &VAR_2->start, ((void*)0) );
        return( 0 );
    }
    else
    {
        unsigned long VAR_3;
        struct timeval VAR_4;
        FUNC_0( &VAR_4, ((void*)0) );
        VAR_3 = ( VAR_4.tv_sec - VAR_2->start.tv_sec ) * 1000ul
              + ( VAR_4.tv_usec - VAR_2->start.tv_usec ) / 1000;
        return( VAR_3 );
    }
}
