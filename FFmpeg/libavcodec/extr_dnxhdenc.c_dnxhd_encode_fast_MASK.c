
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {int mb; int value; } ;
struct TYPE_13__ {int (* execute2 ) (TYPE_4__*,int ,int *,int *,int) ;} ;
struct TYPE_11__ {int mb_height; int mb_width; int mb_num; } ;
struct TYPE_12__ {int qscale; int* mb_qscale; int* mb_bits; int frame_bits; TYPE_2__ m; TYPE_1__* mb_rc; TYPE_6__* mb_cmp; int mb_cmp_tmp; } ;
struct TYPE_10__ {int bits; int ssd; } ;
typedef TYPE_3__ DNXHDEncContext ;
typedef TYPE_4__ AVCodecContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_6__*,int ,int) ;
 int FUNC_2 (TYPE_4__*,int ,int *,int *,int) ;

__attribute__((used)) static int FUNC_3(AVCodecContext *VAR_3, DNXHDEncContext *VAR_4)
{
    int VAR_5 = 0;
    int VAR_6, VAR_7, VAR_8;
    if ((VAR_6 = FUNC_0(VAR_4)) < 0)
        return VAR_6;
    for (VAR_8 = 0; VAR_8 < VAR_4->m.mb_height; VAR_8++) {
        for (VAR_7 = 0; VAR_7 < VAR_4->m.mb_width; VAR_7++) {
            int VAR_9 = VAR_8 * VAR_4->m.mb_width + VAR_7;
            int VAR_10 = (VAR_4->qscale * VAR_4->m.mb_num ) + VAR_9;
            int VAR_11;
            VAR_4->mb_qscale[VAR_9] = VAR_4->qscale;
            VAR_4->mb_bits[VAR_9] = VAR_4->mb_rc[VAR_10].bits;
            VAR_5 += VAR_4->mb_rc[VAR_10].bits;
            if (!VAR_1) {
                VAR_11 = VAR_4->mb_rc[VAR_10].bits -
                             VAR_4->mb_rc[VAR_10 + VAR_4->m.mb_num].bits;
                VAR_4->mb_cmp[VAR_9].mb = VAR_9;
                VAR_4->mb_cmp[VAR_9].value =
                    VAR_11 ? ((VAR_4->mb_rc[VAR_10].ssd -
                                   VAR_4->mb_rc[VAR_10 + VAR_4->m.mb_num].ssd) * 100) /
                                  VAR_11
                               : VAR_0;
            }
        }
        VAR_5 += 31;
    }
    if (!VAR_6) {
        if (VAR_1)
            VAR_3->execute2(VAR_3, VAR_2,
                            ((void*)0), ((void*)0), VAR_4->m.mb_height);
        FUNC_1(VAR_4->mb_cmp, VAR_4->mb_cmp_tmp, VAR_4->m.mb_num);
        for (VAR_7 = 0; VAR_7 < VAR_4->m.mb_num && VAR_5 > VAR_4->frame_bits; VAR_7++) {
            int VAR_12 = VAR_4->mb_cmp[VAR_7].mb;
            int VAR_13 = (VAR_4->qscale * VAR_4->m.mb_num ) + VAR_12;
            VAR_5 -= VAR_4->mb_rc[VAR_13].bits -
                        VAR_4->mb_rc[VAR_13 + VAR_4->m.mb_num].bits;
            VAR_4->mb_qscale[VAR_12] = VAR_4->qscale + 1;
            VAR_4->mb_bits[VAR_12] = VAR_4->mb_rc[VAR_13 + VAR_4->m.mb_num].bits;
        }
    }
    return 0;
}
