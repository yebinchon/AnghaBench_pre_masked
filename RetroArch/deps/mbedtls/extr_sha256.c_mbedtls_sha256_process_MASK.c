
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_3__ {scalar_t__* state; } ;
typedef TYPE_1__ mbedtls_sha256_context ;


 int FUNC_0 (scalar_t__,unsigned char const*,int) ;
 int FUNC_1 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_2 (unsigned int) ;
 int * VAR_0 ;

void FUNC_3( mbedtls_sha256_context *VAR_1, const unsigned char VAR_2[64] )
{
    uint32_t VAR_3, VAR_4, VAR_5[64];
    uint32_t VAR_6[8];
    unsigned int VAR_7;

    for( VAR_7 = 0; VAR_7 < 8; VAR_7++ )
        VAR_6[VAR_7] = VAR_1->state[VAR_7];
    for( VAR_7 = 0; VAR_7 < 16; VAR_7++ )
        FUNC_0( VAR_5[VAR_7], VAR_2, 4 * VAR_7 );

    for( VAR_7 = 0; VAR_7 < 16; VAR_7 += 8 )
    {
        FUNC_1( VAR_6[0], VAR_6[1], VAR_6[2], VAR_6[3], VAR_6[4], VAR_6[5], VAR_6[6], VAR_6[7], VAR_5[VAR_7+0], VAR_0[VAR_7+0] );
        FUNC_1( VAR_6[7], VAR_6[0], VAR_6[1], VAR_6[2], VAR_6[3], VAR_6[4], VAR_6[5], VAR_6[6], VAR_5[VAR_7+1], VAR_0[VAR_7+1] );
        FUNC_1( VAR_6[6], VAR_6[7], VAR_6[0], VAR_6[1], VAR_6[2], VAR_6[3], VAR_6[4], VAR_6[5], VAR_5[VAR_7+2], VAR_0[VAR_7+2] );
        FUNC_1( VAR_6[5], VAR_6[6], VAR_6[7], VAR_6[0], VAR_6[1], VAR_6[2], VAR_6[3], VAR_6[4], VAR_5[VAR_7+3], VAR_0[VAR_7+3] );
        FUNC_1( VAR_6[4], VAR_6[5], VAR_6[6], VAR_6[7], VAR_6[0], VAR_6[1], VAR_6[2], VAR_6[3], VAR_5[VAR_7+4], VAR_0[VAR_7+4] );
        FUNC_1( VAR_6[3], VAR_6[4], VAR_6[5], VAR_6[6], VAR_6[7], VAR_6[0], VAR_6[1], VAR_6[2], VAR_5[VAR_7+5], VAR_0[VAR_7+5] );
        FUNC_1( VAR_6[2], VAR_6[3], VAR_6[4], VAR_6[5], VAR_6[6], VAR_6[7], VAR_6[0], VAR_6[1], VAR_5[VAR_7+6], VAR_0[VAR_7+6] );
        FUNC_1( VAR_6[1], VAR_6[2], VAR_6[3], VAR_6[4], VAR_6[5], VAR_6[6], VAR_6[7], VAR_6[0], VAR_5[VAR_7+7], VAR_0[VAR_7+7] );
    }

    for( VAR_7 = 16; VAR_7 < 64; VAR_7 += 8 )
    {
        FUNC_1( VAR_6[0], VAR_6[1], VAR_6[2], VAR_6[3], VAR_6[4], VAR_6[5], VAR_6[6], VAR_6[7], FUNC_2(VAR_7+0), VAR_0[VAR_7+0] );
        FUNC_1( VAR_6[7], VAR_6[0], VAR_6[1], VAR_6[2], VAR_6[3], VAR_6[4], VAR_6[5], VAR_6[6], FUNC_2(VAR_7+1), VAR_0[VAR_7+1] );
        FUNC_1( VAR_6[6], VAR_6[7], VAR_6[0], VAR_6[1], VAR_6[2], VAR_6[3], VAR_6[4], VAR_6[5], FUNC_2(VAR_7+2), VAR_0[VAR_7+2] );
        FUNC_1( VAR_6[5], VAR_6[6], VAR_6[7], VAR_6[0], VAR_6[1], VAR_6[2], VAR_6[3], VAR_6[4], FUNC_2(VAR_7+3), VAR_0[VAR_7+3] );
        FUNC_1( VAR_6[4], VAR_6[5], VAR_6[6], VAR_6[7], VAR_6[0], VAR_6[1], VAR_6[2], VAR_6[3], FUNC_2(VAR_7+4), VAR_0[VAR_7+4] );
        FUNC_1( VAR_6[3], VAR_6[4], VAR_6[5], VAR_6[6], VAR_6[7], VAR_6[0], VAR_6[1], VAR_6[2], FUNC_2(VAR_7+5), VAR_0[VAR_7+5] );
        FUNC_1( VAR_6[2], VAR_6[3], VAR_6[4], VAR_6[5], VAR_6[6], VAR_6[7], VAR_6[0], VAR_6[1], FUNC_2(VAR_7+6), VAR_0[VAR_7+6] );
        FUNC_1( VAR_6[1], VAR_6[2], VAR_6[3], VAR_6[4], VAR_6[5], VAR_6[6], VAR_6[7], VAR_6[0], FUNC_2(VAR_7+7), VAR_0[VAR_7+7] );
    }


    for( VAR_7 = 0; VAR_7 < 8; VAR_7++ )
        VAR_1->state[VAR_7] += VAR_6[VAR_7];
}
