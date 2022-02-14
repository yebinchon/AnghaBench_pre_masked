
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int** S; int* P; } ;
typedef TYPE_1__ mbedtls_blowfish_context ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int* VAR_4 ;
 int** VAR_5 ;
 int FUNC_0 (TYPE_1__*,int*,int*) ;

int FUNC_1( mbedtls_blowfish_context *VAR_6, const unsigned char *VAR_7,
                     unsigned int VAR_8 )
{
    unsigned int VAR_9, VAR_10, VAR_11;
    uint32_t VAR_12, VAR_13, VAR_14;

    if( VAR_8 < VAR_1 || VAR_8 > VAR_0 ||
        ( VAR_8 % 8 ) )
    {
        return( VAR_3 );
    }

    VAR_8 >>= 3;

    for( VAR_9 = 0; VAR_9 < 4; VAR_9++ )
    {
        for( VAR_10 = 0; VAR_10 < 256; VAR_10++ )
            VAR_6->S[VAR_9][VAR_10] = VAR_5[VAR_9][VAR_10];
    }

    VAR_10 = 0;
    for( VAR_9 = 0; VAR_9 < VAR_2 + 2; ++VAR_9 )
    {
        VAR_12 = 0x00000000;
        for( VAR_11 = 0; VAR_11 < 4; ++VAR_11 )
        {
            VAR_12 = ( VAR_12 << 8 ) | VAR_7[VAR_10++];
            if( VAR_10 >= VAR_8 )
                VAR_10 = 0;
        }
        VAR_6->P[VAR_9] = VAR_4[VAR_9] ^ VAR_12;
    }

    VAR_13 = 0x00000000;
    VAR_14 = 0x00000000;

    for( VAR_9 = 0; VAR_9 < VAR_2 + 2; VAR_9 += 2 )
    {
        FUNC_0( VAR_6, &VAR_13, &VAR_14 );
        VAR_6->P[VAR_9] = VAR_13;
        VAR_6->P[VAR_9 + 1] = VAR_14;
    }

    for( VAR_9 = 0; VAR_9 < 4; VAR_9++ )
    {
       for( VAR_10 = 0; VAR_10 < 256; VAR_10 += 2 )
       {
            FUNC_0( VAR_6, &VAR_13, &VAR_14 );
            VAR_6->S[VAR_9][VAR_10] = VAR_13;
            VAR_6->S[VAR_9][VAR_10 + 1] = VAR_14;
        }
    }
    return( 0 );
}
