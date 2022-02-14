
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_5__* avctx; } ;
typedef TYPE_1__ V4L2m2mContext ;
struct TYPE_8__ {scalar_t__ max_b_frames; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_5__*,int ,char*) ;
 int FUNC_2 (TYPE_5__*,char*) ;
 int FUNC_3 (TYPE_1__*,int ,scalar_t__*,char*) ;
 int FUNC_4 (TYPE_1__*,int ,int ,char*) ;

__attribute__((used)) static int FUNC_5(V4L2m2mContext *VAR_3)
{
    if (VAR_3->avctx->max_b_frames)
        FUNC_1(VAR_3->avctx, VAR_1, "Encoder does not support b-frames yet\n");

    FUNC_4(VAR_3, FUNC_0(VAR_2), 0, "number of B-frames");
    FUNC_3(VAR_3, FUNC_0(VAR_2), &VAR_3->avctx->max_b_frames, "number of B-frames");
    if (VAR_3->avctx->max_b_frames == 0)
        return 0;

    FUNC_2(VAR_3->avctx, "DTS/PTS calculation for V4L2 encoding");

    return VAR_0;
}
