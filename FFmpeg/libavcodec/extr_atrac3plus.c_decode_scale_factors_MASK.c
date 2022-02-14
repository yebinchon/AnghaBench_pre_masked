
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* channels; int used_quant_units; } ;
struct TYPE_5__ {int qu_sf_idx; } ;
typedef int GetBitContext ;
typedef TYPE_2__ Atrac3pChanUnitCtx ;
typedef int AVCodecContext ;


 int FUNC_0 (int *,TYPE_2__*,int,int *) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static int FUNC_2(GetBitContext *VAR_0, Atrac3pChanUnitCtx *VAR_1,
                                int VAR_2, AVCodecContext *VAR_3)
{
    int VAR_4, VAR_5;

    if (!VAR_1->used_quant_units)
        return 0;

    for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
        FUNC_1(VAR_1->channels[VAR_4].qu_sf_idx, 0,
               sizeof(VAR_1->channels[VAR_4].qu_sf_idx));

        if ((VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_4, VAR_3)) < 0)
            return VAR_5;
    }

    return 0;
}
