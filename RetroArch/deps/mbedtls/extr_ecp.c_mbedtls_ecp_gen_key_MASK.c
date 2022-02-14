
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Q; int d; int grp; } ;
typedef TYPE_1__ mbedtls_ecp_keypair ;
typedef int mbedtls_ecp_group_id ;


 int FUNC_0 (int *,int *,int *,int (*) (void*,unsigned char*,size_t),void*) ;
 int FUNC_1 (int *,int ) ;

int FUNC_2( mbedtls_ecp_group_id VAR_0, mbedtls_ecp_keypair *VAR_1,
                int (*VAR_2)(void *, unsigned char *, size_t), void *VAR_3 )
{
    int VAR_4;

    if( ( VAR_4 = FUNC_1( &VAR_1->grp, VAR_0 ) ) != 0 )
        return( VAR_4 );

    return( FUNC_0( &VAR_1->grp, &VAR_1->d, &VAR_1->Q, VAR_2, VAR_3 ) );
}
