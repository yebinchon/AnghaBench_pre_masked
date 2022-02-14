
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int last_alpha ;
struct TYPE_8__ {int* linesize; int height; int width; int ** data; } ;
struct TYPE_7__ {scalar_t__ alpha_type; scalar_t__ subsampling; } ;
typedef TYPE_1__ SHQContext ;
typedef int GetBitContext ;
typedef TYPE_2__ AVFrame ;


 int VAR_0 ;
 int FUNC_0 (int const*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (TYPE_1__ const*,int *,int *,int *,int) ;
 int FUNC_2 (TYPE_1__ const*,int *,int*,int,int *,int) ;
 int FUNC_3 (int *,int const*,int) ;
 int FUNC_4 (int *,int,int) ;

__attribute__((used)) static int FUNC_5(const SHQContext *VAR_6, const uint8_t *VAR_7, int VAR_8, AVFrame *VAR_9, int VAR_10, int VAR_11, int VAR_12, int VAR_13)
{
    int VAR_14, VAR_15, VAR_16[5];
    int VAR_17 = VAR_9->linesize[0] * VAR_13;
    int VAR_18 = VAR_9->linesize[1] * VAR_13;
    int VAR_19 = VAR_9->linesize[2] * VAR_13;
    int VAR_20;

    if (VAR_6->alpha_type != VAR_2)
        VAR_20 = VAR_9->linesize[3] * VAR_13;

    if (VAR_12 < VAR_11 || VAR_12 - VAR_11 < 3 || VAR_12 > VAR_8)
        return VAR_0;

    VAR_16[0] = VAR_11;
    VAR_16[4] = VAR_12;
    for (VAR_15 = 1; VAR_15 < 4; VAR_15++) {
        uint32_t VAR_21, VAR_22;

        VAR_21 = VAR_16[VAR_15 - 1];
        VAR_22 = FUNC_0(VAR_7 + VAR_21);
        VAR_16[VAR_15] = VAR_21 + VAR_22;

        if (VAR_22 < 3 || VAR_16[VAR_15] > VAR_12 - 3)
            return VAR_0;
    }

    for (VAR_15 = 0; VAR_15 < 4; VAR_15++) {
        GetBitContext VAR_23;
        uint32_t VAR_24, VAR_25;
        int VAR_26, VAR_27;

        VAR_24 = VAR_16[VAR_15];
        VAR_25 = VAR_16[VAR_15 + 1];

        if ((VAR_14 = FUNC_3(&VAR_23, VAR_7 + VAR_24 + 3, VAR_25 - VAR_24 - 3)) < 0)
            return VAR_14;

        for (VAR_27 = VAR_15 * 16 * VAR_13; VAR_27 < VAR_9->height; VAR_27 += VAR_13 * 64) {
            uint8_t *VAR_28, *VAR_29, *VAR_30, *VAR_31;
            int VAR_32[4] = { 1024, 1024, 1024, 1024 };
            uint8_t VAR_33[16];

            FUNC_4(VAR_33, 255, sizeof(VAR_33));

            VAR_28 = VAR_9->data[0] + VAR_9->linesize[0] * (VAR_27 + VAR_10);
            if (VAR_6->subsampling == VAR_4) {
                VAR_29 = VAR_9->data[1] + VAR_9->linesize[1] * (VAR_27/2 + VAR_10);
                VAR_30 = VAR_9->data[2] + VAR_9->linesize[2] * (VAR_27/2 + VAR_10);
            } else {
                VAR_29 = VAR_9->data[1] + VAR_9->linesize[1] * (VAR_27 + VAR_10);
                VAR_30 = VAR_9->data[2] + VAR_9->linesize[2] * (VAR_27 + VAR_10);
            }
            if (VAR_6->alpha_type != VAR_2) {
                VAR_31 = VAR_9->data[3] + VAR_9->linesize[3] * (VAR_27 + VAR_10);
            }

            for (VAR_26 = 0; VAR_26 < VAR_9->width; VAR_26 += 16) {

                if ((VAR_14 = FUNC_2(VAR_6, &VAR_23, VAR_32, 0, VAR_28, VAR_17)) < 0)
                    return VAR_14;
                if ((VAR_14 = FUNC_2(VAR_6, &VAR_23, VAR_32, 0, VAR_28 + 8, VAR_17)) < 0)
                    return VAR_14;
                if ((VAR_14 = FUNC_2(VAR_6, &VAR_23, VAR_32, 0, VAR_28 + 8 * VAR_17, VAR_17)) < 0)
                    return VAR_14;
                if ((VAR_14 = FUNC_2(VAR_6, &VAR_23, VAR_32, 0, VAR_28 + 8 * VAR_17 + 8, VAR_17)) < 0)
                    return VAR_14;





                if ((VAR_14 = FUNC_2(VAR_6, &VAR_23, VAR_32, 1, VAR_29, VAR_18)) < 0)
                    return VAR_14;
                if ((VAR_14 = FUNC_2(VAR_6, &VAR_23, VAR_32, 2, VAR_30, VAR_19)) < 0)
                    return VAR_14;

                if (VAR_6->subsampling != VAR_4) {

                    if ((VAR_14 = FUNC_2(VAR_6, &VAR_23, VAR_32, 1, VAR_29 + 8 * VAR_18, VAR_18)) < 0)
                        return VAR_14;
                    if ((VAR_14 = FUNC_2(VAR_6, &VAR_23, VAR_32, 2, VAR_30 + 8 * VAR_19, VAR_19)) < 0)
                        return VAR_14;

                    if (VAR_6->subsampling == VAR_5) {

                        if ((VAR_14 = FUNC_2(VAR_6, &VAR_23, VAR_32, 1, VAR_29 + 8, VAR_18)) < 0)
                            return VAR_14;
                        if ((VAR_14 = FUNC_2(VAR_6, &VAR_23, VAR_32, 2, VAR_30 + 8, VAR_19)) < 0)
                            return VAR_14;
                        if ((VAR_14 = FUNC_2(VAR_6, &VAR_23, VAR_32, 1, VAR_29 + 8 * VAR_18 + 8, VAR_18)) < 0)
                            return VAR_14;
                        if ((VAR_14 = FUNC_2(VAR_6, &VAR_23, VAR_32, 2, VAR_30 + 8 * VAR_19 + 8, VAR_19)) < 0)
                            return VAR_14;

                        VAR_29 += 8;
                        VAR_30 += 8;
                    }
                }
                VAR_28 += 16;
                VAR_29 += 8;
                VAR_30 += 8;

                if (VAR_6->alpha_type == VAR_3) {

                    if ((VAR_14 = FUNC_1(VAR_6, &VAR_23, VAR_33, VAR_31, VAR_20)) < 0)
                        return VAR_14;
                    if ((VAR_14 = FUNC_1(VAR_6, &VAR_23, VAR_33, VAR_31 + 8 * VAR_20, VAR_20)) < 0)
                        return VAR_14;
                    VAR_31 += 16;
                } else if (VAR_6->alpha_type == VAR_1) {

                    if ((VAR_14 = FUNC_2(VAR_6, &VAR_23, VAR_32, 3, VAR_31, VAR_20)) < 0)
                        return VAR_14;
                    if ((VAR_14 = FUNC_2(VAR_6, &VAR_23, VAR_32, 3, VAR_31 + 8, VAR_20)) < 0)
                        return VAR_14;
                    if ((VAR_14 = FUNC_2(VAR_6, &VAR_23, VAR_32, 3, VAR_31 + 8 * VAR_20, VAR_20)) < 0)
                        return VAR_14;
                    if ((VAR_14 = FUNC_2(VAR_6, &VAR_23, VAR_32, 3, VAR_31 + 8 * VAR_20 + 8, VAR_20)) < 0)
                        return VAR_14;
                    VAR_31 += 16;
                }
            }
        }
    }

    return 0;
}
