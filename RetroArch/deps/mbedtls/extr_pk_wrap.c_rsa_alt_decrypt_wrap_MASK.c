
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t (* key_len_func ) (int ) ;int (* decrypt_func ) (int ,int ,size_t*,unsigned char const*,unsigned char*,size_t) ;int key; } ;
typedef TYPE_1__ mbedtls_rsa_alt_context ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,size_t*,unsigned char const*,unsigned char*,size_t) ;

__attribute__((used)) static int FUNC_2( void *VAR_2,
                    const unsigned char *VAR_3, size_t VAR_4,
                    unsigned char *VAR_5, size_t *VAR_6, size_t VAR_7,
                    int (*VAR_8)(void *, unsigned char *, size_t), void *VAR_9 )
{
    mbedtls_rsa_alt_context *VAR_10 = (mbedtls_rsa_alt_context *) VAR_2;

    ((void) VAR_8);
    ((void) VAR_9);

    if( VAR_4 != VAR_10->key_len_func( VAR_10->key ) )
        return( VAR_0 );

    return( VAR_10->decrypt_func( VAR_10->key,
                VAR_1, VAR_6, VAR_3, VAR_5, VAR_7 ) );
}
