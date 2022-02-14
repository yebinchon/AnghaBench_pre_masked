
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ pict_type; int qscale; unsigned int mb_width; unsigned int mb_height; int pb; int avctx; } ;
typedef TYPE_1__ MpegEncContext ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int *,int,int) ;

int FUNC_4(MpegEncContext *VAR_3, int VAR_4)
{
    int VAR_5= 0;

    FUNC_1(&VAR_3->pb);

    FUNC_3(&VAR_3->pb, 1, 1);

    FUNC_3(&VAR_3->pb, 1, (VAR_3->pict_type == VAR_1));

    FUNC_3(&VAR_3->pb, 1, 0);

    FUNC_3(&VAR_3->pb, 5, VAR_3->qscale);

    if (VAR_3->pict_type == VAR_0) {

    }


    if(!VAR_5){
        if (VAR_3->mb_width * VAR_3->mb_height >= (1U << 12)) {
            FUNC_2(VAR_3->avctx, "Encoding frames with %d (>= 4096) macroblocks",
                                          VAR_3->mb_width * VAR_3->mb_height);
            return FUNC_0(VAR_2);
        }
        FUNC_3(&VAR_3->pb, 6, 0);
        FUNC_3(&VAR_3->pb, 6, 0);
        FUNC_3(&VAR_3->pb, 12, VAR_3->mb_width * VAR_3->mb_height);
    }

    FUNC_3(&VAR_3->pb, 3, 0);
    return 0;
}
