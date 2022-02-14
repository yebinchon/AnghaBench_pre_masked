
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int Z; int Y; int X; } ;
typedef TYPE_1__ mbedtls_ecp_point ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;

int FUNC_2( mbedtls_ecp_point *VAR_0, const mbedtls_ecp_point *VAR_1 )
{
    int VAR_2;

    FUNC_0( FUNC_1( &VAR_0->X, &VAR_1->X ) );
    FUNC_0( FUNC_1( &VAR_0->Y, &VAR_1->Y ) );
    FUNC_0( FUNC_1( &VAR_0->Z, &VAR_1->Z ) );

cleanup:
    return( VAR_2 );
}
