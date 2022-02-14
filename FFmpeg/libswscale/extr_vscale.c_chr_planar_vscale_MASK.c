
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


typedef int (* yuv2planarX_fn ) (int *,int,int const**,int *,int,int ,int) ;
typedef int (* yuv2planar1_fn ) (int const*,int *,int,int ,int) ;
typedef int (* yuv2interleavedX_fn ) (TYPE_5__*,int *,int,int const**,int const**,int *,int) ;
typedef int uint8_t ;
typedef int uint16_t ;
typedef int int16_t ;
struct TYPE_17__ {int filter_size; scalar_t__ isMMX; scalar_t__ pfn; int ** filter; int * filter_pos; } ;
typedef TYPE_6__ VScalerContext ;
struct TYPE_18__ {TYPE_4__* dst; TYPE_2__* src; TYPE_6__* instance; } ;
struct TYPE_16__ {int uv_offx2; int chrDither8; scalar_t__ yuv2nv12cX; } ;
struct TYPE_15__ {int v_chr_sub_sample; TYPE_3__* plane; int h_chr_sub_sample; int width; } ;
struct TYPE_14__ {int sliceY; int ** line; } ;
struct TYPE_13__ {TYPE_1__* plane; } ;
struct TYPE_12__ {int sliceY; int ** line; } ;
typedef TYPE_7__ SwsFilterDescriptor ;
typedef TYPE_5__ SwsContext ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (TYPE_5__*,int *,int,int const**,int const**,int *,int) ;
 int FUNC_3 (int const*,int *,int,int ,int) ;
 int FUNC_4 (int const*,int *,int,int ,int) ;
 int FUNC_5 (int *,int,int const**,int *,int,int ,int) ;
 int FUNC_6 (int *,int,int const**,int *,int,int ,int) ;

__attribute__((used)) static int FUNC_7(SwsContext *VAR_0, SwsFilterDescriptor *VAR_1, int VAR_2, int VAR_3)
{
    const int VAR_4 = (1 << VAR_1->dst->v_chr_sub_sample) - 1;
    if (VAR_2 & VAR_4)
        return 0;
    else {
        VScalerContext *VAR_5 = VAR_1->instance;
        int VAR_6 = FUNC_0(VAR_1->dst->width, VAR_1->dst->h_chr_sub_sample);
        int VAR_7 = VAR_2 >> VAR_1->dst->v_chr_sub_sample;

        int VAR_8 = FUNC_1(1-VAR_5->filter_size, VAR_5->filter_pos[VAR_7]);
        int VAR_9 = VAR_8 - VAR_1->src->plane[1].sliceY;
        int VAR_10 = VAR_8 - VAR_1->src->plane[2].sliceY;
        int VAR_11 = VAR_7 - VAR_1->dst->plane[1].sliceY;
        int VAR_12 = VAR_7 - VAR_1->dst->plane[2].sliceY;
        uint8_t **VAR_13 = VAR_1->src->plane[1].line + VAR_9;
        uint8_t **VAR_14 = VAR_1->src->plane[2].line + VAR_10;
        uint8_t **VAR_15 = VAR_1->dst->plane[1].line + VAR_11;
        uint8_t **VAR_16 = VAR_1->dst->plane[2].line + VAR_12;
        uint16_t *VAR_17 = VAR_5->filter[0] + (VAR_5->isMMX ? 0 : VAR_7 * VAR_5->filter_size);

        if (VAR_0->yuv2nv12cX) {
            ((yuv2interleavedX_fn)VAR_5->pfn)(VAR_0, VAR_17, VAR_5->filter_size, (const int16_t**)VAR_13, (const int16_t**)VAR_14, VAR_15[0], VAR_6);
        } else if (VAR_5->filter_size == 1) {
            ((yuv2planar1_fn)VAR_5->pfn)((const int16_t*)VAR_13[0], VAR_15[0], VAR_6, VAR_0->chrDither8, 0);
            ((yuv2planar1_fn)VAR_5->pfn)((const int16_t*)VAR_14[0], VAR_16[0], VAR_6, VAR_0->chrDither8, 3);
        } else {
            ((yuv2planarX_fn)VAR_5->pfn)(VAR_17, VAR_5->filter_size, (const int16_t**)VAR_13, VAR_15[0], VAR_6, VAR_0->chrDither8, 0);
            ((yuv2planarX_fn)VAR_5->pfn)(VAR_17, VAR_5->filter_size, (const int16_t**)VAR_14, VAR_16[0], VAR_6, VAR_0->chrDither8, VAR_5->isMMX ? (VAR_0->uv_offx2 >> 1) : 3);
        }
    }

    return 1;
}
