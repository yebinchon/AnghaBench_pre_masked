
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Z; int Y; int X; } ;
typedef TYPE_1__ mbedtls_ecp_point ;


 int FUNC_0 (int *) ;

void FUNC_1( mbedtls_ecp_point *VAR_0 )
{
    if( VAR_0 == ((void*)0) )
        return;

    FUNC_0( &VAR_0->X );
    FUNC_0( &VAR_0->Y );
    FUNC_0( &VAR_0->Z );
}
