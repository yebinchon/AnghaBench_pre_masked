
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint16_t ;
typedef int ptrdiff_t ;
struct TYPE_14__ {int coded_width; scalar_t__ coded_height; TYPE_4__* priv_data; } ;
struct TYPE_13__ {int* linesize; scalar_t__* data; } ;
struct TYPE_10__ {int (* add_left_pred_int16 ) (int*,int*,int const,int,int) ;} ;
struct TYPE_12__ {int interlaced; int bps; int max; int planes; int slice_height; scalar_t__ decorrelate; TYPE_2__ llviddsp; TYPE_1__* vlc; TYPE_3__** slices; scalar_t__ buf; int * vshift; int * hshift; TYPE_5__* p; } ;
struct TYPE_11__ {int size; scalar_t__ start; } ;
struct TYPE_9__ {int bits; int table; } ;
typedef TYPE_4__ MagicYUVContext ;
typedef int GetBitContext ;
typedef TYPE_5__ AVFrame ;
typedef TYPE_6__ AVCodecContext ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,scalar_t__) ;



 int FUNC_2 (TYPE_6__*,char*,int) ;
 int FUNC_3 (int *,int const) ;
 int const FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int ,int) ;
 int FUNC_6 (int *,scalar_t__,int ) ;
 int FUNC_7 (int*,int*,int*,int,int*,int*,int const) ;
 int FUNC_8 (int*,int*,int const,int,int) ;
 int FUNC_9 (int*,int*,int const,int,int) ;
 int FUNC_10 (int*,int*,int const,int,int) ;
 int FUNC_11 (int*,int*,int const,int,int) ;
 int FUNC_12 (int*,int*,int const,int,int) ;
 int FUNC_13 (int*,int*,int const,int,int) ;
 int FUNC_14 (int*,int*,int const,int,int) ;

__attribute__((used)) static int FUNC_15(AVCodecContext *VAR_1, void *VAR_2,
                               int VAR_3, int VAR_4)
{
    MagicYUVContext *VAR_5 = VAR_1->priv_data;
    int VAR_6 = VAR_5->interlaced;
    const int VAR_7 = VAR_5->bps;
    const int VAR_8 = VAR_5->max - 1;
    AVFrame *VAR_9 = VAR_5->p;
    int VAR_10, VAR_11, VAR_12;
    GetBitContext VAR_13;
    uint16_t *VAR_14;

    for (VAR_10 = 0; VAR_10 < VAR_5->planes; VAR_10++) {
        int VAR_15, VAR_16, VAR_17;
        int VAR_18 = FUNC_0(FUNC_1(VAR_5->slice_height, VAR_1->coded_height - VAR_3 * VAR_5->slice_height), VAR_5->vshift[VAR_10]);
        int VAR_19 = FUNC_0(VAR_1->coded_width, VAR_5->hshift[VAR_10]);
        int VAR_20 = FUNC_0(VAR_5->slice_height, VAR_5->vshift[VAR_10]);
        ptrdiff_t VAR_21 = (VAR_9->linesize[VAR_10] / 2) * (1 + VAR_6);
        ptrdiff_t VAR_22 = VAR_9->linesize[VAR_10] / 2;
        int VAR_23, VAR_24;
        int VAR_25 = FUNC_6(&VAR_13, VAR_5->buf + VAR_5->slices[VAR_10][VAR_3].start,
                                 VAR_5->slices[VAR_10][VAR_3].size);

        if (VAR_25 < 0)
            return VAR_25;

        VAR_23 = FUNC_3(&VAR_13, 8);
        VAR_24 = FUNC_3(&VAR_13, 8);

        VAR_14 = (uint16_t *)VAR_9->data[VAR_10] + VAR_3 * VAR_20 * VAR_22;
        if (VAR_23 & 1) {
            if (FUNC_4(&VAR_13) < VAR_7 * VAR_19 * VAR_18)
                return VAR_0;
            for (VAR_11 = 0; VAR_11 < VAR_18; VAR_11++) {
                for (VAR_12 = 0; VAR_12 < VAR_19; VAR_12++)
                    VAR_14[VAR_12] = FUNC_3(&VAR_13, VAR_7);

                VAR_14 += VAR_22;
            }
        } else {
            for (VAR_11 = 0; VAR_11 < VAR_18; VAR_11++) {
                for (VAR_12 = 0; VAR_12 < VAR_19; VAR_12++) {
                    int VAR_26;
                    if (FUNC_4(&VAR_13) <= 0)
                        return VAR_0;

                    VAR_26 = FUNC_5(&VAR_13, VAR_5->vlc[VAR_10].table, VAR_5->vlc[VAR_10].bits, 3);
                    if (VAR_26 < 0)
                        return VAR_0;

                    VAR_14[VAR_12] = VAR_8 - VAR_26;
                }
                VAR_14 += VAR_22;
            }
        }

        switch (VAR_24) {
        case 129:
            VAR_14 = (uint16_t *)VAR_9->data[VAR_10] + VAR_3 * VAR_20 * VAR_22;
            VAR_5->llviddsp.add_left_pred_int16(VAR_14, VAR_14, VAR_8, VAR_19, 0);
            VAR_14 += VAR_22;
            if (VAR_6) {
                VAR_5->llviddsp.add_left_pred_int16(VAR_14, VAR_14, VAR_8, VAR_19, 0);
                VAR_14 += VAR_22;
            }
            for (VAR_11 = 1 + VAR_6; VAR_11 < VAR_18; VAR_11++) {
                VAR_5->llviddsp.add_left_pred_int16(VAR_14, VAR_14, VAR_8, VAR_19, VAR_14[-VAR_21]);
                VAR_14 += VAR_22;
            }
            break;
        case 130:
            VAR_14 = (uint16_t *)VAR_9->data[VAR_10] + VAR_3 * VAR_20 * VAR_22;
            VAR_5->llviddsp.add_left_pred_int16(VAR_14, VAR_14, VAR_8, VAR_19, 0);
            VAR_14 += VAR_22;
            if (VAR_6) {
                VAR_5->llviddsp.add_left_pred_int16(VAR_14, VAR_14, VAR_8, VAR_19, 0);
                VAR_14 += VAR_22;
            }
            for (VAR_11 = 1 + VAR_6; VAR_11 < VAR_18; VAR_11++) {
                VAR_17 = VAR_14[-VAR_21];
                VAR_15 = VAR_17 + VAR_14[0];
                VAR_14[0] = VAR_15 & VAR_8;
                for (VAR_12 = 1; VAR_12 < VAR_19; VAR_12++) {
                    VAR_17 = VAR_14[VAR_12 - VAR_21];
                    VAR_16 = VAR_14[VAR_12 - (VAR_21 + 1)];
                    VAR_15 += VAR_17 - VAR_16 + VAR_14[VAR_12];
                    VAR_14[VAR_12] = VAR_15 & VAR_8;
                }
                VAR_14 += VAR_22;
            }
            break;
        case 128:
            VAR_14 = (uint16_t *)VAR_9->data[VAR_10] + VAR_3 * VAR_20 * VAR_22;
            VAR_5->llviddsp.add_left_pred_int16(VAR_14, VAR_14, VAR_8, VAR_19, 0);
            VAR_14 += VAR_22;
            if (VAR_6) {
                VAR_5->llviddsp.add_left_pred_int16(VAR_14, VAR_14, VAR_8, VAR_19, 0);
                VAR_14 += VAR_22;
            }
            VAR_16 = VAR_15 = VAR_14[0];
            for (VAR_11 = 1 + VAR_6; VAR_11 < VAR_18; VAR_11++) {
                FUNC_7(VAR_14, VAR_14 - VAR_21, VAR_14, VAR_19, &VAR_15, &VAR_16, VAR_8);
                VAR_16 = VAR_15 = VAR_14[0];
                VAR_14 += VAR_22;
            }
            break;
        default:
            FUNC_2(VAR_1, "Unknown prediction: %d", VAR_24);
        }
    }

    if (VAR_5->decorrelate) {
        int VAR_27 = FUNC_1(VAR_5->slice_height, VAR_1->coded_height - VAR_3 * VAR_5->slice_height);
        int VAR_28 = VAR_1->coded_width;
        uint16_t *VAR_29 = (uint16_t *)VAR_9->data[0] + VAR_3 * VAR_5->slice_height * VAR_9->linesize[0] / 2;
        uint16_t *VAR_30 = (uint16_t *)VAR_9->data[1] + VAR_3 * VAR_5->slice_height * VAR_9->linesize[1] / 2;
        uint16_t *VAR_31 = (uint16_t *)VAR_9->data[2] + VAR_3 * VAR_5->slice_height * VAR_9->linesize[2] / 2;

        for (VAR_10 = 0; VAR_10 < VAR_27; VAR_10++) {
            for (VAR_11 = 0; VAR_11 < VAR_28; VAR_11++) {
                VAR_31[VAR_11] = (VAR_31[VAR_11] + VAR_30[VAR_11]) & VAR_8;
                VAR_29[VAR_11] = (VAR_29[VAR_11] + VAR_30[VAR_11]) & VAR_8;
            }
            VAR_31 += VAR_9->linesize[0] / 2;
            VAR_30 += VAR_9->linesize[1] / 2;
            VAR_29 += VAR_9->linesize[2] / 2;
        }
    }

    return 0;
}
