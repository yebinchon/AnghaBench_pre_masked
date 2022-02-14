
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int bit_rate; int loop_filter; int slice_height; int mb_height; TYPE_2__* avctx; } ;
struct TYPE_8__ {int mspel_bit; int abt_flag; int j_type_bit; int top_left_mv_flag; int per_mb_rl_bit; TYPE_4__ s; } ;
typedef TYPE_3__ Wmv2Context ;
struct TYPE_6__ {int den; int num; } ;
struct TYPE_7__ {TYPE_1__ time_base; int extradata_size; int extradata; } ;
typedef int PutBitContext ;
typedef TYPE_4__ MpegEncContext ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,int,int) ;

__attribute__((used)) static int FUNC_4(Wmv2Context *VAR_0)
{
    MpegEncContext *const VAR_1 = &VAR_0->s;
    PutBitContext VAR_2;
    int VAR_3;

    FUNC_2(&VAR_2, VAR_1->avctx->extradata, VAR_1->avctx->extradata_size);

    FUNC_3(&VAR_2, 5, VAR_1->avctx->time_base.den / VAR_1->avctx->time_base.num);
    FUNC_3(&VAR_2, 11, FUNC_0(VAR_1->bit_rate / 1024, 2047));

    FUNC_3(&VAR_2, 1, VAR_0->mspel_bit = 1);
    FUNC_3(&VAR_2, 1, VAR_1->loop_filter);
    FUNC_3(&VAR_2, 1, VAR_0->abt_flag = 1);
    FUNC_3(&VAR_2, 1, VAR_0->j_type_bit = 1);
    FUNC_3(&VAR_2, 1, VAR_0->top_left_mv_flag = 0);
    FUNC_3(&VAR_2, 1, VAR_0->per_mb_rl_bit = 1);
    FUNC_3(&VAR_2, 3, VAR_3 = 1);

    FUNC_1(&VAR_2);

    VAR_1->slice_height = VAR_1->mb_height / VAR_3;

    return 0;
}
