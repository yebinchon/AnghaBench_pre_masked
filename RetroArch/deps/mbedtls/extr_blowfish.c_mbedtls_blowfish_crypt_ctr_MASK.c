
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mbedtls_blowfish_context ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,unsigned char*,unsigned char*) ;

int FUNC_1( mbedtls_blowfish_context *VAR_2,
                       size_t VAR_3,
                       size_t *VAR_4,
                       unsigned char VAR_5[VAR_0],
                       unsigned char VAR_6[VAR_0],
                       const unsigned char *VAR_7,
                       unsigned char *VAR_8 )
{
    int VAR_9, VAR_10;
    size_t VAR_11 = *VAR_4;

    while( VAR_3-- )
    {
        if( VAR_11 == 0 ) {
            FUNC_0( VAR_2, VAR_1, VAR_5,
                                VAR_6 );

            for( VAR_10 = VAR_0; VAR_10 > 0; VAR_10-- )
                if( ++VAR_5[VAR_10 - 1] != 0 )
                    break;
        }
        VAR_9 = *VAR_7++;
        *VAR_8++ = (unsigned char)( VAR_9 ^ VAR_6[VAR_11] );

        VAR_11 = ( VAR_11 + 1 ) % VAR_0;
    }

    *VAR_4 = VAR_11;

    return( 0 );
}
