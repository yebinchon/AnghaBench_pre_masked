
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int gob_number; } ;
struct TYPE_8__ {long long picture_number; scalar_t__ pict_type; scalar_t__ mb_skip_run; int pb; int height; int width; TYPE_2__* avctx; int ptr_lastgob; } ;
struct TYPE_6__ {long long num; long long den; } ;
struct TYPE_7__ {TYPE_1__ time_base; } ;
typedef TYPE_3__ MpegEncContext ;
typedef TYPE_4__ H261Context ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int,int) ;

void FUNC_5(MpegEncContext *VAR_1, int VAR_2)
{
    H261Context *VAR_3 = (H261Context *)VAR_1;
    int VAR_4, VAR_5;

    FUNC_0(&VAR_1->pb);


    VAR_1->ptr_lastgob = FUNC_3(&VAR_1->pb);

    FUNC_2(&VAR_1->pb, 20, 0x10);

    VAR_5 = VAR_1->picture_number * 30000LL * VAR_1->avctx->time_base.num /
               (1001LL * VAR_1->avctx->time_base.den);
    FUNC_4(&VAR_1->pb, 5, VAR_5);

    FUNC_2(&VAR_1->pb, 1, 0);
    FUNC_2(&VAR_1->pb, 1, 0);
    FUNC_2(&VAR_1->pb, 1, VAR_1->pict_type == VAR_0);

    VAR_4 = FUNC_1(VAR_1->width, VAR_1->height);

    FUNC_2(&VAR_1->pb, 1, VAR_4);

    FUNC_2(&VAR_1->pb, 1, 1);
    FUNC_2(&VAR_1->pb, 1, 1);

    FUNC_2(&VAR_1->pb, 1, 0);
    if (VAR_4 == 0)
        VAR_3->gob_number = -1;
    else
        VAR_3->gob_number = 0;
    VAR_1->mb_skip_run = 0;
}
