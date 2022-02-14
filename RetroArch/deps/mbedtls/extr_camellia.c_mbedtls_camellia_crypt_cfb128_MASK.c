
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mbedtls_camellia_context ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,unsigned char*,unsigned char*) ;

int FUNC_1( mbedtls_camellia_context *VAR_2,
                       int VAR_3,
                       size_t VAR_4,
                       size_t *VAR_5,
                       unsigned char VAR_6[16],
                       const unsigned char *VAR_7,
                       unsigned char *VAR_8 )
{
    int VAR_9;
    size_t VAR_10 = *VAR_5;

    if( VAR_3 == VAR_0 )
    {
        while( VAR_4-- )
        {
            if( VAR_10 == 0 )
                FUNC_0( VAR_2, VAR_1, VAR_6, VAR_6 );

            VAR_9 = *VAR_7++;
            *VAR_8++ = (unsigned char)( VAR_9 ^ VAR_6[VAR_10] );
            VAR_6[VAR_10] = (unsigned char) VAR_9;

            VAR_10 = ( VAR_10 + 1 ) & 0x0F;
        }
    }
    else
    {
        while( VAR_4-- )
        {
            if( VAR_10 == 0 )
                FUNC_0( VAR_2, VAR_1, VAR_6, VAR_6 );

            VAR_6[VAR_10] = *VAR_8++ = (unsigned char)( VAR_6[VAR_10] ^ *VAR_7++ );

            VAR_10 = ( VAR_10 + 1 ) & 0x0F;
        }
    }

    *VAR_5 = VAR_10;

    return( 0 );
}
