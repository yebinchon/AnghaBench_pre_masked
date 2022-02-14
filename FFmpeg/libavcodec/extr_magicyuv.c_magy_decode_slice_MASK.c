
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


typedef int uint8_t ;
typedef int ptrdiff_t ;
struct TYPE_14__ {int coded_height; int coded_width; TYPE_4__* priv_data; } ;
struct TYPE_13__ {int* linesize; int** data; } ;
struct TYPE_10__ {int (* add_bytes ) (int*,int*,int) ;int (* add_median_pred ) (int*,int*,int*,int,int*,int*) ;int (* add_left_pred ) (int*,int*,int,int) ;int (* add_gradient_pred ) (int*,int,int) ;} ;
struct TYPE_12__ {int interlaced; int planes; int slice_height; TYPE_2__ llviddsp; scalar_t__ decorrelate; TYPE_1__* vlc; TYPE_3__** slices; scalar_t__ buf; int * vshift; int * hshift; TYPE_5__* p; } ;
struct TYPE_11__ {int size; scalar_t__ start; } ;
struct TYPE_9__ {int bits; int table; } ;
typedef TYPE_4__ MagicYUVContext ;
typedef int GetBitContext ;
typedef TYPE_5__ AVFrame ;
typedef TYPE_6__ AVCodecContext ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int) ;



 int FUNC_2 (TYPE_6__*,char*,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int ,int) ;
 int FUNC_6 (int *,scalar_t__,int ) ;
 int FUNC_7 (int*,int*,int,int) ;
 int FUNC_8 (int*,int*,int) ;
 int FUNC_9 (int*,int*,int) ;
 int FUNC_10 (int*,int*,int,int) ;
 int FUNC_11 (int*,int*,int,int) ;
 int FUNC_12 (int*,int*,int,int) ;
 int FUNC_13 (int*,int*,int,int) ;
 int FUNC_14 (int*,int,int) ;
 int FUNC_15 (int*,int*,int,int) ;
 int FUNC_16 (int*,int*,int,int) ;
 int FUNC_17 (int*,int*,int*,int,int*,int*) ;

__attribute__((used)) static int FUNC_18(AVCodecContext *VAR_1, void *VAR_2,
                             int VAR_3, int VAR_4)
{
    MagicYUVContext *VAR_5 = VAR_1->priv_data;
    int VAR_6 = VAR_5->interlaced;
    AVFrame *VAR_7 = VAR_5->p;
    int VAR_8, VAR_9, VAR_10, VAR_11;
    GetBitContext VAR_12;
    uint8_t *VAR_13;

    for (VAR_8 = 0; VAR_8 < VAR_5->planes; VAR_8++) {
        int VAR_14, VAR_15, VAR_16;
        int VAR_17 = FUNC_0(FUNC_1(VAR_5->slice_height, VAR_1->coded_height - VAR_3 * VAR_5->slice_height), VAR_5->vshift[VAR_8]);
        int VAR_18 = FUNC_0(VAR_1->coded_width, VAR_5->hshift[VAR_8]);
        int VAR_19 = FUNC_0(VAR_5->slice_height, VAR_5->vshift[VAR_8]);
        ptrdiff_t VAR_20 = VAR_7->linesize[VAR_8] * (1 + VAR_6);
        ptrdiff_t VAR_21 = VAR_7->linesize[VAR_8];
        int VAR_22, VAR_23;
        int VAR_24 = FUNC_6(&VAR_12, VAR_5->buf + VAR_5->slices[VAR_8][VAR_3].start,
                                 VAR_5->slices[VAR_8][VAR_3].size);

        if (VAR_24 < 0)
            return VAR_24;

        VAR_22 = FUNC_3(&VAR_12, 8);
        VAR_23 = FUNC_3(&VAR_12, 8);

        VAR_13 = VAR_7->data[VAR_8] + VAR_3 * VAR_19 * VAR_21;
        if (VAR_22 & 1) {
            if (FUNC_4(&VAR_12) < 8* VAR_18 * VAR_17)
                return VAR_0;
            for (VAR_9 = 0; VAR_9 < VAR_17; VAR_9++) {
                for (VAR_10 = 0; VAR_10 < VAR_18; VAR_10++)
                    VAR_13[VAR_10] = FUNC_3(&VAR_12, 8);

                VAR_13 += VAR_21;
            }
        } else {
            for (VAR_9 = 0; VAR_9 < VAR_17; VAR_9++) {
                for (VAR_10 = 0; VAR_10 < VAR_18; VAR_10++) {
                    int VAR_25;
                    if (FUNC_4(&VAR_12) <= 0)
                        return VAR_0;

                    VAR_25 = FUNC_5(&VAR_12, VAR_5->vlc[VAR_8].table, VAR_5->vlc[VAR_8].bits, 3);
                    if (VAR_25 < 0)
                        return VAR_0;

                    VAR_13[VAR_10] = 255 - VAR_25;
                }
                VAR_13 += VAR_21;
            }
        }

        switch (VAR_23) {
        case 129:
            VAR_13 = VAR_7->data[VAR_8] + VAR_3 * VAR_19 * VAR_21;
            VAR_5->llviddsp.add_left_pred(VAR_13, VAR_13, VAR_18, 0);
            VAR_13 += VAR_21;
            if (VAR_6) {
                VAR_5->llviddsp.add_left_pred(VAR_13, VAR_13, VAR_18, 0);
                VAR_13 += VAR_21;
            }
            for (VAR_9 = 1 + VAR_6; VAR_9 < VAR_17; VAR_9++) {
                VAR_5->llviddsp.add_left_pred(VAR_13, VAR_13, VAR_18, VAR_13[-VAR_20]);
                VAR_13 += VAR_21;
            }
            break;
        case 130:
            VAR_13 = VAR_7->data[VAR_8] + VAR_3 * VAR_19 * VAR_21;
            VAR_5->llviddsp.add_left_pred(VAR_13, VAR_13, VAR_18, 0);
            VAR_13 += VAR_21;
            if (VAR_6) {
                VAR_5->llviddsp.add_left_pred(VAR_13, VAR_13, VAR_18, 0);
                VAR_13 += VAR_21;
            }
            VAR_11 = FUNC_1(VAR_18, 32);
            for (VAR_9 = 1 + VAR_6; VAR_9 < VAR_17; VAR_9++) {
                VAR_16 = VAR_13[-VAR_20];
                VAR_14 = VAR_16 + VAR_13[0];
                VAR_13[0] = VAR_14;
                for (VAR_10 = 1; VAR_10 < VAR_11; VAR_10++) {
                    VAR_16 = VAR_13[VAR_10 - VAR_20];
                    VAR_15 = VAR_13[VAR_10 - (VAR_20 + 1)];
                    VAR_14 += VAR_16 - VAR_15 + VAR_13[VAR_10];
                    VAR_13[VAR_10] = VAR_14;
                }
                if (VAR_18 > 32)
                    VAR_5->llviddsp.add_gradient_pred(VAR_13 + 32, VAR_20, VAR_18 - 32);
                VAR_13 += VAR_21;
            }
            break;
        case 128:
            VAR_13 = VAR_7->data[VAR_8] + VAR_3 * VAR_19 * VAR_21;
            VAR_5->llviddsp.add_left_pred(VAR_13, VAR_13, VAR_18, 0);
            VAR_13 += VAR_21;
            if (VAR_6) {
                VAR_5->llviddsp.add_left_pred(VAR_13, VAR_13, VAR_18, 0);
                VAR_13 += VAR_21;
            }
            VAR_15 = VAR_14 = VAR_13[0];
            for (VAR_9 = 1 + VAR_6; VAR_9 < VAR_17; VAR_9++) {
                VAR_5->llviddsp.add_median_pred(VAR_13, VAR_13 - VAR_20,
                                             VAR_13, VAR_18, &VAR_14, &VAR_15);
                VAR_15 = VAR_14 = VAR_13[0];
                VAR_13 += VAR_21;
            }
            break;
        default:
            FUNC_2(VAR_1, "Unknown prediction: %d", VAR_23);
        }
    }

    if (VAR_5->decorrelate) {
        int VAR_26 = FUNC_1(VAR_5->slice_height, VAR_1->coded_height - VAR_3 * VAR_5->slice_height);
        int VAR_27 = VAR_1->coded_width;
        uint8_t *VAR_28 = VAR_7->data[0] + VAR_3 * VAR_5->slice_height * VAR_7->linesize[0];
        uint8_t *VAR_29 = VAR_7->data[1] + VAR_3 * VAR_5->slice_height * VAR_7->linesize[1];
        uint8_t *VAR_30 = VAR_7->data[2] + VAR_3 * VAR_5->slice_height * VAR_7->linesize[2];

        for (VAR_8 = 0; VAR_8 < VAR_26; VAR_8++) {
            VAR_5->llviddsp.add_bytes(VAR_28, VAR_29, VAR_27);
            VAR_5->llviddsp.add_bytes(VAR_30, VAR_29, VAR_27);
            VAR_28 += VAR_7->linesize[0];
            VAR_29 += VAR_7->linesize[1];
            VAR_30 += VAR_7->linesize[2];
        }
    }

    return 0;
}
