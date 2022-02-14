
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int x; int y; unsigned char* m; } ;
typedef TYPE_1__ mbedtls_arc4_context ;



int FUNC_0( mbedtls_arc4_context *VAR_0, size_t VAR_1, const unsigned char *VAR_2,
                unsigned char *VAR_3 )
{
    int VAR_4, VAR_5, VAR_6, VAR_7;
    size_t VAR_8;
    unsigned char *VAR_9;

    VAR_4 = VAR_0->x;
    VAR_5 = VAR_0->y;
    VAR_9 = VAR_0->m;

    for( VAR_8 = 0; VAR_8 < VAR_1; VAR_8++ )
    {
        VAR_4 = ( VAR_4 + 1 ) & 0xFF; VAR_6 = VAR_9[VAR_4];
        VAR_5 = ( VAR_5 + VAR_6 ) & 0xFF; VAR_7 = VAR_9[VAR_5];

        VAR_9[VAR_4] = (unsigned char) VAR_7;
        VAR_9[VAR_5] = (unsigned char) VAR_6;

        VAR_3[VAR_8] = (unsigned char)
            ( VAR_2[VAR_8] ^ VAR_9[(unsigned char)( VAR_6 + VAR_7 )] );
    }

    VAR_0->x = VAR_4;
    VAR_0->y = VAR_5;

    return( 0 );
}
