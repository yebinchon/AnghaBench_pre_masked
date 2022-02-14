
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Z; int Y; int X; } ;
typedef TYPE_1__ mbedtls_ecp_point ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int) ;

int FUNC_2( mbedtls_ecp_point *VAR_0 )
{
    int VAR_1;

    FUNC_0( FUNC_1( &VAR_0->X , 1 ) );
    FUNC_0( FUNC_1( &VAR_0->Y , 1 ) );
    FUNC_0( FUNC_1( &VAR_0->Z , 0 ) );

cleanup:
    return( VAR_1 );
}
