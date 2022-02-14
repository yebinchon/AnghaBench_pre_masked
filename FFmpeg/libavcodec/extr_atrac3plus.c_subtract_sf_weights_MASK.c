
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ int8_t ;
struct TYPE_6__ {int* qu_sf_idx; } ;
struct TYPE_5__ {int used_quant_units; } ;
typedef TYPE_1__ Atrac3pChanUnitCtx ;
typedef TYPE_2__ Atrac3pChanParams ;
typedef int AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__** VAR_2 ;
 int FUNC_0 (int *,int ,char*,int,int) ;

__attribute__((used)) static int FUNC_1(Atrac3pChanUnitCtx *VAR_3,
                               Atrac3pChanParams *VAR_4, int VAR_5,
                               AVCodecContext *VAR_6)
{
    int VAR_7;
    const int8_t *VAR_8 = &VAR_2[VAR_5 - 1][0];

    for (VAR_7 = 0; VAR_7 < VAR_3->used_quant_units; VAR_7++) {
        VAR_4->qu_sf_idx[VAR_7] -= VAR_8[VAR_7];
        if (VAR_4->qu_sf_idx[VAR_7] < 0 || VAR_4->qu_sf_idx[VAR_7] > 63) {
            FUNC_0(VAR_6, VAR_1,
                   "SF index out of range: pos=%d, val=%d!\n",
                   VAR_7, VAR_4->qu_sf_idx[VAR_7]);
            return VAR_0;
        }
    }

    return 0;
}
