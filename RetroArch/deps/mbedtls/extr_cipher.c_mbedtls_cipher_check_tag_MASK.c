
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int mbedtls_gcm_context ;
struct TYPE_5__ {scalar_t__ operation; scalar_t__ cipher_ctx; TYPE_1__* cipher_info; } ;
typedef TYPE_2__ mbedtls_cipher_context_t ;
typedef int check_tag ;
struct TYPE_4__ {scalar_t__ mode; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,unsigned char*,size_t) ;

int FUNC_1( mbedtls_cipher_context_t *VAR_4,
                      const unsigned char *VAR_5, size_t VAR_6 )
{
    int VAR_7;

    if( ((void*)0) == VAR_4 || ((void*)0) == VAR_4->cipher_info ||
        VAR_0 != VAR_4->operation )
    {
        return( VAR_2 );
    }

    if( VAR_3 == VAR_4->cipher_info->mode )
    {
        unsigned char VAR_8[16];
        size_t VAR_9;
        int VAR_10;

        if( VAR_6 > sizeof( VAR_8 ) )
            return( VAR_2 );

        if( 0 != ( VAR_7 = FUNC_0( (mbedtls_gcm_context *) VAR_4->cipher_ctx,
                                     VAR_8, VAR_6 ) ) )
        {
            return( VAR_7 );
        }


        for( VAR_10 = 0, VAR_9 = 0; VAR_9 < VAR_6; VAR_9++ )
            VAR_10 |= VAR_5[VAR_9] ^ VAR_8[VAR_9];

        if( VAR_10 != 0 )
            return( VAR_1 );

        return( 0 );
    }

    return( 0 );
}
