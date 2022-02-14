
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int q_ceil; } ;
typedef TYPE_1__ VC2EncContext ;
struct TYPE_5__ {int bits_ceil; int bits_floor; int quant_idx; int bytes; TYPE_1__* ctx; } ;
typedef TYPE_2__ SliceArgs ;
typedef int AVCodecContext ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 void* FUNC_2 (int,int,int) ;
 int FUNC_3 (TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_4(AVCodecContext *VAR_0, void *VAR_1)
{
    SliceArgs *VAR_2 = VAR_1;
    VC2EncContext *VAR_3 = VAR_2->ctx;
    const int VAR_4 = VAR_2->bits_ceil;
    const int VAR_5 = VAR_2->bits_floor;
    int VAR_6[2] = {-1, -1};
    int VAR_7 = VAR_2->quant_idx, VAR_8 = 1;
    int VAR_9, VAR_10 = FUNC_3(VAR_2, VAR_7);
    while ((VAR_10 > VAR_4) || (VAR_10 < VAR_5)) {
        const int VAR_11 = VAR_10 > VAR_4 ? +VAR_8 : -VAR_8;
        VAR_7 = FUNC_2(VAR_7 + VAR_11, 0, VAR_3->q_ceil-1);
        VAR_10 = FUNC_3(VAR_2, VAR_7);
        if (VAR_6[1] == VAR_7) {
            VAR_7 = FUNC_0(VAR_6[0], VAR_7);
            VAR_10 = VAR_7 == VAR_6[0] ? VAR_9 : VAR_10;
            break;
        }
        VAR_8 = FUNC_2(VAR_8/2, 1, (VAR_3->q_ceil-1)/2);
        VAR_6[1] = VAR_6[0];
        VAR_6[0] = VAR_7;
        VAR_9 = VAR_10;
    }
    VAR_2->quant_idx = FUNC_2(VAR_7, 0, VAR_3->q_ceil-1);
    VAR_2->bytes = FUNC_1(VAR_10 >> 3);
    return 0;
}
