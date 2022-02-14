
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int _d; int z; int d; int Vf; int Vi; int Qp; int Q; int grp; } ;
typedef TYPE_1__ mbedtls_ecdh_context ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3( mbedtls_ecdh_context *VAR_0 )
{
    if( VAR_0 == ((void*)0) )
        return;

    FUNC_0( &VAR_0->grp );
    FUNC_1( &VAR_0->Q );
    FUNC_1( &VAR_0->Qp );
    FUNC_1( &VAR_0->Vi );
    FUNC_1( &VAR_0->Vf );
    FUNC_2( &VAR_0->d );
    FUNC_2( &VAR_0->z );
    FUNC_2( &VAR_0->_d );
}
