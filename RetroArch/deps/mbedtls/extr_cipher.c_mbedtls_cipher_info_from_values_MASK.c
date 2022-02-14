
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ mbedtls_cipher_mode_t ;
struct TYPE_7__ {unsigned int key_bitlen; scalar_t__ const mode; TYPE_1__* base; } ;
typedef TYPE_2__ mbedtls_cipher_info_t ;
typedef scalar_t__ mbedtls_cipher_id_t ;
struct TYPE_8__ {TYPE_2__ const* info; } ;
typedef TYPE_3__ mbedtls_cipher_definition_t ;
struct TYPE_6__ {scalar_t__ const cipher; } ;


 TYPE_3__* VAR_0 ;

const mbedtls_cipher_info_t *FUNC_0( const mbedtls_cipher_id_t VAR_1,
                                              int VAR_2,
                                              const mbedtls_cipher_mode_t VAR_3 )
{
    const mbedtls_cipher_definition_t *VAR_4;

    for( VAR_4 = VAR_0; VAR_4->info != ((void*)0); VAR_4++ )
        if( VAR_4->info->base->cipher == VAR_1 &&
            VAR_4->info->key_bitlen == (unsigned) VAR_2 &&
            VAR_4->info->mode == VAR_3 )
            return( VAR_4->info );

    return( ((void*)0) );
}
