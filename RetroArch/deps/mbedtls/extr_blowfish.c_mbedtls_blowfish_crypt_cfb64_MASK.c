
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mbedtls_blowfish_context ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,unsigned char*,unsigned char*) ;

int FUNC_1( mbedtls_blowfish_context *VAR_3,
                       int VAR_4,
                       size_t VAR_5,
                       size_t *VAR_6,
                       unsigned char VAR_7[VAR_0],
                       const unsigned char *VAR_8,
                       unsigned char *VAR_9 )
{
    int VAR_10;
    size_t VAR_11 = *VAR_6;

    if( VAR_4 == VAR_1 )
    {
        while( VAR_5-- )
        {
            if( VAR_11 == 0 )
                FUNC_0( VAR_3, VAR_2, VAR_7, VAR_7 );

            VAR_10 = *VAR_8++;
            *VAR_9++ = (unsigned char)( VAR_10 ^ VAR_7[VAR_11] );
            VAR_7[VAR_11] = (unsigned char) VAR_10;

            VAR_11 = ( VAR_11 + 1 ) % VAR_0;
        }
    }
    else
    {
        while( VAR_5-- )
        {
            if( VAR_11 == 0 )
                FUNC_0( VAR_3, VAR_2, VAR_7, VAR_7 );

            VAR_7[VAR_11] = *VAR_9++ = (unsigned char)( VAR_7[VAR_11] ^ *VAR_8++ );

            VAR_11 = ( VAR_11 + 1 ) % VAR_0;
        }
    }

    *VAR_6 = VAR_11;

    return( 0 );
}
