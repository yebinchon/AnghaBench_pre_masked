
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int year; int mon; int day; int hour; int min; int sec; } ;
typedef TYPE_1__ mbedtls_x509_time ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (unsigned char**,int,int*) ;

__attribute__((used)) static int FUNC_3( unsigned char **VAR_1, size_t VAR_2, size_t VAR_3,
        mbedtls_x509_time *VAR_4 )
{
    int VAR_5;




    if ( VAR_2 < VAR_3 + 8 )
        return ( VAR_0 );
    VAR_2 -= VAR_3 + 8;




    FUNC_0( FUNC_2( VAR_1, VAR_3, &VAR_4->year ) );
    if ( 2 == VAR_3 )
    {
        if ( VAR_4->year < 50 )
            VAR_4->year += 100;

        VAR_4->year += 1900;
    }

    FUNC_0( FUNC_2( VAR_1, 2, &VAR_4->mon ) );
    FUNC_0( FUNC_2( VAR_1, 2, &VAR_4->day ) );
    FUNC_0( FUNC_2( VAR_1, 2, &VAR_4->hour ) );
    FUNC_0( FUNC_2( VAR_1, 2, &VAR_4->min ) );




    if ( VAR_2 >= 2 )
    {
        FUNC_0( FUNC_2( VAR_1, 2, &VAR_4->sec ) );
        VAR_2 -= 2;
    }
    else
        return ( VAR_0 );




    if ( 1 == VAR_2 && 'Z' == **VAR_1 )
    {
        (*VAR_1)++;
        VAR_2--;
    }




    if ( 0 != VAR_2 )
        return ( VAR_0 );

    FUNC_0( FUNC_1( VAR_4 ) );

    return ( 0 );
}
