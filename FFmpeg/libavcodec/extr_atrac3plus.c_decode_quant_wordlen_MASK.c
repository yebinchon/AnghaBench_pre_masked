
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int num_quant_units; int used_quant_units; TYPE_1__* channels; } ;
struct TYPE_5__ {scalar_t__* qu_wordlen; } ;
typedef int GetBitContext ;
typedef TYPE_2__ Atrac3pChanUnitCtx ;
typedef int AVCodecContext ;


 int FUNC_0 (int *,TYPE_2__*,int,int *) ;
 int FUNC_1 (scalar_t__*,int ,int) ;

__attribute__((used)) static int FUNC_2(GetBitContext *VAR_0, Atrac3pChanUnitCtx *VAR_1,
                                int VAR_2, AVCodecContext *VAR_3)
{
    int VAR_4, VAR_5, VAR_6;

    for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
        FUNC_1(VAR_1->channels[VAR_4].qu_wordlen, 0,
               sizeof(VAR_1->channels[VAR_4].qu_wordlen));

        if ((VAR_6 = FUNC_0(VAR_0, VAR_1, VAR_4, VAR_3)) < 0)
            return VAR_6;
    }



    for (VAR_5 = VAR_1->num_quant_units - 1; VAR_5 >= 0; VAR_5--)
        if (VAR_1->channels[0].qu_wordlen[VAR_5] ||
            (VAR_2 == 2 && VAR_1->channels[1].qu_wordlen[VAR_5]))
            break;
    VAR_1->used_quant_units = VAR_5 + 1;

    return 0;
}
