
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int gob_number; } ;
struct TYPE_4__ {int qscale; scalar_t__*** last_mv; scalar_t__ mb_skip_run; int pb; int height; int width; } ;
typedef TYPE_1__ MpegEncContext ;
typedef TYPE_2__ H261Context ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int,int) ;

__attribute__((used)) static void FUNC_2(MpegEncContext *VAR_0, int VAR_1)
{
    H261Context *VAR_2 = (H261Context *)VAR_0;
    if (FUNC_0(VAR_0->width, VAR_0->height) == 0) {
        VAR_2->gob_number += 2;
    } else {
        VAR_2->gob_number++;
    }
    FUNC_1(&VAR_0->pb, 16, 1);
    FUNC_1(&VAR_0->pb, 4, VAR_2->gob_number);
    FUNC_1(&VAR_0->pb, 5, VAR_0->qscale);
    FUNC_1(&VAR_0->pb, 1, 0);
    VAR_0->mb_skip_run = 0;
    VAR_0->last_mv[0][0][0] = 0;
    VAR_0->last_mv[0][0][1] = 0;
}
