
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mbedtls_cipher_context_t ;


 int FUNC_0 (int *,unsigned char*,size_t*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned char const*,size_t) ;
 int FUNC_3 (int *,unsigned char const*,size_t,unsigned char*,size_t*) ;

int FUNC_4( mbedtls_cipher_context_t *VAR_0,
                  const unsigned char *VAR_1, size_t VAR_2,
                  const unsigned char *VAR_3, size_t VAR_4,
                  unsigned char *VAR_5, size_t *VAR_6 )
{
    int VAR_7;
    size_t VAR_8;

    if( ( VAR_7 = FUNC_2( VAR_0, VAR_1, VAR_2 ) ) != 0 )
        return( VAR_7 );

    if( ( VAR_7 = FUNC_1( VAR_0 ) ) != 0 )
        return( VAR_7 );

    if( ( VAR_7 = FUNC_3( VAR_0, VAR_3, VAR_4, VAR_5, VAR_6 ) ) != 0 )
        return( VAR_7 );

    if( ( VAR_7 = FUNC_0( VAR_0, VAR_5 + *VAR_6, &VAR_8 ) ) != 0 )
        return( VAR_7 );

    *VAR_6 += VAR_8;

    return( 0 );
}
