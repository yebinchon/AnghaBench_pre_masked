
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mbedtls_aes_context ;
typedef int data_len ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int ,unsigned char*,unsigned char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned char*,int ) ;
 int FUNC_4 (unsigned char*,unsigned char const*,int) ;
 int FUNC_5 (unsigned char*,int ,int) ;

__attribute__((used)) static int FUNC_6( unsigned char *VAR_7,
                            const unsigned char *VAR_8, size_t VAR_9 )
{
    unsigned char VAR_10[VAR_4 + VAR_1 + 16];
    unsigned char VAR_11[VAR_5];
    unsigned char VAR_12[VAR_3];
    unsigned char VAR_13[VAR_1];
    unsigned char *VAR_14, *VAR_15;
    mbedtls_aes_context VAR_16;

    int VAR_17, VAR_18;
    size_t VAR_19, VAR_20;

    if( VAR_9 > VAR_4 )
        return( VAR_6 );

    FUNC_5( VAR_10, 0, VAR_4 + VAR_1 + 16 );
    FUNC_2( &VAR_16 );
    VAR_14 = VAR_10 + VAR_1;
    *VAR_14++ = ( VAR_9 >> 24 ) & 0xff;
    *VAR_14++ = ( VAR_9 >> 16 ) & 0xff;
    *VAR_14++ = ( VAR_9 >> 8 ) & 0xff;
    *VAR_14++ = ( VAR_9 ) & 0xff;
    VAR_14 += 3;
    *VAR_14++ = VAR_5;
    FUNC_4( VAR_14, VAR_8, VAR_9 );
    VAR_14[VAR_9] = 0x80;

    VAR_19 = VAR_1 + 8 + VAR_9 + 1;

    for( VAR_17 = 0; VAR_17 < VAR_3; VAR_17++ )
        VAR_12[VAR_17] = VAR_17;

    FUNC_3( &VAR_16, VAR_12, VAR_2 );




    for( VAR_18 = 0; VAR_18 < VAR_5; VAR_18 += VAR_1 )
    {
        VAR_14 = VAR_10;
        FUNC_5( VAR_13, 0, VAR_1 );
        VAR_20 = VAR_19;

        while( VAR_20 > 0 )
        {
            for( VAR_17 = 0; VAR_17 < VAR_1; VAR_17++ )
                VAR_13[VAR_17] ^= VAR_14[VAR_17];
            VAR_14 += VAR_1;
            VAR_20 -= ( VAR_20 >= VAR_1 ) ?
                       VAR_1 : VAR_20;

            FUNC_0( &VAR_16, VAR_0, VAR_13, VAR_13 );
        }

        FUNC_4( VAR_11 + VAR_18, VAR_13, VAR_1 );




        VAR_10[3]++;
    }




    FUNC_3( &VAR_16, VAR_11, VAR_2 );
    VAR_15 = VAR_11 + VAR_3;
    VAR_14 = VAR_7;

    for( VAR_18 = 0; VAR_18 < VAR_5; VAR_18 += VAR_1 )
    {
        FUNC_0( &VAR_16, VAR_0, VAR_15, VAR_15 );
        FUNC_4( VAR_14, VAR_15, VAR_1 );
        VAR_14 += VAR_1;
    }

    FUNC_1( &VAR_16 );

    return( 0 );
}
