
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct tm {int tm_sec; int tm_min; int tm_hour; int tm_mday; scalar_t__ tm_mon; scalar_t__ tm_year; } ;
struct TYPE_3__ {int sec; int min; int hour; int day; scalar_t__ mon; scalar_t__ year; } ;
typedef TYPE_1__ mbedtls_x509_time ;
typedef int mbedtls_time_t ;


 int VAR_0 ;
 struct tm* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4( mbedtls_x509_time *VAR_2 )
{
    struct tm *VAR_3;
    mbedtls_time_t VAR_4;
    int VAR_5 = 0;






    VAR_4 = FUNC_3( ((void*)0) );
    VAR_3 = FUNC_0( &VAR_4 );

    if( VAR_3 == ((void*)0) )
        VAR_5 = -1;
    else
    {
        VAR_2->year = VAR_3->tm_year + 1900;
        VAR_2->mon = VAR_3->tm_mon + 1;
        VAR_2->day = VAR_3->tm_mday;
        VAR_2->hour = VAR_3->tm_hour;
        VAR_2->min = VAR_3->tm_min;
        VAR_2->sec = VAR_3->tm_sec;
    }






    return( VAR_5 );
}
