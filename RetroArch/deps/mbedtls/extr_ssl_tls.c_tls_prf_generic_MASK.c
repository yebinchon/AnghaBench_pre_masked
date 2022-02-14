
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmp ;
typedef int mbedtls_md_type_t ;
typedef int mbedtls_md_info_t ;
typedef int mbedtls_md_context_t ;
typedef int h_i ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 size_t FUNC_1 (int const*) ;
 int FUNC_2 (int *,unsigned char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned char const*,size_t) ;
 int FUNC_5 (int *,unsigned char*,size_t) ;
 int * FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int const*,int) ;
 int FUNC_9 (unsigned char*,int) ;
 int FUNC_10 (unsigned char*,...) ;
 size_t FUNC_11 (char const*) ;

__attribute__((used)) static int FUNC_12( mbedtls_md_type_t VAR_3,
                            const unsigned char *VAR_4, size_t VAR_5,
                            const char *VAR_6,
                            const unsigned char *VAR_7, size_t VAR_8,
                            unsigned char *VAR_9, size_t VAR_10 )
{
    size_t VAR_11;
    size_t VAR_12, VAR_13, VAR_14, VAR_15;
    unsigned char VAR_16[128];
    unsigned char VAR_17[VAR_2];
    const mbedtls_md_info_t *VAR_18;
    mbedtls_md_context_t VAR_19;
    int VAR_20;

    FUNC_7( &VAR_19 );

    if( ( VAR_18 = FUNC_6( VAR_3 ) ) == ((void*)0) )
        return( VAR_1 );

    VAR_15 = FUNC_1( VAR_18 );

    if( sizeof( VAR_16 ) < VAR_15 + FUNC_11( VAR_6 ) + VAR_8 )
        return( VAR_0 );

    VAR_11 = FUNC_11( VAR_6 );
    FUNC_10( VAR_16 + VAR_15, VAR_6, VAR_11 );
    FUNC_10( VAR_16 + VAR_15 + VAR_11, VAR_7, VAR_8 );
    VAR_11 += VAR_8;




    if ( ( VAR_20 = FUNC_8( &VAR_19, VAR_18, 1 ) ) != 0 )
        return( VAR_20 );

    FUNC_4( &VAR_19, VAR_4, VAR_5 );
    FUNC_5( &VAR_19, VAR_16 + VAR_15, VAR_11 );
    FUNC_2( &VAR_19, VAR_16 );

    for( VAR_12 = 0; VAR_12 < VAR_10; VAR_12 += VAR_15 )
    {
        FUNC_3 ( &VAR_19 );
        FUNC_5( &VAR_19, VAR_16, VAR_15 + VAR_11 );
        FUNC_2( &VAR_19, VAR_17 );

        FUNC_3 ( &VAR_19 );
        FUNC_5( &VAR_19, VAR_16, VAR_15 );
        FUNC_2( &VAR_19, VAR_16 );

        VAR_14 = ( VAR_12 + VAR_15 > VAR_10 ) ? VAR_10 % VAR_15 : VAR_15;

        for( VAR_13 = 0; VAR_13 < VAR_14; VAR_13++ )
            VAR_9[VAR_12 + VAR_13] = VAR_17[VAR_13];
    }

    FUNC_0( &VAR_19 );

    FUNC_9( VAR_16, sizeof( VAR_16 ) );
    FUNC_9( VAR_17, sizeof( VAR_17 ) );

    return( 0 );
}
