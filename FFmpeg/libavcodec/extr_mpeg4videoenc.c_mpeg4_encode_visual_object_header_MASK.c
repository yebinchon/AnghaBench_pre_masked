
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int pb; TYPE_1__* avctx; scalar_t__ quarter_sample; scalar_t__ max_b_frames; } ;
struct TYPE_4__ {int profile; int level; } ;
typedef TYPE_2__ MpegEncContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int,int) ;

__attribute__((used)) static void FUNC_2(MpegEncContext *VAR_4)
{
    int VAR_5;
    int VAR_6;

    if (VAR_4->avctx->profile != VAR_1) {
        VAR_5 = VAR_4->avctx->profile << 4;
    } else if (VAR_4->max_b_frames || VAR_4->quarter_sample) {
        VAR_5 = 0xF0;
    } else {
        VAR_5 = 0x00;
    }

    if (VAR_4->avctx->level != VAR_0)
        VAR_5 |= VAR_4->avctx->level;
    else
        VAR_5 |= 1;

    if (VAR_5 >> 4 == 0xF)
        VAR_6 = 5;
    else
        VAR_6 = 1;



    FUNC_1(&VAR_4->pb, 16, 0);
    FUNC_1(&VAR_4->pb, 16, VAR_3);

    FUNC_1(&VAR_4->pb, 8, VAR_5);

    FUNC_1(&VAR_4->pb, 16, 0);
    FUNC_1(&VAR_4->pb, 16, VAR_2);

    FUNC_1(&VAR_4->pb, 1, 1);
    FUNC_1(&VAR_4->pb, 4, VAR_6);
    FUNC_1(&VAR_4->pb, 3, 1);

    FUNC_1(&VAR_4->pb, 4, 1);

    FUNC_1(&VAR_4->pb, 1, 0);

    FUNC_0(&VAR_4->pb);
}
