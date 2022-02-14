
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Qp; int grp; } ;
typedef TYPE_1__ mbedtls_ecdh_context ;


 int FUNC_0 (int *,unsigned char const**,int) ;
 int FUNC_1 (int *,int *,unsigned char const**,int) ;

int FUNC_2( mbedtls_ecdh_context *VAR_0,
                      const unsigned char **VAR_1, const unsigned char *VAR_2 )
{
    int VAR_3;

    if( ( VAR_3 = FUNC_0( &VAR_0->grp, VAR_1, VAR_2 - *VAR_1 ) ) != 0 )
        return( VAR_3 );

    if( ( VAR_3 = FUNC_1( &VAR_0->grp, &VAR_0->Qp, VAR_1, VAR_2 - *VAR_1 ) )
                != 0 )
        return( VAR_3 );

    return( 0 );
}
