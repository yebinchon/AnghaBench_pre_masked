
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int P; int G; int X; int GX; int GY; int K; int RP; int Vi; int Vf; int pX; } ;
typedef TYPE_1__ mbedtls_dhm_context ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int) ;

void FUNC_2( mbedtls_dhm_context *VAR_0 )
{
    FUNC_0( &VAR_0->pX); FUNC_0( &VAR_0->Vf ); FUNC_0( &VAR_0->Vi );
    FUNC_0( &VAR_0->RP ); FUNC_0( &VAR_0->K ); FUNC_0( &VAR_0->GY );
    FUNC_0( &VAR_0->GX ); FUNC_0( &VAR_0->X ); FUNC_0( &VAR_0->G );
    FUNC_0( &VAR_0->P );

    FUNC_1( VAR_0, sizeof( mbedtls_dhm_context ) );
}
