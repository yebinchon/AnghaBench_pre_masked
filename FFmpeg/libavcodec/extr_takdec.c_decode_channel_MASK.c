
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_6__ {scalar_t__ bits_per_raw_sample; } ;
struct TYPE_5__ {int nb_samples; scalar_t__* sample_shift; int* lpc_mode; int nb_subframes; int* subframe_len; int subframe_scale; int ** decoded; int gb; TYPE_2__* avctx; } ;
typedef TYPE_1__ TAKDecContext ;
typedef int GetBitContext ;
typedef TYPE_2__ AVCodecContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int *,int,int) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,scalar_t__) ;

__attribute__((used)) static int FUNC_5(TAKDecContext *VAR_1, int VAR_2)
{
    AVCodecContext *VAR_3 = VAR_1->avctx;
    GetBitContext *VAR_4 = &VAR_1->gb;
    int32_t *VAR_5 = VAR_1->decoded[VAR_2];
    int VAR_6 = VAR_1->nb_samples - 1;
    int VAR_7 = 0, VAR_8, VAR_9 = 0;

    VAR_1->sample_shift[VAR_2] = FUNC_2(VAR_4);
    if (VAR_1->sample_shift[VAR_2] >= VAR_3->bits_per_raw_sample)
        return VAR_0;

    *VAR_5++ = FUNC_4(VAR_4, VAR_3->bits_per_raw_sample - VAR_1->sample_shift[VAR_2]);
    VAR_1->lpc_mode[VAR_2] = FUNC_1(VAR_4, 2);
    VAR_1->nb_subframes = FUNC_1(VAR_4, 3) + 1;

    if (VAR_1->nb_subframes > 1) {
        if (FUNC_3(VAR_4) < (VAR_1->nb_subframes - 1) * 6)
            return VAR_0;

        for (; VAR_7 < VAR_1->nb_subframes - 1; VAR_7++) {
            int VAR_10 = FUNC_1(VAR_4, 6);

            VAR_1->subframe_len[VAR_7] = (VAR_10 - VAR_9) * VAR_1->subframe_scale;
            if (VAR_1->subframe_len[VAR_7] <= 0)
                return VAR_0;

            VAR_6 -= VAR_1->subframe_len[VAR_7];
            VAR_9 = VAR_10;
        }

        if (VAR_6 <= 0)
            return VAR_0;
    }
    VAR_1->subframe_len[VAR_7] = VAR_6;

    VAR_9 = 0;
    for (VAR_7 = 0; VAR_7 < VAR_1->nb_subframes; VAR_7++) {
        if ((VAR_8 = FUNC_0(VAR_1, VAR_5, VAR_1->subframe_len[VAR_7], VAR_9)) < 0)
            return VAR_8;
        VAR_5 += VAR_1->subframe_len[VAR_7];
        VAR_9 = VAR_1->subframe_len[VAR_7];
    }

    return 0;
}
