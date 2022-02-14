
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int qmax; int (* execute2 ) (TYPE_4__*,int ,int *,int *,int) ;} ;
struct TYPE_7__ {int mb_height; int mb_width; int mb_num; TYPE_4__* avctx; } ;
struct TYPE_8__ {int qscale; int frame_bits; TYPE_2__ m; TYPE_1__* mb_rc; } ;
struct TYPE_6__ {scalar_t__ bits; } ;
typedef TYPE_3__ DNXHDEncContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (TYPE_4__*,int ,int *,int *,int) ;

__attribute__((used)) static int FUNC_4(DNXHDEncContext *VAR_3)
{
    int VAR_4 = 0;
    int VAR_5 = 1;
    int VAR_6 = 1;
    int VAR_7 = 0;
    int VAR_8 = VAR_1;
    int VAR_9;
    int VAR_10, VAR_11;

    VAR_9 = VAR_3->qscale;
    for (;;) {
        VAR_4 = 0;
        VAR_3->qscale = VAR_9;

        VAR_3->m.avctx->execute2(VAR_3->m.avctx, VAR_2,
                               ((void*)0), ((void*)0), VAR_3->m.mb_height);
        for (VAR_11 = 0; VAR_11 < VAR_3->m.mb_height; VAR_11++) {
            for (VAR_10 = 0; VAR_10 < VAR_3->m.mb_width; VAR_10++)
                VAR_4 += VAR_3->mb_rc[(VAR_9*VAR_3->m.mb_num) + (VAR_11*VAR_3->m.mb_width+VAR_10)].bits;
            VAR_4 = (VAR_4+31)&~31;
            if (VAR_4 > VAR_3->frame_bits)
                break;
        }
        if (VAR_4 < VAR_3->frame_bits) {
            if (VAR_9 == 1)
                return 1;
            if (VAR_7 == VAR_9 - 1) {
                VAR_9 = VAR_7;
                break;
            }
            VAR_8 = FUNC_2(VAR_9, VAR_8);
            if (VAR_7 != 0)
                VAR_9 = (VAR_9 + VAR_7) >> 1;
            else
                VAR_9 -= VAR_6++;
            if (VAR_9 < 1)
                VAR_9 = 1;
            VAR_5 = 1;
        } else {
            if (VAR_8 == VAR_9 + 1)
                break;
            VAR_7 = FUNC_1(VAR_9, VAR_7);
            if (VAR_8 != VAR_1)
                VAR_9 = (VAR_9 + VAR_8) >> 1;
            else
                VAR_9 += VAR_5++;
            VAR_6 = 1;
            if (VAR_9 >= VAR_3->m.avctx->qmax)
                return FUNC_0(VAR_0);
        }
    }
    VAR_3->qscale = VAR_9;
    return 0;
}
