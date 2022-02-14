
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_11__ {int qmax; int (* execute2 ) (TYPE_4__*,int ,int *,int *,int) ;} ;
struct TYPE_8__ {int mb_height; int mb_width; int mb_num; } ;
struct TYPE_10__ {int qscale; int lambda; int* mb_qscale; int* mb_bits; int frame_bits; TYPE_2__* mb_rc; TYPE_1__ m; } ;
struct TYPE_9__ {int bits; scalar_t__ ssd; } ;
typedef TYPE_3__ DNXHDEncContext ;
typedef TYPE_4__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (TYPE_4__*,int ,int *,int *,int) ;

__attribute__((used)) static int FUNC_4(AVCodecContext *VAR_5, DNXHDEncContext *VAR_6)
{
    int VAR_7, VAR_8, VAR_9;
    int VAR_10 = VAR_1, VAR_11 = 0;
    int VAR_12, VAR_13, VAR_14;

    for (VAR_14 = 1; VAR_14 < VAR_5->qmax; VAR_14++) {
        VAR_6->qscale = VAR_14;
        VAR_5->execute2(VAR_5, VAR_4,
                        ((void*)0), ((void*)0), VAR_6->m.mb_height);
    }
    VAR_8 = VAR_9 = 2 << VAR_2;
    VAR_7 = VAR_6->lambda;

    for (;;) {
        int VAR_15 = 0;
        int VAR_16 = 0;
        if (VAR_7 == VAR_11) {
            VAR_7++;
            VAR_16 = 1;
        }
        for (VAR_13 = 0; VAR_13 < VAR_6->m.mb_height; VAR_13++) {
            for (VAR_12 = 0; VAR_12 < VAR_6->m.mb_width; VAR_12++) {
                unsigned VAR_17 = VAR_3;
                int VAR_18 = 1;
                int VAR_19 = VAR_13 * VAR_6->m.mb_width + VAR_12;
                int VAR_20 = 0;
                for (VAR_14 = 1; VAR_14 < VAR_5->qmax; VAR_14++) {
                    int VAR_21 = (VAR_14*VAR_6->m.mb_num) + VAR_19;
                    unsigned VAR_22 = VAR_6->mb_rc[VAR_21].bits * VAR_7 +
                                     ((unsigned) VAR_6->mb_rc[VAR_21].ssd << VAR_2);
                    if (VAR_22 < VAR_17) {
                        VAR_17 = VAR_22;
                        VAR_18 = VAR_14;
                        VAR_20 = VAR_21;
                    }
                }
                VAR_15 += VAR_6->mb_rc[VAR_20].bits;
                VAR_6->mb_qscale[VAR_19] = VAR_18;
                VAR_6->mb_bits[VAR_19] = VAR_6->mb_rc[VAR_20].bits;
            }
            VAR_15 = (VAR_15 + 31) & ~31;
            if (VAR_15 > VAR_6->frame_bits)
                break;
        }
        if (VAR_16) {
            if (VAR_15 > VAR_6->frame_bits)
                return FUNC_0(VAR_0);
            break;
        }
        if (VAR_15 < VAR_6->frame_bits) {
            VAR_10 = FUNC_2(VAR_7, VAR_10);
            if (VAR_11 != 0)
                VAR_7 = (VAR_7+VAR_11)>>1;
            else
                VAR_7 -= VAR_9;
            VAR_9 = FUNC_2((int64_t)VAR_9*5, VAR_1);
            VAR_8 = 1<<VAR_2;
            VAR_7 = FUNC_1(1, VAR_7);
            if (VAR_7 == VAR_10)
                break;
        } else {
            VAR_11 = FUNC_1(VAR_7, VAR_11);
            if (VAR_10 != VAR_1)
                VAR_7 = (VAR_7+VAR_10)>>1;
            else if ((int64_t)VAR_7 + VAR_8 > VAR_1)
                return FUNC_0(VAR_0);
            else
                VAR_7 += VAR_8;
            VAR_8 = FUNC_2((int64_t)VAR_8*5, VAR_1);
            VAR_9 = 1<<VAR_2;
        }
    }
    VAR_6->lambda = VAR_7;
    return 0;
}
