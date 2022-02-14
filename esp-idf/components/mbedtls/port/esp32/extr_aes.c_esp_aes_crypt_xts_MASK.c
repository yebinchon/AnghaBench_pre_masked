
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tweak ;
struct TYPE_3__ {int crypt; int tweak; } ;
typedef TYPE_1__ esp_aes_xts_context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int,unsigned char const*,unsigned char*) ;
 int FUNC_1 (unsigned char*,unsigned char*) ;
 int FUNC_2 (unsigned char*,unsigned char*,int) ;

int FUNC_3( esp_aes_xts_context *VAR_3,
                           int VAR_4,
                           size_t VAR_5,
                           const unsigned char VAR_6[16],
                           const unsigned char *VAR_7,
                           unsigned char *VAR_8 )
{
    int VAR_9;
    size_t VAR_10 = VAR_5 / 16;
    size_t VAR_11 = VAR_5 % 16;
    unsigned char VAR_12[16];
    unsigned char VAR_13[16];
    unsigned char VAR_14[16];


    if( VAR_5 < 16 )
        return VAR_2;


    if( VAR_5 > ( 1 << 20 ) * 16 )
        return VAR_2;


    VAR_9 = FUNC_0( &VAR_3->tweak, VAR_1,
                                 VAR_6, VAR_12 );
    if( VAR_9 != 0 )
        return( VAR_9 );

    while( VAR_10-- )
    {
        size_t VAR_15;

        if( VAR_11 && ( VAR_4 == VAR_0 ) && VAR_10 == 0 )
        {





            FUNC_2( VAR_13, VAR_12, sizeof( VAR_12 ) );
            FUNC_1( VAR_12, VAR_12 );
        }

        for( VAR_15 = 0; VAR_15 < 16; VAR_15++ )
            VAR_14[VAR_15] = VAR_7[VAR_15] ^ VAR_12[VAR_15];

        VAR_9 = FUNC_0( &VAR_3->crypt, VAR_4, VAR_14, VAR_14 );
        if( VAR_9 != 0 )
            return( VAR_9 );

        for( VAR_15 = 0; VAR_15 < 16; VAR_15++ )
            VAR_8[VAR_15] = VAR_14[VAR_15] ^ VAR_12[VAR_15];


        FUNC_1( VAR_12, VAR_12 );

        VAR_8 += 16;
        VAR_7 += 16;
    }

    if( VAR_11 )
    {


        unsigned char *VAR_16 = VAR_4 == VAR_0 ? VAR_13 : VAR_12;



        size_t VAR_17;
        unsigned char *VAR_18 = VAR_8 - 16;





        for( VAR_17 = 0; VAR_17 < VAR_11; VAR_17++ )
        {
            VAR_8[VAR_17] = VAR_18[VAR_17];
            VAR_14[VAR_17] = VAR_7[VAR_17] ^ VAR_16[VAR_17];
        }



        for( ; VAR_17 < 16; VAR_17++ )
            VAR_14[VAR_17] = VAR_18[VAR_17] ^ VAR_16[VAR_17];

        VAR_9 = FUNC_0( &VAR_3->crypt, VAR_4, VAR_14, VAR_14 );
        if( VAR_9 != 0 )
            return VAR_9;



        for( VAR_17 = 0; VAR_17 < 16; VAR_17++ )
            VAR_18[VAR_17] = VAR_14[VAR_17] ^ VAR_16[VAR_17];
    }

    return( 0 );
}
