
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int mb_y; int mb_stride; scalar_t__ mb_x; int avctx; int qscale; } ;
struct TYPE_8__ {int current_mba; int mba_diff; TYPE_1__ s; } ;
typedef TYPE_1__ MpegEncContext ;
typedef TYPE_2__ H261Context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,char*,scalar_t__) ;
 int FUNC_1 (TYPE_1__* const,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int,int) ;

__attribute__((used)) static int FUNC_4(H261Context *VAR_3)
{
    MpegEncContext *const VAR_4 = &VAR_3->s;

    FUNC_1(VAR_4, VAR_4->qscale);


    while (VAR_3->current_mba <= VAR_1) {
        int VAR_5;

        VAR_5 = FUNC_2(VAR_3);
        if (VAR_5 < 0) {
            if (VAR_5 == VAR_2) {
                FUNC_3(VAR_3, VAR_3->current_mba, 33);
                return 0;
            }
            FUNC_0(VAR_4->avctx, VAR_0, "Error at MB: %d\n",
                   VAR_4->mb_x + VAR_4->mb_y * VAR_4->mb_stride);
            return -1;
        }

        FUNC_3(VAR_3,
                               VAR_3->current_mba - VAR_3->mba_diff,
                               VAR_3->current_mba - 1);
    }

    return -1;
}
