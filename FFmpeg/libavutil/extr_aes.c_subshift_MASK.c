
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_3__ {size_t* u8; } ;
typedef TYPE_1__ av_aes_block ;



__attribute__((used)) static void FUNC_0(av_aes_block VAR_0[2], int VAR_1, const uint8_t *VAR_2)
{
    av_aes_block *VAR_3 = (av_aes_block *) (VAR_0[0].u8 - VAR_1);
    av_aes_block *VAR_4 = (av_aes_block *) (VAR_0[0].u8 + VAR_1);

    VAR_0[0].u8[ 0] = VAR_2[VAR_0[1].u8[ 0]];
    VAR_0[0].u8[ 4] = VAR_2[VAR_0[1].u8[ 4]];
    VAR_0[0].u8[ 8] = VAR_2[VAR_0[1].u8[ 8]];
    VAR_0[0].u8[12] = VAR_2[VAR_0[1].u8[12]];
    VAR_3[0].u8[ 3] = VAR_2[VAR_3[1].u8[ 7]];
    VAR_3[0].u8[ 7] = VAR_2[VAR_3[1].u8[11]];
    VAR_3[0].u8[11] = VAR_2[VAR_3[1].u8[15]];
    VAR_3[0].u8[15] = VAR_2[VAR_3[1].u8[ 3]];
    VAR_0[0].u8[ 2] = VAR_2[VAR_0[1].u8[10]];
    VAR_0[0].u8[10] = VAR_2[VAR_0[1].u8[ 2]];
    VAR_0[0].u8[ 6] = VAR_2[VAR_0[1].u8[14]];
    VAR_0[0].u8[14] = VAR_2[VAR_0[1].u8[ 6]];
    VAR_4[0].u8[ 1] = VAR_2[VAR_4[1].u8[13]];
    VAR_4[0].u8[13] = VAR_2[VAR_4[1].u8[ 9]];
    VAR_4[0].u8[ 9] = VAR_2[VAR_4[1].u8[ 5]];
    VAR_4[0].u8[ 5] = VAR_2[VAR_4[1].u8[ 1]];
}
