
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* state; int is224; scalar_t__* total; } ;
typedef TYPE_1__ mbedtls_sha256_context ;



void FUNC_0( mbedtls_sha256_context *VAR_0, int VAR_1 )
{
    VAR_0->total[0] = 0;
    VAR_0->total[1] = 0;

    if( VAR_1 == 0 )
    {

        VAR_0->state[0] = 0x6A09E667;
        VAR_0->state[1] = 0xBB67AE85;
        VAR_0->state[2] = 0x3C6EF372;
        VAR_0->state[3] = 0xA54FF53A;
        VAR_0->state[4] = 0x510E527F;
        VAR_0->state[5] = 0x9B05688C;
        VAR_0->state[6] = 0x1F83D9AB;
        VAR_0->state[7] = 0x5BE0CD19;
    }
    else
    {

        VAR_0->state[0] = 0xC1059ED8;
        VAR_0->state[1] = 0x367CD507;
        VAR_0->state[2] = 0x3070DD17;
        VAR_0->state[3] = 0xF70E5939;
        VAR_0->state[4] = 0xFFC00B31;
        VAR_0->state[5] = 0x68581511;
        VAR_0->state[6] = 0x64F98FA7;
        VAR_0->state[7] = 0xBEFA4FA4;
    }

    VAR_0->is224 = VAR_1;
}
