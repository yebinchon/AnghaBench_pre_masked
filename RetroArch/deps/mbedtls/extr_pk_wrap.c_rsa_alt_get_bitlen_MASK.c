
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* key_len_func ) (int ) ;int key; } ;
typedef TYPE_1__ mbedtls_rsa_alt_context ;


 int FUNC_0 (int ) ;

__attribute__((used)) static size_t FUNC_1( const void *VAR_0 )
{
    const mbedtls_rsa_alt_context *VAR_1 = (const mbedtls_rsa_alt_context *) VAR_0;

    return( 8 * VAR_1->key_len_func( VAR_1->key ) );
}
