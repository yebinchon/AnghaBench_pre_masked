
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int mbedtls_ecp_group_id ;
struct TYPE_3__ {int Q; int d; int grp; } ;
typedef TYPE_1__ mbedtls_ecdsa_context ;


 scalar_t__ FUNC_0 (int *,int *,int *,int (*) (void*,unsigned char*,size_t),void*) ;
 scalar_t__ FUNC_1 (int *,int ) ;

int FUNC_2( mbedtls_ecdsa_context *VAR_0, mbedtls_ecp_group_id VAR_1,
                  int (*VAR_2)(void *, unsigned char *, size_t), void *VAR_3 )
{
    return( FUNC_1( &VAR_0->grp, VAR_1 ) ||
            FUNC_0( &VAR_0->grp, &VAR_0->d, &VAR_0->Q, VAR_2, VAR_3 ) );
}
