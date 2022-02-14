
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mbedtls_ccm_context ;
typedef scalar_t__ add_len ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned char*,unsigned char const*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (unsigned char*,unsigned char const*,size_t) ;
 int FUNC_2 (unsigned char*,int ,int) ;

__attribute__((used)) static int FUNC_3( mbedtls_ccm_context *VAR_4, int VAR_5, size_t VAR_6,
                           const unsigned char *VAR_7, size_t VAR_8,
                           const unsigned char *VAR_9, size_t VAR_10,
                           const unsigned char *VAR_11, unsigned char *VAR_12,
                           unsigned char *VAR_13, size_t VAR_14 )
{
    int VAR_15;
    unsigned char VAR_16;
    unsigned char VAR_17;
    size_t VAR_18, VAR_19;
    unsigned char VAR_20[16];
    unsigned char VAR_21[16];
    unsigned char VAR_22[16];
    const unsigned char *VAR_23;
    unsigned char *VAR_24;






    if( VAR_14 < 4 || VAR_14 > 16 || VAR_14 % 2 != 0 )
        return( VAR_2 );


    if( VAR_8 < 7 || VAR_8 > 13 )
        return( VAR_2 );

    if( VAR_10 > 0xFF00 )
        return( VAR_2 );

    VAR_17 = 16 - 1 - (unsigned char) VAR_8;
    VAR_20[0] = 0;
    VAR_20[0] |= ( VAR_10 > 0 ) << 6;
    VAR_20[0] |= ( ( VAR_14 - 2 ) / 2 ) << 3;
    VAR_20[0] |= VAR_17 - 1;

    FUNC_1( VAR_20 + 1, VAR_7, VAR_8 );

    for( VAR_16 = 0, VAR_18 = VAR_6; VAR_16 < VAR_17; VAR_16++, VAR_18 >>= 8 )
        VAR_20[15-VAR_16] = (unsigned char)( VAR_18 & 0xFF );

    if( VAR_18 > 0 )
        return( VAR_2 );



    FUNC_2( VAR_21, 0, 16 );
    VAR_3;





    if( VAR_10 > 0 )
    {
        size_t VAR_25;
        VAR_18 = VAR_10;
        VAR_23 = VAR_9;

        FUNC_2( VAR_20, 0, 16 );
        VAR_20[0] = (unsigned char)( ( VAR_10 >> 8 ) & 0xFF );
        VAR_20[1] = (unsigned char)( ( VAR_10 ) & 0xFF );

        VAR_25 = VAR_18 < 16 - 2 ? VAR_18 : 16 - 2;
        FUNC_1( VAR_20 + 2, VAR_23, VAR_25 );
        VAR_18 -= VAR_25;
        VAR_23 += VAR_25;

        VAR_3;

        while( VAR_18 > 0 )
        {
            VAR_25 = VAR_18 > 16 ? 16 : VAR_18;

            FUNC_2( VAR_20, 0, 16 );
            FUNC_1( VAR_20, VAR_23, VAR_25 );
            VAR_3;

            VAR_18 -= VAR_25;
            VAR_23 += VAR_25;
        }
    }
    VAR_22[0] = VAR_17 - 1;
    FUNC_1( VAR_22 + 1, VAR_7, VAR_8 );
    FUNC_2( VAR_22 + 1 + VAR_8, 0, VAR_17 );
    VAR_22[15] = 1;







    VAR_18 = VAR_6;
    VAR_23 = VAR_11;
    VAR_24 = VAR_12;

    while( VAR_18 > 0 )
    {
        size_t VAR_26 = VAR_18 > 16 ? 16 : VAR_18;

        if( VAR_5 == VAR_1 )
        {
            FUNC_2( VAR_20, 0, 16 );
            FUNC_1( VAR_20, VAR_23, VAR_26 );
            VAR_3;
        }

        FUNC_0( VAR_24, VAR_23, VAR_26 );

        if( VAR_5 == VAR_0 )
        {
            FUNC_2( VAR_20, 0, 16 );
            FUNC_1( VAR_20, VAR_24, VAR_26 );
            VAR_3;
        }

        VAR_24 += VAR_26;
        VAR_23 += VAR_26;
        VAR_18 -= VAR_26;





        for( VAR_16 = 0; VAR_16 < VAR_17; VAR_16++ )
            if( ++VAR_22[15-VAR_16] != 0 )
                break;
    }




    for( VAR_16 = 0; VAR_16 < VAR_17; VAR_16++ )
        VAR_22[15-VAR_16] = 0;

    FUNC_0( VAR_21, VAR_21, 16 );
    FUNC_1( VAR_13, VAR_21, VAR_14 );

    return( 0 );
}
