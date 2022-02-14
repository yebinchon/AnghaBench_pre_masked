
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ year; scalar_t__ mon; scalar_t__ day; scalar_t__ hour; scalar_t__ min; scalar_t__ sec; } ;
typedef TYPE_1__ mbedtls_x509_time ;



__attribute__((used)) static int FUNC_0( const mbedtls_x509_time *VAR_0, const mbedtls_x509_time *VAR_1 )
{
    if( VAR_0->year > VAR_1->year )
        return( 1 );

    if( VAR_0->year == VAR_1->year &&
        VAR_0->mon > VAR_1->mon )
        return( 1 );

    if( VAR_0->year == VAR_1->year &&
        VAR_0->mon == VAR_1->mon &&
        VAR_0->day > VAR_1->day )
        return( 1 );

    if( VAR_0->year == VAR_1->year &&
        VAR_0->mon == VAR_1->mon &&
        VAR_0->day == VAR_1->day &&
        VAR_0->hour > VAR_1->hour )
        return( 1 );

    if( VAR_0->year == VAR_1->year &&
        VAR_0->mon == VAR_1->mon &&
        VAR_0->day == VAR_1->day &&
        VAR_0->hour == VAR_1->hour &&
        VAR_0->min > VAR_1->min )
        return( 1 );

    if( VAR_0->year == VAR_1->year &&
        VAR_0->mon == VAR_1->mon &&
        VAR_0->day == VAR_1->day &&
        VAR_0->hour == VAR_1->hour &&
        VAR_0->min == VAR_1->min &&
        VAR_0->sec > VAR_1->sec )
        return( 1 );

    return( 0 );
}
