
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int year; int hour; int min; int sec; int mon; int day; } ;
typedef TYPE_1__ mbedtls_x509_time ;


 int FUNC_0 (int,int,int) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(const mbedtls_x509_time *VAR_1)
{
    int VAR_2 = VAR_0;

    FUNC_0( 0, 9999, VAR_1->year );
    FUNC_0( 0, 23, VAR_1->hour );
    FUNC_0( 0, 59, VAR_1->min );
    FUNC_0( 0, 59, VAR_1->sec );

    switch( VAR_1->mon )
    {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            FUNC_0( 1, 31, VAR_1->day );
            break;
        case 4: case 6: case 9: case 11:
            FUNC_0( 1, 30, VAR_1->day );
            break;
        case 2:
            FUNC_0( 1, 28 + (VAR_1->year % 4 == 0), VAR_1->day );
            break;
        default:
            return( VAR_2 );
    }

    return( 0 );
}
