
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ padding; size_t len; scalar_t__ hash_id; } ;
typedef TYPE_1__ mbedtls_rsa_context ;
typedef int mbedtls_md_type_t ;
typedef int mbedtls_md_info_t ;
typedef int mbedtls_md_context_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int const*,unsigned char const*,size_t,unsigned char*) ;
 int FUNC_1 (int *) ;
 unsigned int FUNC_2 (int const*) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int const*,int ) ;
 int FUNC_6 (TYPE_1__*,int (*) (void*,unsigned char*,size_t),void*,unsigned char*,unsigned char*) ;
 int FUNC_7 (TYPE_1__*,unsigned char*,unsigned char*) ;
 int FUNC_8 (unsigned char*,unsigned char const*,size_t) ;
 int FUNC_9 (unsigned char*,int ,size_t) ;
 int FUNC_10 (unsigned char*,unsigned int,unsigned char*,size_t,int *) ;

int FUNC_11( mbedtls_rsa_context *VAR_5,
                            int (*VAR_6)(void *, unsigned char *, size_t),
                            void *VAR_7,
                            int VAR_8,
                            const unsigned char *VAR_9, size_t VAR_10,
                            size_t VAR_11,
                            const unsigned char *VAR_12,
                            unsigned char *VAR_13 )
{
    size_t VAR_14;
    int VAR_15;
    unsigned char *VAR_16 = VAR_13;
    unsigned int VAR_17;
    const mbedtls_md_info_t *VAR_18;
    mbedtls_md_context_t VAR_19;

    if( VAR_8 == VAR_3 && VAR_5->padding != VAR_2 )
        return( VAR_0 );

    if( VAR_6 == ((void*)0) )
        return( VAR_0 );

    VAR_18 = FUNC_3( (mbedtls_md_type_t) VAR_5->hash_id );
    if( VAR_18 == ((void*)0) )
        return( VAR_0 );

    VAR_14 = VAR_5->len;
    VAR_17 = FUNC_2( VAR_18 );


    if( VAR_11 + 2 * VAR_17 + 2 < VAR_11 || VAR_14 < VAR_11 + 2 * VAR_17 + 2 )
        return( VAR_0 );

    FUNC_9( VAR_13, 0, VAR_14 );

    *VAR_16++ = 0;


    if( ( VAR_15 = VAR_6( VAR_7, VAR_16, VAR_17 ) ) != 0 )
        return( VAR_1 + VAR_15 );

    VAR_16 += VAR_17;


    FUNC_0( VAR_18, VAR_9, VAR_10, VAR_16 );
    VAR_16 += VAR_17;
    VAR_16 += VAR_14 - 2 * VAR_17 - 2 - VAR_11;
    *VAR_16++ = 1;
    FUNC_8( VAR_16, VAR_12, VAR_11 );

    FUNC_4( &VAR_19 );
    if( ( VAR_15 = FUNC_5( &VAR_19, VAR_18, 0 ) ) != 0 )
    {
        FUNC_1( &VAR_19 );
        return( VAR_15 );
    }


    FUNC_10( VAR_13 + VAR_17 + 1, VAR_14 - VAR_17 - 1, VAR_13 + 1, VAR_17,
               &VAR_19 );


    FUNC_10( VAR_13 + 1, VAR_17, VAR_13 + VAR_17 + 1, VAR_14 - VAR_17 - 1,
               &VAR_19 );

    FUNC_1( &VAR_19 );

    return( ( VAR_8 == VAR_4 )
            ? FUNC_7( VAR_5, VAR_13, VAR_13 )
            : FUNC_6( VAR_5, VAR_6, VAR_7, VAR_13, VAR_13 ) );
}
