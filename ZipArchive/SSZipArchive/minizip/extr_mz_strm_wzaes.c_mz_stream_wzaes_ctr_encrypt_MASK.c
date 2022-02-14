
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_2__ {scalar_t__ crypt_pos; int * crypt_block; int aes; int * nonce; } ;
typedef TYPE_1__ mz_stream_wzaes ;
typedef scalar_t__ int32_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int *,scalar_t__) ;
 int FUNC_1 (int ,int *,int) ;

__attribute__((used)) static int32_t FUNC_2(void *VAR_2, uint8_t *VAR_3, int32_t VAR_4)
{
    mz_stream_wzaes *VAR_5 = (mz_stream_wzaes *)VAR_2;
    uint32_t VAR_6 = VAR_5->crypt_pos;
    uint32_t VAR_7 = 0;
    int32_t VAR_8 = VAR_1;

    while (VAR_7 < (uint32_t)VAR_4)
    {
        if (VAR_6 == VAR_0)
        {
            uint32_t VAR_9 = 0;


            while (VAR_9 < 8 && !++VAR_5->nonce[VAR_9])
                VAR_9 += 1;


            FUNC_0(VAR_5->crypt_block, VAR_5->nonce, VAR_0);
            FUNC_1(VAR_5->aes, VAR_5->crypt_block, sizeof(VAR_5->crypt_block));
            VAR_6 = 0;
        }

        VAR_3[VAR_7++] ^= VAR_5->crypt_block[VAR_6++];
    }

    VAR_5->crypt_pos = VAR_6;
    return VAR_8;
}
