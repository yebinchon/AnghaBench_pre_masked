
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int samples_per_frame; int min_samples_per_subframe; int avctx; scalar_t__ subframe_len_bits; int gb; scalar_t__ max_subframe_len_bit; } ;
typedef TYPE_1__ WMAProDecodeCtx ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*,int) ;
 int FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(WMAProDecodeCtx *VAR_2, int VAR_3)
{
    int VAR_4 = 0;
    int VAR_5;


    if (VAR_3 == VAR_2->samples_per_frame - VAR_2->min_samples_per_subframe)
        return VAR_2->min_samples_per_subframe;

    if (FUNC_3(&VAR_2->gb) < 1)
        return VAR_0;


    if (VAR_2->max_subframe_len_bit) {
        if (FUNC_2(&VAR_2->gb))
            VAR_4 = 1 + FUNC_1(&VAR_2->gb, VAR_2->subframe_len_bits-1);
    } else
        VAR_4 = FUNC_1(&VAR_2->gb, VAR_2->subframe_len_bits);

    VAR_5 = VAR_2->samples_per_frame >> VAR_4;


    if (VAR_5 < VAR_2->min_samples_per_subframe ||
        VAR_5 > VAR_2->samples_per_frame) {
        FUNC_0(VAR_2->avctx, VAR_1, "broken frame: subframe_len %i\n",
               VAR_5);
        return VAR_0;
    }
    return VAR_5;
}
