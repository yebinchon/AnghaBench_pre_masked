
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int mbedtls_operation_t ;
typedef int mbedtls_md_type_t ;
typedef int mbedtls_md_info_t ;
typedef int mbedtls_md_context_t ;
typedef int mbedtls_cipher_type_t ;
struct TYPE_12__ {int key_bitlen; scalar_t__ iv_size; } ;
typedef TYPE_1__ mbedtls_cipher_info_t ;
typedef int mbedtls_cipher_context_t ;
struct TYPE_13__ {unsigned char* p; int len; int tag; } ;
typedef TYPE_2__ mbedtls_asn1_buf ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int ,TYPE_2__*) ;
 int VAR_8 ;
 int FUNC_1 (unsigned char**,unsigned char*,TYPE_2__*,TYPE_2__*) ;
 int FUNC_2 (int *,unsigned char*,scalar_t__,unsigned char const*,size_t,unsigned char*,size_t*) ;
 int FUNC_3 (int *) ;
 TYPE_1__* FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,unsigned char*,int,int ) ;
 int FUNC_7 (int *,TYPE_1__ const*) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int const*,int) ;
 scalar_t__ FUNC_12 (TYPE_2__*,int *) ;
 int FUNC_13 (int *,unsigned char const*,size_t,unsigned char*,scalar_t__,int,int,unsigned char*) ;
 int FUNC_14 (unsigned char*,unsigned char*,scalar_t__) ;
 int FUNC_15 (TYPE_2__*,TYPE_2__*,int*,int*,int *) ;

int FUNC_16( const mbedtls_asn1_buf *VAR_9, int VAR_10,
                 const unsigned char *VAR_11, size_t VAR_12,
                 const unsigned char *VAR_13, size_t VAR_14,
                 unsigned char *VAR_15 )
{
    int VAR_16, VAR_17 = 0, VAR_18 = 0;
    unsigned char *VAR_19, *VAR_20;
    mbedtls_asn1_buf VAR_21, VAR_22, VAR_23, VAR_24;
    mbedtls_asn1_buf VAR_25;
    mbedtls_md_type_t VAR_26 = VAR_7;
    unsigned char VAR_27[32], VAR_28[32];
    size_t VAR_29 = 0;
    const mbedtls_md_info_t *VAR_30;
    const mbedtls_cipher_info_t *VAR_31;
    mbedtls_md_context_t VAR_32;
    mbedtls_cipher_type_t VAR_33;
    mbedtls_cipher_context_t VAR_34;

    VAR_19 = VAR_9->p;
    VAR_20 = VAR_19 + VAR_9->len;







    if( VAR_9->tag != ( VAR_0 | VAR_2 ) )
        return( VAR_5 +
                VAR_3 );

    if( ( VAR_16 = FUNC_1( &VAR_19, VAR_20, &VAR_21, &VAR_23 ) ) != 0 )
        return( VAR_5 + VAR_16 );


    if( FUNC_0( VAR_8, &VAR_21 ) != 0 )
        return( VAR_4 );

    if( ( VAR_16 = FUNC_15( &VAR_23,
                                           &VAR_25, &VAR_17, &VAR_18,
                                           &VAR_26 ) ) != 0 )
    {
        return( VAR_16 );
    }

    VAR_30 = FUNC_9( VAR_26 );
    if( VAR_30 == ((void*)0) )
        return( VAR_4 );

    if( ( VAR_16 = FUNC_1( &VAR_19, VAR_20, &VAR_22,
                              &VAR_24 ) ) != 0 )
    {
        return( VAR_5 + VAR_16 );
    }

    if( FUNC_12( &VAR_22, &VAR_33 ) != 0 )
        return( VAR_4 );

    VAR_31 = FUNC_4( VAR_33 );
    if( VAR_31 == ((void*)0) )
        return( VAR_4 );





    VAR_18 = VAR_31->key_bitlen / 8;

    if( VAR_24.tag != VAR_1 ||
        VAR_24.len != VAR_31->iv_size )
    {
        return( VAR_5 );
    }

    FUNC_10( &VAR_32 );
    FUNC_5( &VAR_34 );

    FUNC_14( VAR_28, VAR_24.p, VAR_24.len );

    if( ( VAR_16 = FUNC_11( &VAR_32, VAR_30, 1 ) ) != 0 )
        goto exit;

    if( ( VAR_16 = FUNC_13( &VAR_32, VAR_11, VAR_12, VAR_25.p, VAR_25.len,
                                   VAR_17, VAR_18, VAR_27 ) ) != 0 )
    {
        goto exit;
    }

    if( ( VAR_16 = FUNC_7( &VAR_34, VAR_31 ) ) != 0 )
        goto exit;

    if( ( VAR_16 = FUNC_6( &VAR_34, VAR_27, 8 * VAR_18, (mbedtls_operation_t) VAR_10 ) ) != 0 )
        goto exit;

    if( ( VAR_16 = FUNC_2( &VAR_34, VAR_28, VAR_24.len,
                              VAR_13, VAR_14, VAR_15, &VAR_29 ) ) != 0 )
        VAR_16 = VAR_6;

exit:
    FUNC_8( &VAR_32 );
    FUNC_3( &VAR_34 );

    return( VAR_16 );
}
