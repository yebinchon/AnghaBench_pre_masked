
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_8__ {int width; int height; TYPE_1__* priv_data; } ;
struct TYPE_7__ {int nbcount; int* blocks; int nby; int nbx; int * run_model; int * op_model; int * mv_model; int * sxy_model; int last_frame; int current_frame; int count_model; int fill_model; int range_model; int rc; int gb; } ;
typedef TYPE_1__ SCPRContext ;
typedef int GetByteContext ;
typedef TYPE_2__ AVCodecContext ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (TYPE_2__*,size_t,int,int,int,size_t,size_t*,size_t*,int,int,int*,int*,int,int,int,int*,int*) ;
 int FUNC_4 (TYPE_1__*,size_t*,size_t*,size_t*,int*,int*) ;
 int FUNC_5 (TYPE_1__*,int ,int,int,...) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int*,int ,int) ;

__attribute__((used)) static int FUNC_8(AVCodecContext *VAR_1,
                        uint32_t *VAR_2, int VAR_3,
                        uint32_t *VAR_4, int VAR_5)
{
    SCPRContext *VAR_6 = VAR_1->priv_data;
    GetByteContext *VAR_7 = &VAR_6->gb;
    int VAR_8, VAR_9 = 0, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14 = 0, VAR_15 = 0;
    int VAR_16 = VAR_3 - VAR_1->width;

    if (FUNC_1(VAR_7) == 0)
        return 1;
    FUNC_2(VAR_7, 1);
    FUNC_6(&VAR_6->rc, VAR_7);

    VAR_8 = FUNC_5(VAR_6, VAR_6->range_model, 256, 1, &VAR_10);
    VAR_8 |= FUNC_5(VAR_6, VAR_6->range_model, 256, 1, &VAR_9);
    if (VAR_8 < 0)
        return VAR_8;

    VAR_10 += VAR_9 << 8;
    VAR_8 = FUNC_5(VAR_6, VAR_6->range_model, 256, 1, &VAR_11);
    VAR_8 |= FUNC_5(VAR_6, VAR_6->range_model, 256, 1, &VAR_9);
    if (VAR_8 < 0)
        return VAR_8;

    VAR_11 += VAR_9 << 8;
    if (VAR_10 > VAR_11 || VAR_10 >= VAR_6->nbcount)
        return VAR_0;

    FUNC_7(VAR_6->blocks, 0, sizeof(*VAR_6->blocks) * VAR_6->nbcount);

    while (VAR_10 <= VAR_11) {
        int VAR_17, VAR_18;

        VAR_8 = FUNC_5(VAR_6, VAR_6->fill_model, 5, 10, &VAR_17);
        VAR_8 |= FUNC_5(VAR_6, VAR_6->count_model, 256, 20, &VAR_18);
        if (VAR_8 < 0)
            return VAR_8;
        if (VAR_18 <= 0)
            return VAR_0;

        while (VAR_10 < VAR_6->nbcount && VAR_18-- > 0) {
            VAR_6->blocks[VAR_10++] = VAR_17;
        }
    }

    VAR_8 = FUNC_0(VAR_6->current_frame, VAR_6->last_frame);
    if (VAR_8 < 0)
        return VAR_8;

    for (VAR_13 = 0; VAR_13 < VAR_6->nby; VAR_13++) {
        for (VAR_12 = 0; VAR_12 < VAR_6->nbx; VAR_12++) {
            int VAR_19 = 0, VAR_20 = 16, VAR_21 = 0, VAR_22 = 16;

            if (VAR_6->blocks[VAR_13 * VAR_6->nbx + VAR_12] == 0)
                continue;

            if (((VAR_6->blocks[VAR_13 * VAR_6->nbx + VAR_12] - 1) & 1) > 0) {
                VAR_8 = FUNC_5(VAR_6, VAR_6->sxy_model[0], 16, 100, &VAR_21);
                VAR_8 |= FUNC_5(VAR_6, VAR_6->sxy_model[1], 16, 100, &VAR_19);
                VAR_8 |= FUNC_5(VAR_6, VAR_6->sxy_model[2], 16, 100, &VAR_22);
                VAR_8 |= FUNC_5(VAR_6, VAR_6->sxy_model[3], 16, 100, &VAR_20);
                if (VAR_8 < 0)
                    return VAR_8;

                VAR_22++;
                VAR_20++;
            }
            if (((VAR_6->blocks[VAR_13 * VAR_6->nbx + VAR_12] - 1) & 2) > 0) {
                int VAR_23, VAR_24, VAR_25 = VAR_13 * 16, VAR_26 = VAR_12 * 16;
                int VAR_27, VAR_28;

                VAR_8 = FUNC_5(VAR_6, VAR_6->mv_model[0], 512, 100, &VAR_27);
                VAR_8 |= FUNC_5(VAR_6, VAR_6->mv_model[1], 512, 100, &VAR_28);
                if (VAR_8 < 0)
                    return VAR_8;

                VAR_27 -= 256;
                VAR_28 -= 256;

                if (VAR_25 + VAR_28 + VAR_19 < 0 || VAR_26 + VAR_27 + VAR_21 < 0 ||
                    VAR_25 + VAR_28 + VAR_19 >= VAR_1->height || VAR_26 + VAR_27 + VAR_21 >= VAR_1->width)
                    return VAR_0;

                for (VAR_23 = 0; VAR_23 < VAR_20 - VAR_19 && (VAR_25 + VAR_19 + VAR_23) < VAR_1->height && (VAR_25 + VAR_28 + VAR_19 + VAR_23) < VAR_1->height; VAR_23++) {
                    for (VAR_24 = 0; VAR_24 < VAR_22 - VAR_21 && (VAR_26 + VAR_21 + VAR_24) < VAR_1->width && (VAR_26 + VAR_27 + VAR_21 + VAR_24) < VAR_1->width; VAR_24++) {
                        VAR_2[(VAR_25 + VAR_23 + VAR_19) * VAR_3 + VAR_26 + VAR_21 + VAR_24] = VAR_4[(VAR_25 + VAR_28 + VAR_19 + VAR_23) * VAR_5 + VAR_26 + VAR_21 + VAR_27 + VAR_24];
                    }
                }
            } else {
                int VAR_29, VAR_30 = VAR_12 * 16 + VAR_21, VAR_31 = VAR_13 * 16 + VAR_19;
                uint32_t VAR_32, VAR_33, VAR_34, VAR_35, VAR_36 = 0;

                for (; VAR_31 < VAR_13 * 16 + VAR_20 && VAR_31 < VAR_1->height;) {
                    VAR_8 = FUNC_5(VAR_6, VAR_6->op_model[VAR_36], 6, 1000, &VAR_36);
                    if (VAR_8 < 0)
                        return VAR_8;
                    if (VAR_36 == 0) {
                        VAR_8 = FUNC_4(VAR_6, &VAR_32, &VAR_33, &VAR_34, &VAR_14, &VAR_15);
                        if (VAR_8 < 0)
                            return VAR_8;

                        VAR_35 = (VAR_34 << 16) + (VAR_33 << 8) + VAR_32;
                    }
                    if (VAR_36 > 5)
                        return VAR_0;
                    VAR_8 = FUNC_5(VAR_6, VAR_6->run_model[VAR_36], 256, 400, &VAR_29);
                    if (VAR_8 < 0)
                        return VAR_8;
                    if (VAR_29 <= 0)
                        return VAR_0;

                    VAR_8 = FUNC_3(VAR_1, VAR_36, VAR_29, VAR_12, VAR_13, VAR_35,
                                       VAR_2, VAR_4, VAR_3, VAR_5, &VAR_30, &VAR_31,
                                       VAR_16, VAR_21, VAR_22, &VAR_14, &VAR_15);
                    if (VAR_8 < 0)
                        return VAR_8;
                }
            }
        }
    }

    return 0;
}
