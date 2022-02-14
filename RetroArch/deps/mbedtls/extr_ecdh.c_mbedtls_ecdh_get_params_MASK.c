
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int d; int Q; int grp; } ;
typedef TYPE_1__ mbedtls_ecp_keypair ;
typedef scalar_t__ mbedtls_ecdh_side ;
struct TYPE_6__ {int d; int Q; int Qp; int grp; } ;
typedef TYPE_2__ mbedtls_ecdh_context ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;

int FUNC_3( mbedtls_ecdh_context *VAR_3, const mbedtls_ecp_keypair *VAR_4,
                     mbedtls_ecdh_side VAR_5 )
{
    int VAR_6;

    if( ( VAR_6 = FUNC_1( &VAR_3->grp, &VAR_4->grp ) ) != 0 )
        return( VAR_6 );


    if( VAR_5 == VAR_1 )
        return( FUNC_0( &VAR_3->Qp, &VAR_4->Q ) );


    if( VAR_5 != VAR_0 )
        return( VAR_2 );

    if( ( VAR_6 = FUNC_0( &VAR_3->Q, &VAR_4->Q ) ) != 0 ||
        ( VAR_6 = FUNC_2( &VAR_3->d, &VAR_4->d ) ) != 0 )
        return( VAR_6 );

    return( 0 );
}
