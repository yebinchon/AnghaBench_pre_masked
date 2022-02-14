
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mbedtls_md_type_t ;
typedef int mbedtls_ecdsa_context ;


 int FUNC_0 (int *,int ,unsigned char const*,size_t,unsigned char*,size_t*,int (*) (void*,unsigned char*,size_t),void*) ;

__attribute__((used)) static int FUNC_1( void *VAR_0, mbedtls_md_type_t VAR_1,
                   const unsigned char *VAR_2, size_t VAR_3,
                   unsigned char *VAR_4, size_t *VAR_5,
                   int (*VAR_6)(void *, unsigned char *, size_t), void *VAR_7 )
{
    return( FUNC_0( (mbedtls_ecdsa_context *) VAR_0,
                VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7 ) );
}
