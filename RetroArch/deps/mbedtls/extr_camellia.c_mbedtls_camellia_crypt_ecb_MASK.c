
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int nr; int * rk; } ;
typedef TYPE_1__ mbedtls_camellia_context ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,unsigned char const*,int) ;
 int FUNC_3 (int ,unsigned char*,int) ;
 int FUNC_4 (int *,int *,int *) ;

int FUNC_5( mbedtls_camellia_context *VAR_0,
                    int VAR_1,
                    const unsigned char VAR_2[16],
                    unsigned char VAR_3[16] )
{
    int VAR_4;
    uint32_t *VAR_5, VAR_6[4];

    ( (void) VAR_1 );

    VAR_4 = VAR_0->nr;
    VAR_5 = VAR_0->rk;

    FUNC_2( VAR_6[0], VAR_2, 0 );
    FUNC_2( VAR_6[1], VAR_2, 4 );
    FUNC_2( VAR_6[2], VAR_2, 8 );
    FUNC_2( VAR_6[3], VAR_2, 12 );

    VAR_6[0] ^= *VAR_5++;
    VAR_6[1] ^= *VAR_5++;
    VAR_6[2] ^= *VAR_5++;
    VAR_6[3] ^= *VAR_5++;

    while( VAR_4 ) {
        --VAR_4;
        FUNC_4( VAR_6, VAR_5, VAR_6 + 2 );
        VAR_5 += 2;
        FUNC_4( VAR_6 + 2, VAR_5, VAR_6 );
        VAR_5 += 2;
        FUNC_4( VAR_6, VAR_5, VAR_6 + 2 );
        VAR_5 += 2;
        FUNC_4( VAR_6 + 2, VAR_5, VAR_6 );
        VAR_5 += 2;
        FUNC_4( VAR_6, VAR_5, VAR_6 + 2 );
        VAR_5 += 2;
        FUNC_4( VAR_6 + 2, VAR_5, VAR_6 );
        VAR_5 += 2;

        if( VAR_4 ) {
            FUNC_0(VAR_6[0], VAR_6[1], VAR_5[0], VAR_5[1]);
            VAR_5 += 2;
            FUNC_1(VAR_6[2], VAR_6[3], VAR_5[0], VAR_5[1]);
            VAR_5 += 2;
        }
    }

    VAR_6[2] ^= *VAR_5++;
    VAR_6[3] ^= *VAR_5++;
    VAR_6[0] ^= *VAR_5++;
    VAR_6[1] ^= *VAR_5++;

    FUNC_3( VAR_6[2], VAR_3, 0 );
    FUNC_3( VAR_6[3], VAR_3, 4 );
    FUNC_3( VAR_6[0], VAR_3, 8 );
    FUNC_3( VAR_6[1], VAR_3, 12 );

    return( 0 );
}
