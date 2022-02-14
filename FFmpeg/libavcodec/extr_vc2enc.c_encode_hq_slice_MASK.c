
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_14__ {int prefix_bytes; int wavelet_depth; int size_scaler; TYPE_1__* plane; scalar_t__** quant; } ;
typedef TYPE_2__ VC2EncContext ;
struct TYPE_16__ {int* buf; } ;
struct TYPE_15__ {int x; int y; int quant_idx; int bytes; TYPE_4__ pb; TYPE_2__* ctx; } ;
struct TYPE_13__ {int ** band; } ;
typedef TYPE_3__ SliceArgs ;
typedef TYPE_4__ PutBitContext ;
typedef int AVCodecContext ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (scalar_t__,int ) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_2__*,TYPE_4__*,int const,int const,int *,int ) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (int ,int,int) ;
 int FUNC_6 (TYPE_4__*,int,int const) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (TYPE_4__*,int) ;

__attribute__((used)) static int FUNC_10(AVCodecContext *VAR_1, void *VAR_2)
{
    SliceArgs *VAR_3 = VAR_2;
    VC2EncContext *VAR_4 = VAR_3->ctx;
    PutBitContext *VAR_5 = &VAR_3->pb;
    const int VAR_6 = VAR_3->x;
    const int VAR_7 = VAR_3->y;
    const int VAR_8 = VAR_3->quant_idx;
    const int VAR_9 = VAR_3->bytes;
    uint8_t VAR_10[VAR_0][4];
    int VAR_11, VAR_12, VAR_13;


    FUNC_5(FUNC_8(VAR_5), 0, VAR_4->prefix_bytes);
    FUNC_9(VAR_5, VAR_4->prefix_bytes);

    FUNC_6(VAR_5, 8, VAR_8);


    for (VAR_12 = 0; VAR_12 < VAR_4->wavelet_depth; VAR_12++)
        for (VAR_13 = !!VAR_12; VAR_13 < 4; VAR_13++)
            VAR_10[VAR_12][VAR_13] = FUNC_1(VAR_8 - VAR_4->quant[VAR_12][VAR_13], 0);


    for (VAR_11 = 0; VAR_11 < 3; VAR_11++) {
        int VAR_14, VAR_15, VAR_16, VAR_17;
        VAR_14 = FUNC_7(VAR_5) >> 3;
        FUNC_6(VAR_5, 8, 0);
        for (VAR_12 = 0; VAR_12 < VAR_4->wavelet_depth; VAR_12++) {
            for (VAR_13 = !!VAR_12; VAR_13 < 4; VAR_13++) {
                FUNC_3(VAR_4, VAR_5, VAR_6, VAR_7,
                               &VAR_4->plane[VAR_11].band[VAR_12][VAR_13],
                               VAR_10[VAR_12][VAR_13]);
            }
        }
        FUNC_2(VAR_5);
        VAR_15 = (FUNC_7(VAR_5) >> 3) - VAR_14 - 1;
        if (VAR_11 == 2) {
            int VAR_18 = VAR_9 - (FUNC_7(VAR_5) >> 3);
            VAR_16 = FUNC_0((VAR_15 + VAR_18), VAR_4->size_scaler)/VAR_4->size_scaler;
            VAR_17 = (VAR_16*VAR_4->size_scaler) - VAR_15;
        } else {
            VAR_16 = FUNC_0(VAR_15, VAR_4->size_scaler)/VAR_4->size_scaler;
            VAR_17 = (VAR_16*VAR_4->size_scaler) - VAR_15;
        }
        VAR_5->buf[VAR_14] = VAR_16;
        FUNC_4(VAR_5);

        FUNC_5(FUNC_8(VAR_5), 0xFF, VAR_17);
        FUNC_9(VAR_5, VAR_17);
    }

    return 0;
}
