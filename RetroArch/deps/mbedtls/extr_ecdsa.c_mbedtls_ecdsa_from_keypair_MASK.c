
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int Q; int d; int grp; } ;
typedef TYPE_1__ mbedtls_ecp_keypair ;
struct TYPE_7__ {int Q; int d; int grp; } ;
typedef TYPE_2__ mbedtls_ecdsa_context ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;

int FUNC_4( mbedtls_ecdsa_context *VAR_0, const mbedtls_ecp_keypair *VAR_1 )
{
    int VAR_2;

    if( ( VAR_2 = FUNC_2( &VAR_0->grp, &VAR_1->grp ) ) != 0 ||
        ( VAR_2 = FUNC_3( &VAR_0->d, &VAR_1->d ) ) != 0 ||
        ( VAR_2 = FUNC_1( &VAR_0->Q, &VAR_1->Q ) ) != 0 )
    {
        FUNC_0( VAR_0 );
    }

    return( VAR_2 );
}
