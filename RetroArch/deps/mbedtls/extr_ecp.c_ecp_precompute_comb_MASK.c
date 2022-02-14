
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const mbedtls_ecp_point ;
typedef int mbedtls_ecp_group ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int const*,int const*,int const*,int const*) ;
 int FUNC_2 (int const*,int const*,int const*) ;
 int FUNC_3 (int const*,int const**,unsigned char) ;
 int FUNC_4 (int const*,int const*) ;

__attribute__((used)) static int FUNC_5( const mbedtls_ecp_group *VAR_1,
                                mbedtls_ecp_point VAR_2[], const mbedtls_ecp_point *VAR_3,
                                unsigned char VAR_4, size_t VAR_5 )
{
    int VAR_6;
    unsigned char VAR_7, VAR_8;
    size_t VAR_9;
    mbedtls_ecp_point *VAR_10, *VAR_11[VAR_0 - 1];





    FUNC_0( FUNC_4( &VAR_2[0], VAR_3 ) );

    VAR_8 = 0;
    for( VAR_7 = 1; VAR_7 < ( 1U << ( VAR_4 - 1 ) ); VAR_7 <<= 1 )
    {
        VAR_10 = VAR_2 + VAR_7;
        FUNC_0( FUNC_4( VAR_10, VAR_2 + ( VAR_7 >> 1 ) ) );
        for( VAR_9 = 0; VAR_9 < VAR_5; VAR_9++ )
            FUNC_0( FUNC_2( VAR_1, VAR_10, VAR_10 ) );

        VAR_11[VAR_8++] = VAR_10;
    }

    FUNC_0( FUNC_3( VAR_1, VAR_11, VAR_8 ) );





    VAR_8 = 0;
    for( VAR_7 = 1; VAR_7 < ( 1U << ( VAR_4 - 1 ) ); VAR_7 <<= 1 )
    {
        VAR_9 = VAR_7;
        while( VAR_9-- )
        {
            FUNC_0( FUNC_1( VAR_1, &VAR_2[VAR_7 + VAR_9], &VAR_2[VAR_9], &VAR_2[VAR_7] ) );
            VAR_11[VAR_8++] = &VAR_2[VAR_7 + VAR_9];
        }
    }

    FUNC_0( FUNC_3( VAR_1, VAR_11, VAR_8 ) );

cleanup:

    return( VAR_6 );
}
