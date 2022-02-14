
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ buffer; scalar_t__ buffer_start; } ;
struct TYPE_12__ {TYPE_2__* frame; TYPE_1__* avctx; TYPE_4__ gb; } ;
struct TYPE_11__ {int** data; int* linesize; } ;
struct TYPE_10__ {int height; int width; } ;
typedef TYPE_3__ MmContext ;
typedef TYPE_4__ GetByteContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*,scalar_t__,int) ;

__attribute__((used)) static int FUNC_4(MmContext * VAR_1, int VAR_2, int VAR_3)
{
    int VAR_4 = FUNC_2(&VAR_1->gb);
    int VAR_5 = 0;
    GetByteContext VAR_6;

    if (FUNC_1(&VAR_1->gb) < VAR_4)
        return VAR_0;

    FUNC_3(&VAR_6, VAR_1->gb.buffer + VAR_4, FUNC_1(&VAR_1->gb) - VAR_4);
    while (VAR_1->gb.buffer < VAR_6.buffer_start) {
        int VAR_7, VAR_8;
        int VAR_9 = FUNC_0(&VAR_1->gb);
        int VAR_10 = FUNC_0(&VAR_1->gb) + ((VAR_9 & 0x80) << 1);
        VAR_9 &= 0x7F;

        if (VAR_9==0) {
            VAR_5 += VAR_10;
            continue;
        }

        if (VAR_5 + VAR_3 >= VAR_1->avctx->height)
            return 0;

        for(VAR_7=0; VAR_7<VAR_9; VAR_7++) {
            int VAR_11 = FUNC_0(&VAR_1->gb);
            for(VAR_8=0; VAR_8<8; VAR_8++) {
                int VAR_12 = (VAR_11 >> (7-VAR_8)) & 1;
                if (VAR_10 + VAR_2 >= VAR_1->avctx->width)
                    return VAR_0;
                if (VAR_12) {
                    int VAR_13 = FUNC_0(&VAR_6);
                    VAR_1->frame->data[0][VAR_5*VAR_1->frame->linesize[0] + VAR_10] = VAR_13;
                    if (VAR_2)
                        VAR_1->frame->data[0][VAR_5*VAR_1->frame->linesize[0] + VAR_10 + 1] = VAR_13;
                    if (VAR_3) {
                        VAR_1->frame->data[0][(VAR_5+1)*VAR_1->frame->linesize[0] + VAR_10] = VAR_13;
                        if (VAR_2)
                            VAR_1->frame->data[0][(VAR_5+1)*VAR_1->frame->linesize[0] + VAR_10 + 1] = VAR_13;
                    }
                }
                VAR_10 += 1 + VAR_2;
            }
        }

        VAR_5 += 1 + VAR_3;
    }

    return 0;
}
