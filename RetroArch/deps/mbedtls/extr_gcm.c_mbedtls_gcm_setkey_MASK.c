
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int cipher_ctx; } ;
typedef TYPE_1__ mbedtls_gcm_context ;
struct TYPE_8__ {int block_size; } ;
typedef TYPE_2__ mbedtls_cipher_info_t ;
typedef int mbedtls_cipher_id_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 TYPE_2__* FUNC_2 (int ,unsigned int,int ) ;
 int FUNC_3 (int *,unsigned char const*,unsigned int,int ) ;
 int FUNC_4 (int *,TYPE_2__ const*) ;

int FUNC_5( mbedtls_gcm_context *VAR_3,
                        mbedtls_cipher_id_t VAR_4,
                        const unsigned char *VAR_5,
                        unsigned int VAR_6 )
{
    int VAR_7;
    const mbedtls_cipher_info_t *VAR_8;

    VAR_8 = FUNC_2( VAR_4, VAR_6, VAR_2 );
    if( VAR_8 == ((void*)0) )
        return( VAR_1 );

    if( VAR_8->block_size != 16 )
        return( VAR_1 );

    FUNC_1( &VAR_3->cipher_ctx );

    if( ( VAR_7 = FUNC_4( &VAR_3->cipher_ctx, VAR_8 ) ) != 0 )
        return( VAR_7 );

    if( ( VAR_7 = FUNC_3( &VAR_3->cipher_ctx, VAR_5, VAR_6,
                               VAR_0 ) ) != 0 )
    {
        return( VAR_7 );
    }

    if( ( VAR_7 = FUNC_0( VAR_3 ) ) != 0 )
        return( VAR_7 );

    return( 0 );
}
