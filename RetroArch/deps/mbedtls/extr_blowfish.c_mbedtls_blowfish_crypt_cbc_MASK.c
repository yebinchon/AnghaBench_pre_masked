
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mbedtls_blowfish_context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int,unsigned char const*,unsigned char*) ;
 int FUNC_1 (unsigned char*,unsigned char const*,int) ;

int FUNC_2( mbedtls_blowfish_context *VAR_3,
                    int VAR_4,
                    size_t VAR_5,
                    unsigned char VAR_6[VAR_0],
                    const unsigned char *VAR_7,
                    unsigned char *VAR_8 )
{
    int VAR_9;
    unsigned char VAR_10[VAR_0];

    if( VAR_5 % VAR_0 )
        return( VAR_2 );

    if( VAR_4 == VAR_1 )
    {
        while( VAR_5 > 0 )
        {
            FUNC_1( VAR_10, VAR_7, VAR_0 );
            FUNC_0( VAR_3, VAR_4, VAR_7, VAR_8 );

            for( VAR_9 = 0; VAR_9 < VAR_0;VAR_9++ )
                VAR_8[VAR_9] = (unsigned char)( VAR_8[VAR_9] ^ VAR_6[VAR_9] );

            FUNC_1( VAR_6, VAR_10, VAR_0 );

            VAR_7 += VAR_0;
            VAR_8 += VAR_0;
            VAR_5 -= VAR_0;
        }
    }
    else
    {
        while( VAR_5 > 0 )
        {
            for( VAR_9 = 0; VAR_9 < VAR_0; VAR_9++ )
                VAR_8[VAR_9] = (unsigned char)( VAR_7[VAR_9] ^ VAR_6[VAR_9] );

            FUNC_0( VAR_3, VAR_4, VAR_8, VAR_8 );
            FUNC_1( VAR_6, VAR_8, VAR_0 );

            VAR_7 += VAR_0;
            VAR_8 += VAR_0;
            VAR_5 -= VAR_0;
        }
    }

    return( 0 );
}
