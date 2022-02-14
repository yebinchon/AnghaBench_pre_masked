
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mbedtls_camellia_context ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,unsigned char const*,unsigned char*) ;
 int FUNC_1 (unsigned char*,unsigned char const*,int) ;

int FUNC_2( mbedtls_camellia_context *VAR_2,
                    int VAR_3,
                    size_t VAR_4,
                    unsigned char VAR_5[16],
                    const unsigned char *VAR_6,
                    unsigned char *VAR_7 )
{
    int VAR_8;
    unsigned char VAR_9[16];

    if( VAR_4 % 16 )
        return( VAR_1 );

    if( VAR_3 == VAR_0 )
    {
        while( VAR_4 > 0 )
        {
            FUNC_1( VAR_9, VAR_6, 16 );
            FUNC_0( VAR_2, VAR_3, VAR_6, VAR_7 );

            for( VAR_8 = 0; VAR_8 < 16; VAR_8++ )
                VAR_7[VAR_8] = (unsigned char)( VAR_7[VAR_8] ^ VAR_5[VAR_8] );

            FUNC_1( VAR_5, VAR_9, 16 );

            VAR_6 += 16;
            VAR_7 += 16;
            VAR_4 -= 16;
        }
    }
    else
    {
        while( VAR_4 > 0 )
        {
            for( VAR_8 = 0; VAR_8 < 16; VAR_8++ )
                VAR_7[VAR_8] = (unsigned char)( VAR_6[VAR_8] ^ VAR_5[VAR_8] );

            FUNC_0( VAR_2, VAR_3, VAR_7, VAR_7 );
            FUNC_1( VAR_5, VAR_7, 16 );

            VAR_6 += 16;
            VAR_7 += 16;
            VAR_4 -= 16;
        }
    }

    return( 0 );
}
