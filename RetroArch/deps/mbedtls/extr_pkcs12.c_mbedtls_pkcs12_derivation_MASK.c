
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int salt_block ;
typedef int pwd_block ;
typedef int mbedtls_md_type_t ;
typedef int mbedtls_md_info_t ;
typedef int mbedtls_md_context_t ;
typedef int hash_output ;
typedef int hash_block ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int const*,unsigned char*,size_t,unsigned char*) ;
 int FUNC_1 (int *,unsigned char*) ;
 int FUNC_2 (int *) ;
 size_t FUNC_3 (int const*) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int const*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,unsigned char*,size_t) ;
 int FUNC_9 (unsigned char*,int) ;
 int FUNC_10 (unsigned char*,unsigned char*,size_t) ;
 int FUNC_11 (unsigned char*,unsigned char,size_t) ;
 int FUNC_12 (unsigned char*,size_t,unsigned char const*,size_t) ;

int FUNC_13( unsigned char *VAR_3, size_t VAR_4,
                       const unsigned char *VAR_5, size_t VAR_6,
                       const unsigned char *VAR_7, size_t VAR_8,
                       mbedtls_md_type_t VAR_9, int VAR_10, int VAR_11 )
{
    int VAR_12;
    unsigned int VAR_13;

    unsigned char VAR_14[128];
    unsigned char VAR_15[128], VAR_16[128], VAR_17[128];
    unsigned char VAR_18[VAR_2];
    unsigned char *VAR_19;
    unsigned char VAR_20;

    size_t VAR_21, VAR_22, VAR_23, VAR_24;

    const mbedtls_md_info_t *VAR_25;
    mbedtls_md_context_t VAR_26;


    if( VAR_4 > 128 || VAR_6 > 64 || VAR_8 > 64 )
        return( VAR_0 );

    VAR_25 = FUNC_4( VAR_9 );
    if( VAR_25 == ((void*)0) )
        return( VAR_1 );

    FUNC_5( &VAR_26 );

    if( ( VAR_12 = FUNC_6( &VAR_26, VAR_25, 0 ) ) != 0 )
        return( VAR_12 );
    VAR_21 = FUNC_3( VAR_25 );

    if( VAR_21 <= 32 )
        VAR_23 = 64;
    else
        VAR_23 = 128;

    FUNC_11( VAR_14, (unsigned char) VAR_10, VAR_23 );

    FUNC_12( VAR_15, VAR_23, VAR_7, VAR_8 );
    FUNC_12( VAR_16, VAR_23, VAR_5, VAR_6 );

    VAR_19 = VAR_3;
    while( VAR_4 > 0 )
    {

        if( ( VAR_12 = FUNC_7( &VAR_26 ) ) != 0 )
            goto exit;

        if( ( VAR_12 = FUNC_8( &VAR_26, VAR_14, VAR_23 ) ) != 0 )
            goto exit;

        if( ( VAR_12 = FUNC_8( &VAR_26, VAR_15, VAR_23 ) ) != 0 )
            goto exit;

        if( ( VAR_12 = FUNC_8( &VAR_26, VAR_16, VAR_23 ) ) != 0 )
            goto exit;

        if( ( VAR_12 = FUNC_1( &VAR_26, VAR_18 ) ) != 0 )
            goto exit;


        for( VAR_24 = 1; VAR_24 < (size_t) VAR_11; VAR_24++ )
        {
            if( ( VAR_12 = FUNC_0( VAR_25, VAR_18, VAR_21, VAR_18 ) ) != 0 )
                goto exit;
        }

        VAR_22 = ( VAR_4 > VAR_21 ) ? VAR_21 : VAR_4;
        FUNC_10( VAR_19, VAR_18, VAR_22 );
        VAR_4 -= VAR_22;
        VAR_19 += VAR_22;

        if( VAR_4 == 0 )
            break;


        FUNC_12( VAR_17, VAR_23, VAR_18, VAR_21 );


        for( VAR_24 = VAR_23; VAR_24 > 0; VAR_24-- )
            if( ++VAR_17[VAR_24 - 1] != 0 )
                break;


        VAR_20 = 0;
        for( VAR_24 = VAR_23; VAR_24 > 0; VAR_24-- )
        {
            VAR_13 = VAR_15[VAR_24 - 1] + VAR_17[VAR_24 - 1] + VAR_20;
            VAR_20 = (unsigned char) (VAR_13 >> 8);
            VAR_15[VAR_24 - 1] = VAR_13 & 0xFF;
        }


        VAR_20 = 0;
        for( VAR_24 = VAR_23; VAR_24 > 0; VAR_24-- )
        {
            VAR_13 = VAR_16[VAR_24 - 1] + VAR_17[VAR_24 - 1] + VAR_20;
            VAR_20 = (unsigned char) (VAR_13 >> 8);
            VAR_16[VAR_24 - 1] = VAR_13 & 0xFF;
        }
    }

    VAR_12 = 0;

exit:
    FUNC_9( VAR_15, sizeof( VAR_15 ) );
    FUNC_9( VAR_16, sizeof( VAR_16 ) );
    FUNC_9( VAR_17, sizeof( VAR_17 ) );
    FUNC_9( VAR_18, sizeof( VAR_18 ) );

    FUNC_2( &VAR_26 );

    return( VAR_12 );
}
