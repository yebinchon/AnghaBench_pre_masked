
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mbedtls_aes_context ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int,unsigned char const*,unsigned char*) ;
 scalar_t__ FUNC_1 (int *,int,size_t,unsigned char*,unsigned char const*,unsigned char*) ;
 int FUNC_2 (unsigned char*,unsigned char const*,int) ;

int FUNC_3( mbedtls_aes_context *VAR_3,
                    int VAR_4,
                    size_t VAR_5,
                    unsigned char VAR_6[16],
                    const unsigned char *VAR_7,
                    unsigned char *VAR_8 )
{
    int VAR_9;
    unsigned char VAR_10[16];

    if( VAR_5 % 16 )
        return( VAR_1 );
    if( VAR_4 == VAR_0 )
    {
        while( VAR_5 > 0 )
        {
            FUNC_2( VAR_10, VAR_7, 16 );
            FUNC_0( VAR_3, VAR_4, VAR_7, VAR_8 );

            for( VAR_9 = 0; VAR_9 < 16; VAR_9++ )
                VAR_8[VAR_9] = (unsigned char)( VAR_8[VAR_9] ^ VAR_6[VAR_9] );

            FUNC_2( VAR_6, VAR_10, 16 );

            VAR_7 += 16;
            VAR_8 += 16;
            VAR_5 -= 16;
        }
    }
    else
    {
        while( VAR_5 > 0 )
        {
            for( VAR_9 = 0; VAR_9 < 16; VAR_9++ )
                VAR_8[VAR_9] = (unsigned char)( VAR_7[VAR_9] ^ VAR_6[VAR_9] );

            FUNC_0( VAR_3, VAR_4, VAR_8, VAR_8 );
            FUNC_2( VAR_6, VAR_8, 16 );

            VAR_7 += 16;
            VAR_8 += 16;
            VAR_5 -= 16;
        }
    }

    return( 0 );
}
