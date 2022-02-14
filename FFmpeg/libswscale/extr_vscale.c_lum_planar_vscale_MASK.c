
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int (* yuv2planarX_fn ) (int *,int,int const**,int *,int,int ,int ) ;
typedef int (* yuv2planar1_fn ) (int const*,int *,int,int ,int ) ;
typedef int uint8_t ;
typedef int uint16_t ;
typedef int int16_t ;
struct TYPE_14__ {int filter_size; scalar_t__ pfn; scalar_t__ isMMX; int ** filter; int * filter_pos; } ;
typedef TYPE_5__ VScalerContext ;
struct TYPE_16__ {int lumDither8; } ;
struct TYPE_15__ {TYPE_4__* dst; TYPE_2__* src; scalar_t__ alpha; TYPE_5__* instance; } ;
struct TYPE_13__ {int width; TYPE_3__* plane; } ;
struct TYPE_12__ {int sliceY; int ** line; } ;
struct TYPE_11__ {TYPE_1__* plane; } ;
struct TYPE_10__ {int sliceY; int ** line; } ;
typedef TYPE_6__ SwsFilterDescriptor ;
typedef TYPE_7__ SwsContext ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int const*,int *,int,int ,int ) ;
 int FUNC_2 (int *,int,int const**,int *,int,int ,int ) ;
 int FUNC_3 (int const*,int *,int,int ,int ) ;
 int FUNC_4 (int *,int,int const**,int *,int,int ,int ) ;

__attribute__((used)) static int FUNC_5(SwsContext *VAR_0, SwsFilterDescriptor *VAR_1, int VAR_2, int VAR_3)
{
    VScalerContext *VAR_4 = VAR_1->instance;
    int VAR_5 = VAR_1->dst->width;

    int VAR_6 = FUNC_0(1-VAR_4->filter_size, VAR_4->filter_pos[VAR_2]);
    int VAR_7 = VAR_6 - VAR_1->src->plane[0].sliceY;
    int VAR_8 = VAR_2 - VAR_1->dst->plane[0].sliceY;
    uint8_t **VAR_9 = VAR_1->src->plane[0].line + VAR_7;
    uint8_t **VAR_10 = VAR_1->dst->plane[0].line + VAR_8;
    uint16_t *VAR_11 = VAR_4->filter[0] + (VAR_4->isMMX ? 0 : VAR_2 * VAR_4->filter_size);

    if (VAR_4->filter_size == 1)
        ((yuv2planar1_fn)VAR_4->pfn)((const int16_t*)VAR_9[0], VAR_10[0], VAR_5, VAR_0->lumDither8, 0);
    else
        ((yuv2planarX_fn)VAR_4->pfn)(VAR_11, VAR_4->filter_size, (const int16_t**)VAR_9, VAR_10[0], VAR_5, VAR_0->lumDither8, 0);

    if (VAR_1->alpha) {
        int VAR_12 = VAR_6 - VAR_1->src->plane[3].sliceY;
        int VAR_13 = VAR_2 - VAR_1->dst->plane[3].sliceY;
        uint8_t **VAR_14 = VAR_1->src->plane[3].line + VAR_12;
        uint8_t **VAR_15 = VAR_1->dst->plane[3].line + VAR_13;
        uint16_t *VAR_16 = VAR_4->filter[1] + (VAR_4->isMMX ? 0 : VAR_2 * VAR_4->filter_size);

        if (VAR_4->filter_size == 1)
            ((yuv2planar1_fn)VAR_4->pfn)((const int16_t*)VAR_14[0], VAR_15[0], VAR_5, VAR_0->lumDither8, 0);
        else
            ((yuv2planarX_fn)VAR_4->pfn)(VAR_16, VAR_4->filter_size, (const int16_t**)VAR_14, VAR_15[0], VAR_5, VAR_0->lumDither8, 0);
    }

    return 1;
}
