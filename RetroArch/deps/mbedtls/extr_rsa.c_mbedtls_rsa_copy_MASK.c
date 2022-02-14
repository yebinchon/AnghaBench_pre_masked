
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int hash_id; int padding; int Vf; int Vi; int RQ; int RP; int RN; int QP; int DQ; int DP; int Q; int P; int D; int E; int N; int len; int ver; } ;
typedef TYPE_1__ mbedtls_rsa_context ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (TYPE_1__*) ;

int FUNC_3( mbedtls_rsa_context *VAR_0, const mbedtls_rsa_context *VAR_1 )
{
    int VAR_2;

    VAR_0->ver = VAR_1->ver;
    VAR_0->len = VAR_1->len;

    FUNC_0( FUNC_1( &VAR_0->N, &VAR_1->N ) );
    FUNC_0( FUNC_1( &VAR_0->E, &VAR_1->E ) );

    FUNC_0( FUNC_1( &VAR_0->D, &VAR_1->D ) );
    FUNC_0( FUNC_1( &VAR_0->P, &VAR_1->P ) );
    FUNC_0( FUNC_1( &VAR_0->Q, &VAR_1->Q ) );
    FUNC_0( FUNC_1( &VAR_0->DP, &VAR_1->DP ) );
    FUNC_0( FUNC_1( &VAR_0->DQ, &VAR_1->DQ ) );
    FUNC_0( FUNC_1( &VAR_0->QP, &VAR_1->QP ) );

    FUNC_0( FUNC_1( &VAR_0->RN, &VAR_1->RN ) );
    FUNC_0( FUNC_1( &VAR_0->RP, &VAR_1->RP ) );
    FUNC_0( FUNC_1( &VAR_0->RQ, &VAR_1->RQ ) );

    FUNC_0( FUNC_1( &VAR_0->Vi, &VAR_1->Vi ) );
    FUNC_0( FUNC_1( &VAR_0->Vf, &VAR_1->Vf ) );

    VAR_0->padding = VAR_1->padding;
    VAR_0->hash_id = VAR_1->hash_id;

cleanup:
    if( VAR_2 != 0 )
        FUNC_2( VAR_0 );

    return( VAR_2 );
}
