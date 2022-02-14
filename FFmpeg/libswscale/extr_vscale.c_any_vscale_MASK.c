
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int (* yuv2anyX_fn ) (TYPE_5__*,int *,int const**,int,int *,int const**,int const**,int,int const**,int **,int,int) ;
typedef int uint8_t ;
typedef int uint16_t ;
typedef int int16_t ;
struct TYPE_17__ {int filter_size; scalar_t__ pfn; int * filter_pos; int ** filter; } ;
typedef TYPE_6__ VScalerContext ;
struct TYPE_18__ {TYPE_4__* dst; scalar_t__ alpha; TYPE_2__* src; TYPE_6__* instance; } ;
struct TYPE_16__ {int yuv2packed2; int yuv2packed1; } ;
struct TYPE_15__ {int width; int v_chr_sub_sample; TYPE_3__* plane; } ;
struct TYPE_14__ {int sliceY; int ** line; } ;
struct TYPE_13__ {TYPE_1__* plane; } ;
struct TYPE_12__ {int sliceY; int ** line; } ;
typedef TYPE_7__ SwsFilterDescriptor ;
typedef TYPE_5__ SwsContext ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_5__*,int *,int const**,int,int *,int const**,int const**,int,int const**,int **,int,int) ;

__attribute__((used)) static int FUNC_3(SwsContext *VAR_0, SwsFilterDescriptor *VAR_1, int VAR_2, int VAR_3)
{
    VScalerContext *VAR_4 = VAR_1->instance;
    int VAR_5 = VAR_1->dst->width;
    int VAR_6 = VAR_2 >> VAR_1->dst->v_chr_sub_sample;

    int VAR_7 = VAR_4[0].filter_size;
    int VAR_8 = VAR_4[1].filter_size;
    uint16_t *VAR_9 = VAR_4[0].filter[0];
    uint16_t *VAR_10 = VAR_4[1].filter[0];

    int VAR_11 = FUNC_0(1-VAR_7, VAR_4[0].filter_pos[ VAR_2]);
    int VAR_12 = FUNC_0(1-VAR_8, VAR_4[1].filter_pos[VAR_6]);

    int VAR_13 = VAR_11 - VAR_1->src->plane[0].sliceY;
    int VAR_14 = VAR_12 - VAR_1->src->plane[1].sliceY;
    int VAR_15 = VAR_12 - VAR_1->src->plane[2].sliceY;
    int VAR_16 = VAR_11 - VAR_1->src->plane[3].sliceY;
    int VAR_17 = VAR_2 - VAR_1->dst->plane[0].sliceY;
    int VAR_18 = VAR_6 - VAR_1->dst->plane[1].sliceY;
    int VAR_19 = VAR_6 - VAR_1->dst->plane[2].sliceY;
    int VAR_20 = VAR_2 - VAR_1->dst->plane[3].sliceY;

    uint8_t **VAR_21 = VAR_1->src->plane[0].line + VAR_13;
    uint8_t **VAR_22 = VAR_1->src->plane[1].line + VAR_14;
    uint8_t **VAR_23 = VAR_1->src->plane[2].line + VAR_15;
    uint8_t **VAR_24 = VAR_1->alpha ? VAR_1->src->plane[3].line + VAR_16 : ((void*)0);
    uint8_t *VAR_25[4] = { VAR_1->dst->plane[0].line[VAR_17],
                        VAR_1->dst->plane[1].line[VAR_18],
                        VAR_1->dst->plane[2].line[VAR_19],
                        VAR_1->alpha ? VAR_1->dst->plane[3].line[VAR_20] : ((void*)0) };

    FUNC_1(!VAR_0->yuv2packed1 && !VAR_0->yuv2packed2);
    ((yuv2anyX_fn)VAR_4->pfn)(VAR_0, VAR_9 + VAR_2 * VAR_7,
             (const int16_t**)VAR_21, VAR_7, VAR_10 + VAR_2 * VAR_8,
             (const int16_t**)VAR_22, (const int16_t**)VAR_23, VAR_8, (const int16_t**)VAR_24, VAR_25, VAR_5, VAR_2);

    return 1;

}
