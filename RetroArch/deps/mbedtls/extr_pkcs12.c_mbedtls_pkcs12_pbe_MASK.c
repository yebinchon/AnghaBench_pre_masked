
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int mbedtls_operation_t ;
typedef int mbedtls_md_type_t ;
typedef int mbedtls_cipher_type_t ;
struct TYPE_4__ {int key_bitlen; int iv_size; } ;
typedef TYPE_1__ mbedtls_cipher_info_t ;
typedef int mbedtls_cipher_context_t ;
typedef int mbedtls_asn1_buf ;
typedef int key ;
typedef int iv ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,unsigned char*,size_t*) ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned char*,int ) ;
 int FUNC_6 (int *,unsigned char*,int,int ) ;
 int FUNC_7 (int *,TYPE_1__ const*) ;
 int FUNC_8 (int *,unsigned char const*,size_t,unsigned char*,size_t*) ;
 int FUNC_9 (unsigned char*,int) ;
 int FUNC_10 (int *,int ,unsigned char const*,size_t,unsigned char*,int,unsigned char*,int ) ;

int FUNC_11( mbedtls_asn1_buf *VAR_2, int VAR_3,
                mbedtls_cipher_type_t VAR_4, mbedtls_md_type_t VAR_5,
                const unsigned char *VAR_6, size_t VAR_7,
                const unsigned char *VAR_8, size_t VAR_9,
                unsigned char *VAR_10 )
{
    int VAR_11, VAR_12 = 0;
    unsigned char VAR_13[32];
    unsigned char VAR_14[16];
    const mbedtls_cipher_info_t *VAR_15;
    mbedtls_cipher_context_t VAR_16;
    size_t VAR_17 = 0;

    VAR_15 = FUNC_2( VAR_4 );
    if( VAR_15 == ((void*)0) )
        return( VAR_0 );

    VAR_12 = VAR_15->key_bitlen / 8;

    if( ( VAR_11 = FUNC_10( VAR_2, VAR_5, VAR_6, VAR_7,
                                          VAR_13, VAR_12,
                                          VAR_14, VAR_15->iv_size ) ) != 0 )
    {
        return( VAR_11 );
    }

    FUNC_3( &VAR_16 );

    if( ( VAR_11 = FUNC_7( &VAR_16, VAR_15 ) ) != 0 )
        goto exit;

    if( ( VAR_11 = FUNC_6( &VAR_16, VAR_13, 8 * VAR_12, (mbedtls_operation_t) VAR_3 ) ) != 0 )
        goto exit;

    if( ( VAR_11 = FUNC_5( &VAR_16, VAR_14, VAR_15->iv_size ) ) != 0 )
        goto exit;

    if( ( VAR_11 = FUNC_4( &VAR_16 ) ) != 0 )
        goto exit;

    if( ( VAR_11 = FUNC_8( &VAR_16, VAR_8, VAR_9,
                                VAR_10, &VAR_17 ) ) != 0 )
    {
        goto exit;
    }

    if( ( VAR_11 = FUNC_0( &VAR_16, VAR_10 + VAR_17, &VAR_17 ) ) != 0 )
        VAR_11 = VAR_1;

exit:
    FUNC_9( VAR_13, sizeof( VAR_13 ) );
    FUNC_9( VAR_14, sizeof( VAR_14 ) );
    FUNC_1( &VAR_16 );

    return( VAR_11 );
}
