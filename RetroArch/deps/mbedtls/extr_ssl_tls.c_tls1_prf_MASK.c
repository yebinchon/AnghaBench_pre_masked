
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmp ;
typedef int mbedtls_md_info_t ;
typedef int mbedtls_md_context_t ;
typedef int h_i ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned char const*,size_t) ;
 int FUNC_4 (int *,unsigned char*,int) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int const*,int) ;
 int FUNC_8 (unsigned char*,int) ;
 int FUNC_9 (unsigned char*,...) ;
 int FUNC_10 (char const*) ;

__attribute__((used)) static int FUNC_11( const unsigned char *VAR_4, size_t VAR_5,
                     const char *VAR_6,
                     const unsigned char *VAR_7, size_t VAR_8,
                     unsigned char *VAR_9, size_t VAR_10 )
{
    size_t VAR_11, VAR_12;
    size_t VAR_13, VAR_14, VAR_15;
    const unsigned char *VAR_16, *VAR_17;
    unsigned char VAR_18[128];
    unsigned char VAR_19[20];
    const mbedtls_md_info_t *VAR_20;
    mbedtls_md_context_t VAR_21;
    int VAR_22;

    FUNC_6( &VAR_21 );

    if( sizeof( VAR_18 ) < 20 + FUNC_10( VAR_6 ) + VAR_8 )
        return( VAR_0 );

    VAR_12 = ( VAR_5 + 1 ) / 2;
    VAR_16 = VAR_4;
    VAR_17 = VAR_4 + VAR_5 - VAR_12;

    VAR_11 = FUNC_10( VAR_6 );
    FUNC_9( VAR_18 + 20, VAR_6, VAR_11 );
    FUNC_9( VAR_18 + 20 + VAR_11, VAR_7, VAR_8 );
    VAR_11 += VAR_8;




    if( ( VAR_20 = FUNC_5( VAR_2 ) ) == ((void*)0) )
        return( VAR_1 );

    if( ( VAR_22 = FUNC_7( &VAR_21, VAR_20, 1 ) ) != 0 )
        return( VAR_22 );

    FUNC_3( &VAR_21, VAR_16, VAR_12 );
    FUNC_4( &VAR_21, VAR_18 + 20, VAR_11 );
    FUNC_1( &VAR_21, 4 + VAR_18 );

    for( VAR_13 = 0; VAR_13 < VAR_10; VAR_13 += 16 )
    {
        FUNC_2 ( &VAR_21 );
        FUNC_4( &VAR_21, 4 + VAR_18, 16 + VAR_11 );
        FUNC_1( &VAR_21, VAR_19 );

        FUNC_2 ( &VAR_21 );
        FUNC_4( &VAR_21, 4 + VAR_18, 16 );
        FUNC_1( &VAR_21, 4 + VAR_18 );

        VAR_15 = ( VAR_13 + 16 > VAR_10 ) ? VAR_10 % 16 : 16;

        for( VAR_14 = 0; VAR_14 < VAR_15; VAR_14++ )
            VAR_9[VAR_13 + VAR_14] = VAR_19[VAR_14];
    }

    FUNC_0( &VAR_21 );




    if( ( VAR_20 = FUNC_5( VAR_3 ) ) == ((void*)0) )
        return( VAR_1 );

    if( ( VAR_22 = FUNC_7( &VAR_21, VAR_20, 1 ) ) != 0 )
        return( VAR_22 );

    FUNC_3( &VAR_21, VAR_17, VAR_12 );
    FUNC_4( &VAR_21, VAR_18 + 20, VAR_11 );
    FUNC_1( &VAR_21, VAR_18 );

    for( VAR_13 = 0; VAR_13 < VAR_10; VAR_13 += 20 )
    {
        FUNC_2 ( &VAR_21 );
        FUNC_4( &VAR_21, VAR_18, 20 + VAR_11 );
        FUNC_1( &VAR_21, VAR_19 );

        FUNC_2 ( &VAR_21 );
        FUNC_4( &VAR_21, VAR_18, 20 );
        FUNC_1( &VAR_21, VAR_18 );

        VAR_15 = ( VAR_13 + 20 > VAR_10 ) ? VAR_10 % 20 : 20;

        for( VAR_14 = 0; VAR_14 < VAR_15; VAR_14++ )
            VAR_9[VAR_13 + VAR_14] = (unsigned char)( VAR_9[VAR_13 + VAR_14] ^ VAR_19[VAR_14] );
    }

    FUNC_0( &VAR_21 );

    FUNC_8( VAR_18, sizeof( VAR_18 ) );
    FUNC_8( VAR_19, sizeof( VAR_19 ) );

    return( 0 );
}
