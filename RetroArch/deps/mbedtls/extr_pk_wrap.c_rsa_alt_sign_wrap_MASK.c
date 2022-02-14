
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t (* key_len_func ) (int ) ;int (* sign_func ) (int ,int (*) (void*,unsigned char*,size_t),void*,int ,int ,unsigned int,unsigned char const*,unsigned char*) ;int key; } ;
typedef TYPE_1__ mbedtls_rsa_alt_context ;
typedef int mbedtls_md_type_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t FUNC_0 (int ) ;
 int FUNC_1 (int ,int (*) (void*,unsigned char*,size_t),void*,int ,int ,unsigned int,unsigned char const*,unsigned char*) ;

__attribute__((used)) static int FUNC_2( void *VAR_3, mbedtls_md_type_t VAR_4,
                   const unsigned char *VAR_5, size_t VAR_6,
                   unsigned char *VAR_7, size_t *VAR_8,
                   int (*VAR_9)(void *, unsigned char *, size_t), void *VAR_10 )
{
    mbedtls_rsa_alt_context *VAR_11 = (mbedtls_rsa_alt_context *) VAR_3;






    *VAR_8 = VAR_11->key_len_func( VAR_11->key );

    return( VAR_11->sign_func( VAR_11->key, VAR_9, VAR_10, VAR_1,
                VAR_4, (unsigned int) VAR_6, VAR_5, VAR_7 ) );
}
