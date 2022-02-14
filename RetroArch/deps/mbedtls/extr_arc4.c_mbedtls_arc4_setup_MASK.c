
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char* m; scalar_t__ y; scalar_t__ x; } ;
typedef TYPE_1__ mbedtls_arc4_context ;



void FUNC_0( mbedtls_arc4_context *VAR_0, const unsigned char *VAR_1,
                 unsigned int VAR_2 )
{
    int VAR_3, VAR_4, VAR_5;
    unsigned int VAR_6;
    unsigned char *VAR_7;

    VAR_0->x = 0;
    VAR_0->y = 0;
    VAR_7 = VAR_0->m;

    for( VAR_3 = 0; VAR_3 < 256; VAR_3++ )
        VAR_7[VAR_3] = (unsigned char) VAR_3;

    VAR_4 = VAR_6 = 0;

    for( VAR_3 = 0; VAR_3 < 256; VAR_3++, VAR_6++ )
    {
        if( VAR_6 >= VAR_2 ) VAR_6 = 0;

        VAR_5 = VAR_7[VAR_3];
        VAR_4 = ( VAR_4 + VAR_5 + VAR_1[VAR_6] ) & 0xFF;
        VAR_7[VAR_3] = VAR_7[VAR_4];
        VAR_7[VAR_4] = (unsigned char) VAR_5;
    }
}
