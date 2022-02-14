
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int is384; void** state; scalar_t__* total; } ;
typedef TYPE_1__ mbedtls_sha512_context ;


 void* FUNC_0 (int) ;

void FUNC_1( mbedtls_sha512_context *VAR_0, int VAR_1 )
{
    VAR_0->total[0] = 0;
    VAR_0->total[1] = 0;

    if( VAR_1 == 0 )
    {

        VAR_0->state[0] = FUNC_0(0x6A09E667F3BCC908);
        VAR_0->state[1] = FUNC_0(0xBB67AE8584CAA73B);
        VAR_0->state[2] = FUNC_0(0x3C6EF372FE94F82B);
        VAR_0->state[3] = FUNC_0(0xA54FF53A5F1D36F1);
        VAR_0->state[4] = FUNC_0(0x510E527FADE682D1);
        VAR_0->state[5] = FUNC_0(0x9B05688C2B3E6C1F);
        VAR_0->state[6] = FUNC_0(0x1F83D9ABFB41BD6B);
        VAR_0->state[7] = FUNC_0(0x5BE0CD19137E2179);
    }
    else
    {

        VAR_0->state[0] = FUNC_0(0xCBBB9D5DC1059ED8);
        VAR_0->state[1] = FUNC_0(0x629A292A367CD507);
        VAR_0->state[2] = FUNC_0(0x9159015A3070DD17);
        VAR_0->state[3] = FUNC_0(0x152FECD8F70E5939);
        VAR_0->state[4] = FUNC_0(0x67332667FFC00B31);
        VAR_0->state[5] = FUNC_0(0x8EB44A8768581511);
        VAR_0->state[6] = FUNC_0(0xDB0C2E0D64F98FA7);
        VAR_0->state[7] = FUNC_0(0x47B5481DBEFA4FA4);
    }

    VAR_0->is384 = VAR_1;
}
