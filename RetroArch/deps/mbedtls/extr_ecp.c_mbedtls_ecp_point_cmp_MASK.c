
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int Z; int Y; int X; } ;
typedef TYPE_1__ mbedtls_ecp_point ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *) ;

int FUNC_1( const mbedtls_ecp_point *VAR_1,
                           const mbedtls_ecp_point *VAR_2 )
{
    if( FUNC_0( &VAR_1->X, &VAR_2->X ) == 0 &&
        FUNC_0( &VAR_1->Y, &VAR_2->Y ) == 0 &&
        FUNC_0( &VAR_1->Z, &VAR_2->Z ) == 0 )
    {
        return( 0 );
    }

    return( VAR_0 );
}
