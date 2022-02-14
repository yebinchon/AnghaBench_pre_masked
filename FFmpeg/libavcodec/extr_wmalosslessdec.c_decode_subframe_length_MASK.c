
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int samples_per_frame; int min_samples_per_subframe; int avctx; int gb; scalar_t__ max_num_subframes; } ;
typedef TYPE_1__ WmallDecodeCtx ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static int FUNC_3(WmallDecodeCtx *VAR_2, int VAR_3)
{
    int VAR_4, VAR_5, VAR_6;


    if (VAR_3 == VAR_2->samples_per_frame - VAR_2->min_samples_per_subframe)
        return VAR_2->min_samples_per_subframe;

    VAR_6 = FUNC_1(VAR_2->max_num_subframes - 1) + 1;
    VAR_4 = FUNC_2(&VAR_2->gb, VAR_6);
    VAR_5 = VAR_2->min_samples_per_subframe * (VAR_4 + 1);


    if (VAR_5 < VAR_2->min_samples_per_subframe ||
        VAR_5 > VAR_2->samples_per_frame) {
        FUNC_0(VAR_2->avctx, VAR_1, "broken frame: subframe_len %i\n",
               VAR_5);
        return VAR_0;
    }
    return VAR_5;
}
