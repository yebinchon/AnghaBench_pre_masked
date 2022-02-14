
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ mbedtls_cipher_type_t ;
typedef int mbedtls_cipher_info_t ;
struct TYPE_3__ {scalar_t__ const type; int const* info; } ;
typedef TYPE_1__ mbedtls_cipher_definition_t ;


 TYPE_1__* VAR_0 ;

const mbedtls_cipher_info_t *FUNC_0( const mbedtls_cipher_type_t VAR_1 )
{
    const mbedtls_cipher_definition_t *VAR_2;

    for( VAR_2 = VAR_0; VAR_2->info != ((void*)0); VAR_2++ )
        if( VAR_2->type == VAR_1 )
            return( VAR_2->info );

    return( ((void*)0) );
}
