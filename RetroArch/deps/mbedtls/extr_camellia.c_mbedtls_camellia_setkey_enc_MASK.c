
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned char uint32_t ;
struct TYPE_3__ {unsigned char* rk; int nr; } ;
typedef TYPE_1__ mbedtls_camellia_context ;
typedef int KC ;


 int FUNC_0 (unsigned char,unsigned char*,size_t) ;
 int VAR_0 ;
 int FUNC_1 (int,int) ;
 unsigned char** VAR_1 ;
 int FUNC_2 (unsigned char*,unsigned char*,unsigned char*) ;
 int FUNC_3 (unsigned char*,int ,int) ;
 int** VAR_2 ;

int FUNC_4( mbedtls_camellia_context *VAR_3, const unsigned char *VAR_4,
                         unsigned int VAR_5 )
{
    int VAR_6;
    size_t VAR_7;
    uint32_t *VAR_8;
    unsigned char VAR_9[64];
    uint32_t VAR_10[6][2];
    uint32_t VAR_11[16];
    uint32_t VAR_12[20];

    VAR_8 = VAR_3->rk;

    FUNC_3( VAR_9, 0, 64 );
    FUNC_3( VAR_8, 0, sizeof(VAR_3->rk) );

    switch( VAR_5 )
    {
        case 128: VAR_3->nr = 3; VAR_6 = 0; break;
        case 192:
        case 256: VAR_3->nr = 4; VAR_6 = 1; break;
        default : return( VAR_0 );
    }

    for( VAR_7 = 0; VAR_7 < VAR_5 / 8; ++VAR_7 )
        VAR_9[VAR_7] = VAR_4[VAR_7];

    if( VAR_5 == 192 ) {
        for( VAR_7 = 0; VAR_7 < 8; VAR_7++ )
            VAR_9[24 + VAR_7] = ~VAR_9[16 + VAR_7];
    }




    for( VAR_7 = 0; VAR_7 < 6; VAR_7++ ) {
        FUNC_0( VAR_10[VAR_7][0], VAR_1[VAR_7], 0 );
        FUNC_0( VAR_10[VAR_7][1], VAR_1[VAR_7], 4 );
    }





    FUNC_3( VAR_11, 0, sizeof(VAR_11) );


    for( VAR_7 = 0; VAR_7 < 8; VAR_7++ )
        FUNC_0( VAR_11[VAR_7], VAR_9, VAR_7 * 4 );


    for( VAR_7 = 0; VAR_7 < 4; ++VAR_7 )
        VAR_11[8 + VAR_7] = VAR_11[VAR_7] ^ VAR_11[4 + VAR_7];

    FUNC_2( VAR_11 + 8, VAR_10[0], VAR_11 + 10 );
    FUNC_2( VAR_11 + 10, VAR_10[1], VAR_11 + 8 );

    for( VAR_7 = 0; VAR_7 < 4; ++VAR_7 )
        VAR_11[8 + VAR_7] ^= VAR_11[VAR_7];

    FUNC_2( VAR_11 + 8, VAR_10[2], VAR_11 + 10 );
    FUNC_2( VAR_11 + 10, VAR_10[3], VAR_11 + 8 );

    if( VAR_5 > 128 ) {

        for( VAR_7 = 0; VAR_7 < 4; ++VAR_7 )
            VAR_11[12 + VAR_7] = VAR_11[4 + VAR_7] ^ VAR_11[8 + VAR_7];

        FUNC_2( VAR_11 + 12, VAR_10[4], VAR_11 + 14 );
        FUNC_2( VAR_11 + 14, VAR_10[5], VAR_11 + 12 );
    }






    FUNC_1( VAR_6, 0 );


    if( VAR_5 > 128 ) {
        FUNC_1( VAR_6, 1 );
    }


    FUNC_1( VAR_6, 2 );


    if( VAR_5 > 128 ) {
        FUNC_1( VAR_6, 3 );
    }


    for( VAR_7 = 0; VAR_7 < 20; VAR_7++ ) {
        if( VAR_2[VAR_6][VAR_7] != -1 ) {
            VAR_8[32 + 12 * VAR_6 + VAR_7] = VAR_8[VAR_2[VAR_6][VAR_7]];
        }
    }

    return( 0 );
}
