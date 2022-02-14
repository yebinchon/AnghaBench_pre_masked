
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
typedef int int32_t ;
typedef int int16_t ;
struct TYPE_8__ {int offset; int lsb_bits; int bitcount; int min; int max; } ;
struct TYPE_7__ {int blocksize; } ;
struct TYPE_6__ {TYPE_2__* cur_decoding_params; } ;
typedef TYPE_1__ MLPEncodeContext ;
typedef TYPE_2__ DecodingParams ;
typedef TYPE_3__ BestOffset ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(MLPEncodeContext *VAR_2,
                             unsigned int VAR_3,
                             int32_t VAR_4, int32_t VAR_5,
                             BestOffset *VAR_6)
{
    DecodingParams *VAR_7 = VAR_2->cur_decoding_params;
    int16_t VAR_8;
    int32_t VAR_9;
    uint32_t VAR_10;
    int VAR_11;



    if (VAR_4 < VAR_1)
        VAR_5 = FUNC_0(VAR_5, 2 * VAR_1 - VAR_4 + 1);
    if (VAR_5 > VAR_0)
        VAR_4 = FUNC_1(VAR_4, 2 * VAR_0 - VAR_5 - 1);


    VAR_10 = VAR_5 - VAR_4;

    VAR_11 = FUNC_2(VAR_10) - 1;

    VAR_9 = 1 << (VAR_11 - 1);



    VAR_8 = VAR_4 + VAR_10 / 2 + !!VAR_11;

    VAR_6->offset = VAR_8;
    VAR_6->lsb_bits = VAR_11;
    VAR_6->bitcount = VAR_11 * VAR_7->blocksize;
    VAR_6->min = VAR_5 - VAR_9 + 1;
    VAR_6->max = VAR_4 + VAR_9;
}
