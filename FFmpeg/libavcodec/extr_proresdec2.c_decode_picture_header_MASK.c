
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_10__ {int width; int height; TYPE_2__* priv_data; } ;
struct TYPE_9__ {int mb_width; int mb_height; int slice_count; TYPE_1__* slices; scalar_t__ frame_type; } ;
struct TYPE_8__ {int const* data; int mb_x; int mb_y; int mb_count; int data_size; } ;
typedef TYPE_1__ SliceContext ;
typedef TYPE_2__ ProresContext ;
typedef TYPE_3__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int const*) ;
 unsigned int FUNC_2 (int const*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (TYPE_1__**) ;
 int FUNC_4 (TYPE_3__*,int ,char*,...) ;
 TYPE_1__* FUNC_5 (int,int) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(AVCodecContext *VAR_4, const uint8_t *VAR_5, const int VAR_6)
{
    ProresContext *VAR_7 = VAR_4->priv_data;
    int VAR_8, VAR_9, VAR_10;
    unsigned VAR_11;
    int VAR_12, VAR_13;
    int VAR_14, VAR_15, VAR_16;
    const uint8_t *VAR_17, *VAR_18;

    VAR_9 = VAR_5[0] >> 3;
    if (VAR_9 < 8 || VAR_9 > VAR_6) {
        FUNC_4(VAR_4, VAR_1, "error, wrong picture header size\n");
        return VAR_0;
    }

    VAR_11 = FUNC_2(VAR_5 + 1);
    if (VAR_11 > VAR_6) {
        FUNC_4(VAR_4, VAR_1, "error, wrong picture data size\n");
        return VAR_0;
    }

    VAR_12 = VAR_5[7] >> 4;
    VAR_13 = VAR_5[7] & 0xF;
    if (VAR_12 > 3 || VAR_13) {
        FUNC_4(VAR_4, VAR_1, "unsupported slice resolution: %dx%d\n",
               1 << VAR_12, 1 << VAR_13);
        return VAR_0;
    }

    VAR_7->mb_width = (VAR_4->width + 15) >> 4;
    if (VAR_7->frame_type)
        VAR_7->mb_height = (VAR_4->height + 31) >> 5;
    else
        VAR_7->mb_height = (VAR_4->height + 15) >> 4;



    VAR_10 = VAR_7->mb_height * ((VAR_7->mb_width >> VAR_12) +
                                    FUNC_6(VAR_7->mb_width & (1 << VAR_12) - 1));

    if (VAR_7->slice_count != VAR_10 || !VAR_7->slices) {
        FUNC_3(&VAR_7->slices);
        VAR_7->slice_count = 0;
        VAR_7->slices = FUNC_5(VAR_10, sizeof(*VAR_7->slices));
        if (!VAR_7->slices)
            return FUNC_0(VAR_3);
        VAR_7->slice_count = VAR_10;
    }

    if (!VAR_10)
        return FUNC_0(VAR_2);

    if (VAR_9 + VAR_10*2 > VAR_6) {
        FUNC_4(VAR_4, VAR_1, "error, wrong slice count\n");
        return VAR_0;
    }


    VAR_18 = VAR_5 + VAR_9;
    VAR_17 = VAR_18 + VAR_10*2;

    VAR_14 = 1 << VAR_12;
    VAR_15 = 0;
    VAR_16 = 0;

    for (VAR_8 = 0; VAR_8 < VAR_10; VAR_8++) {
        SliceContext *VAR_19 = &VAR_7->slices[VAR_8];

        VAR_19->data = VAR_17;
        VAR_17 += FUNC_1(VAR_18 + VAR_8*2);

        while (VAR_7->mb_width - VAR_15 < VAR_14)
            VAR_14 >>= 1;

        VAR_19->mb_x = VAR_15;
        VAR_19->mb_y = VAR_16;
        VAR_19->mb_count = VAR_14;
        VAR_19->data_size = VAR_17 - VAR_19->data;

        if (VAR_19->data_size < 6) {
            FUNC_4(VAR_4, VAR_1, "error, wrong slice data size\n");
            return VAR_0;
        }

        VAR_15 += VAR_14;
        if (VAR_15 == VAR_7->mb_width) {
            VAR_14 = 1 << VAR_12;
            VAR_15 = 0;
            VAR_16++;
        }
        if (VAR_17 > VAR_5 + VAR_6) {
            FUNC_4(VAR_4, VAR_1, "error, slice out of bounds\n");
            return VAR_0;
        }
    }

    if (VAR_15 || VAR_16 != VAR_7->mb_height) {
        FUNC_4(VAR_4, VAR_1, "error wrong mb count y %d h %d\n",
               VAR_16, VAR_7->mb_height);
        return VAR_0;
    }

    return VAR_11;
}
