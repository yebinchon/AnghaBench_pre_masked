
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int err_recognition; } ;
struct TYPE_5__ {scalar_t__ qscale; int mb_height; TYPE_4__* avctx; int gb; } ;
struct TYPE_6__ {int gob_number; scalar_t__ mba_diff; scalar_t__ current_mba; scalar_t__ gob_start_code_skipped; TYPE_1__ s; } ;
typedef TYPE_1__ MpegEncContext ;
typedef TYPE_2__ H261Context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_4__*,int ,char*) ;
 void* FUNC_1 (int *,int) ;
 unsigned int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static int FUNC_5(H261Context *VAR_4)
{
    unsigned int VAR_5;
    MpegEncContext *const VAR_6 = &VAR_4->s;

    if (!VAR_4->gob_start_code_skipped) {

        VAR_5 = FUNC_2(&VAR_6->gb, 15);
        if (VAR_5)
            return -1;


        FUNC_4(&VAR_6->gb, 16);
    }

    VAR_4->gob_start_code_skipped = 0;

    VAR_4->gob_number = FUNC_1(&VAR_6->gb, 4);
    VAR_6->qscale = FUNC_1(&VAR_6->gb, 5);


    if (VAR_6->mb_height == 18) {
        if ((VAR_4->gob_number <= 0) || (VAR_4->gob_number > 12))
            return -1;
    } else {
        if ((VAR_4->gob_number != 1) && (VAR_4->gob_number != 3) &&
            (VAR_4->gob_number != 5))
            return -1;
    }


    if (FUNC_3(&VAR_6->gb) < 0)
        return VAR_0;

    if (VAR_6->qscale == 0) {
        FUNC_0(VAR_6->avctx, VAR_3, "qscale has forbidden 0 value\n");
        if (VAR_6->avctx->err_recognition & (VAR_1 | VAR_2))
            return -1;
    }





    VAR_4->current_mba = 0;
    VAR_4->mba_diff = 0;

    return 0;
}
