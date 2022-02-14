
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_10__ {TYPE_3__* priv_data; } ;
struct TYPE_9__ {int aligned_width; TYPE_1__* frame; } ;
struct TYPE_8__ {int slice_h; int src_size; int y_off; int p_frame; int block; int * src; } ;
struct TYPE_7__ {int* linesize; int ** data; } ;
typedef int GetBitContext ;
typedef TYPE_2__ FICThreadContext ;
typedef TYPE_3__ FICContext ;
typedef TYPE_4__ AVCodecContext ;


 int FUNC_0 (TYPE_3__*,int *,int *,int,int ,int *) ;
 int FUNC_1 (int *,int *,int) ;

__attribute__((used)) static int FUNC_2(AVCodecContext *VAR_0, void *VAR_1)
{
    FICContext *VAR_2 = VAR_0->priv_data;
    FICThreadContext *VAR_3 = VAR_1;
    GetBitContext VAR_4;
    uint8_t *VAR_5 = VAR_3->src;
    int VAR_6 = VAR_3->slice_h;
    int VAR_7 = VAR_3->src_size;
    int VAR_8 = VAR_3->y_off;
    int VAR_9, VAR_10, VAR_11, VAR_12;

    VAR_12 = FUNC_1(&VAR_4, VAR_5, VAR_7);
    if (VAR_12 < 0)
        return VAR_12;

    for (VAR_11 = 0; VAR_11 < 3; VAR_11++) {
        int VAR_13 = VAR_2->frame->linesize[VAR_11];
        uint8_t* VAR_14 = VAR_2->frame->data[VAR_11] + (VAR_8 >> !!VAR_11) * VAR_13;

        for (VAR_10 = 0; VAR_10 < (VAR_6 >> !!VAR_11); VAR_10 += 8) {
            for (VAR_9 = 0; VAR_9 < (VAR_2->aligned_width >> !!VAR_11); VAR_9 += 8) {
                int VAR_15;

                if ((VAR_15 = FUNC_0(VAR_2, &VAR_4, VAR_14 + VAR_9, VAR_13,
                                            VAR_3->block, &VAR_3->p_frame)) != 0)
                    return VAR_15;
            }

            VAR_14 += 8 * VAR_13;
        }
    }

    return 0;
}
