
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int salt ;
struct TYPE_5__ {scalar_t__ padding; size_t len; int N; scalar_t__ hash_id; } ;
typedef TYPE_1__ mbedtls_rsa_context ;
typedef scalar_t__ mbedtls_md_type_t ;
typedef int mbedtls_md_info_t ;
typedef int mbedtls_md_context_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,unsigned char*) ;
 int FUNC_1 (int *) ;
 unsigned int FUNC_2 (int const*) ;
 int * FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int const*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,unsigned char const*,unsigned int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_1__*,int (*) (void*,unsigned char*,size_t),void*,unsigned char*,unsigned char*) ;
 int FUNC_10 (TYPE_1__*,unsigned char*,unsigned char*) ;
 int FUNC_11 (unsigned char*,int) ;
 int FUNC_12 (unsigned char*,unsigned char*,unsigned int) ;
 int FUNC_13 (unsigned char*,int ,size_t) ;
 int FUNC_14 (unsigned char*,size_t,unsigned char*,unsigned int,int *) ;

int FUNC_15( mbedtls_rsa_context *VAR_7,
                         int (*VAR_8)(void *, unsigned char *, size_t),
                         void *VAR_9,
                         int VAR_10,
                         mbedtls_md_type_t VAR_11,
                         unsigned int VAR_12,
                         const unsigned char *VAR_13,
                         unsigned char *VAR_14 )
{
    size_t VAR_15;
    unsigned char *VAR_16 = VAR_14;
    unsigned char VAR_17[VAR_2];
    unsigned int VAR_18, VAR_19, VAR_20 = 0;
    int VAR_21;
    size_t VAR_22;
    const mbedtls_md_info_t *VAR_23;
    mbedtls_md_context_t VAR_24;

    if( VAR_10 == VAR_5 && VAR_7->padding != VAR_4 )
        return( VAR_0 );

    if( VAR_8 == ((void*)0) )
        return( VAR_0 );

    VAR_15 = VAR_7->len;

    if( VAR_11 != VAR_3 )
    {

        VAR_23 = FUNC_3( VAR_11 );
        if( VAR_23 == ((void*)0) )
            return( VAR_0 );

        VAR_12 = FUNC_2( VAR_23 );
    }

    VAR_23 = FUNC_3( (mbedtls_md_type_t) VAR_7->hash_id );
    if( VAR_23 == ((void*)0) )
        return( VAR_0 );

    VAR_19 = FUNC_2( VAR_23 );
    VAR_18 = VAR_19;

    if( VAR_15 < VAR_19 + VAR_18 + 2 )
        return( VAR_0 );

    FUNC_13( VAR_14, 0, VAR_15 );


    if( ( VAR_21 = VAR_8( VAR_9, VAR_17, VAR_18 ) ) != 0 )
        return( VAR_1 + VAR_21 );


    VAR_22 = FUNC_8( &VAR_7->N ) - 1;
    VAR_16 += VAR_15 - VAR_19 * 2 - 2;
    *VAR_16++ = 0x01;
    FUNC_12( VAR_16, VAR_17, VAR_18 );
    VAR_16 += VAR_18;

    FUNC_4( &VAR_24 );
    if( ( VAR_21 = FUNC_5( &VAR_24, VAR_23, 0 ) ) != 0 )
    {
        FUNC_1( &VAR_24 );

        return( VAR_21 );
    }


    FUNC_6( &VAR_24 );
    FUNC_7( &VAR_24, VAR_16, 8 );
    FUNC_7( &VAR_24, VAR_13, VAR_12 );
    FUNC_7( &VAR_24, VAR_17, VAR_18 );
    FUNC_0( &VAR_24, VAR_16 );
    FUNC_11( VAR_17, sizeof( VAR_17 ) );


    if( VAR_22 % 8 == 0 )
        VAR_20 = 1;


    FUNC_14( VAR_14 + VAR_20, VAR_15 - VAR_19 - 1 - VAR_20, VAR_16, VAR_19, &VAR_24 );

    FUNC_1( &VAR_24 );

    VAR_22 = FUNC_8( &VAR_7->N ) - 1;
    VAR_14[0] &= 0xFF >> ( VAR_15 * 8 - VAR_22 );

    VAR_16 += VAR_19;
    *VAR_16++ = 0xBC;

    return( ( VAR_10 == VAR_6 )
            ? FUNC_10( VAR_7, VAR_14, VAR_14 )
            : FUNC_9( VAR_7, VAR_8, VAR_9, VAR_14, VAR_14 ) );
}
