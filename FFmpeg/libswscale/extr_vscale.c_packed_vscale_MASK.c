
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int (* yuv2packed2_fn ) (TYPE_5__*,int const**,int const**,int const**,int const**,int *,int,int,int,int) ;
typedef int (* yuv2packed1_fn ) (TYPE_5__*,int const*,int const**,int const**,int const*,int *,int,int,int) ;
typedef int uint8_t ;
typedef int uint16_t ;
typedef int int16_t ;
struct TYPE_22__ {int filter_size; int** filter; int (* yuv2packedX ) (TYPE_5__*,int*,int const**,int,int*,int const**,int const**,int,int const**,int *,int,int) ;scalar_t__ pfn; int * filter_pos; } ;
typedef TYPE_7__ VScalerContext ;
struct TYPE_23__ {scalar_t__ alpha; TYPE_4__* dst; TYPE_2__* src; TYPE_7__* instance; } ;
struct TYPE_21__ {int* lumMmxFilter; int* chrMmxFilter; int warned_unuseable_bilinear; scalar_t__ yuv2packed2; scalar_t__ yuv2packed1; } ;
struct TYPE_20__ {int width; int v_chr_sub_sample; TYPE_3__* plane; } ;
struct TYPE_19__ {int sliceY; int ** line; } ;
struct TYPE_18__ {TYPE_1__* plane; } ;
struct TYPE_17__ {int sliceY; int ** line; } ;
typedef TYPE_8__ SwsFilterDescriptor ;
typedef TYPE_5__ SwsContext ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (TYPE_5__*,int ,char*) ;
 int FUNC_2 (TYPE_5__*,int const*,int const**,int const**,int const*,int *,int,int,int) ;
 int FUNC_3 (TYPE_5__*,int const*,int const**,int const**,int const*,int *,int,int,int) ;
 int FUNC_4 (TYPE_5__*,int const**,int const**,int const**,int const**,int *,int,int,int,int) ;
 int FUNC_5 (TYPE_5__*,int*,int const**,int,int*,int const**,int const**,int,int const**,int *,int,int) ;

__attribute__((used)) static int FUNC_6(SwsContext *VAR_1, SwsFilterDescriptor *VAR_2, int VAR_3, int VAR_4)
{
    VScalerContext *VAR_5 = VAR_2->instance;
    int VAR_6 = VAR_2->dst->width;
    int VAR_7 = VAR_3 >> VAR_2->dst->v_chr_sub_sample;

    int VAR_8 = VAR_5[0].filter_size;
    int VAR_9 = VAR_5[1].filter_size;
    uint16_t *VAR_10 = VAR_5[0].filter[0];
    uint16_t *VAR_11 = VAR_5[1].filter[0];

    int VAR_12 = FUNC_0(1-VAR_8, VAR_5[0].filter_pos[ VAR_3]);
    int VAR_13 = FUNC_0(1-VAR_9, VAR_5[1].filter_pos[VAR_7]);

    int VAR_14 = VAR_12 - VAR_2->src->plane[0].sliceY;
    int VAR_15 = VAR_13 - VAR_2->src->plane[1].sliceY;
    int VAR_16 = VAR_13 - VAR_2->src->plane[2].sliceY;
    int VAR_17 = VAR_12 - VAR_2->src->plane[3].sliceY;
    int VAR_18 = VAR_3 - VAR_2->dst->plane[0].sliceY;
    uint8_t **VAR_19 = VAR_2->src->plane[0].line + VAR_14;
    uint8_t **VAR_20 = VAR_2->src->plane[1].line + VAR_15;
    uint8_t **VAR_21 = VAR_2->src->plane[2].line + VAR_16;
    uint8_t **VAR_22 = VAR_2->alpha ? VAR_2->src->plane[3].line + VAR_17 : ((void*)0);
    uint8_t **VAR_23 = VAR_2->dst->plane[0].line + VAR_18;


    if (VAR_1->yuv2packed1 && VAR_8 == 1 && VAR_9 == 1) {
        ((yuv2packed1_fn)VAR_5->pfn)(VAR_1, (const int16_t*)*VAR_19, (const int16_t**)VAR_20, (const int16_t**)VAR_21,
                                    (const int16_t*)(VAR_2->alpha ? *VAR_22 : ((void*)0)), *VAR_23, VAR_6, 0, VAR_3);
    } else if (VAR_1->yuv2packed1 && VAR_8 == 1 && VAR_9 == 2 &&
               VAR_11[2 * VAR_7 + 1] + VAR_11[2 * VAR_7] == 4096 &&
               VAR_11[2 * VAR_7 + 1] <= 4096U) {
        int VAR_24 = VAR_11[2 * VAR_7 + 1];
        ((yuv2packed1_fn)VAR_5->pfn)(VAR_1, (const int16_t*)*VAR_19, (const int16_t**)VAR_20, (const int16_t**)VAR_21,
                                    (const int16_t*)(VAR_2->alpha ? *VAR_22 : ((void*)0)), *VAR_23, VAR_6, VAR_24, VAR_3);
    } else if (VAR_1->yuv2packed2 && VAR_8 == 2 && VAR_9 == 2 &&
               VAR_10[2 * VAR_3 + 1] + VAR_10[2 * VAR_3] == 4096 &&
               VAR_10[2 * VAR_3 + 1] <= 4096U &&
               VAR_11[2 * VAR_7 + 1] + VAR_11[2 * VAR_7] == 4096 &&
               VAR_11[2 * VAR_7 + 1] <= 4096U
    ) {
        int VAR_25 = VAR_10[2 * VAR_3 + 1];
        int VAR_26 = VAR_11[2 * VAR_7 + 1];
        VAR_1->lumMmxFilter[2] =
        VAR_1->lumMmxFilter[3] = VAR_10[2 * VAR_3] * 0x10001;
        VAR_1->chrMmxFilter[2] =
        VAR_1->chrMmxFilter[3] = VAR_11[2 * VAR_7] * 0x10001;
        ((yuv2packed2_fn)VAR_5->pfn)(VAR_1, (const int16_t**)VAR_19, (const int16_t**)VAR_20, (const int16_t**)VAR_21, (const int16_t**)VAR_22,
                    *VAR_23, VAR_6, VAR_25, VAR_26, VAR_3);
    } else {
        if ((VAR_1->yuv2packed1 && VAR_8 == 1 && VAR_9 == 2) ||
            (VAR_1->yuv2packed2 && VAR_8 == 2 && VAR_9 == 2)) {
            if (!VAR_1->warned_unuseable_bilinear)
                FUNC_1(VAR_1, VAR_0, "Optimized 2 tap filter code cannot be used\n");
            VAR_1->warned_unuseable_bilinear = 1;
        }

        VAR_5->yuv2packedX(VAR_1, VAR_10 + VAR_3 * VAR_8,
                    (const int16_t**)VAR_19, VAR_8, VAR_11 + VAR_7 * VAR_9,
                    (const int16_t**)VAR_20, (const int16_t**)VAR_21, VAR_9, (const int16_t**)VAR_22, *VAR_23, VAR_6, VAR_3);
    }
    return 1;
}
