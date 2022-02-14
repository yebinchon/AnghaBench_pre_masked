
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* yuv2planarX_fn ;
typedef void* yuv2planar1_fn ;
typedef scalar_t__ yuv2packedX_fn ;
typedef void* yuv2packed2_fn ;
typedef void* yuv2packed1_fn ;
typedef void* yuv2interleavedX_fn ;
typedef void* yuv2anyX_fn ;
typedef int int16_t ;
struct TYPE_6__ {int filter_size; int isMMX; void* pfn; scalar_t__ yuv2packedX; int filter_pos; int ** filter; } ;
typedef TYPE_2__ VScalerContext ;
struct TYPE_7__ {int numDesc; int vChrFilterSize; int vLumFilterSize; scalar_t__ yuv2packed2; scalar_t__ yuv2packed1; int vChrFilterPos; int * vChrFilter; int vLumFilterPos; int * vLumFilter; TYPE_1__* desc; scalar_t__ alpMmxFilter; scalar_t__ lumMmxFilter; scalar_t__ chrMmxFilter; int dstFormat; scalar_t__ is_internal_gamma; } ;
struct TYPE_5__ {TYPE_2__* instance; } ;
typedef TYPE_3__ SwsContext ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

void FUNC_3(SwsContext *VAR_0,
    yuv2planar1_fn VAR_1,
    yuv2planarX_fn VAR_2,
    yuv2interleavedX_fn VAR_3,
    yuv2packed1_fn VAR_4,
    yuv2packed2_fn VAR_5,
    yuv2packedX_fn VAR_6,
    yuv2anyX_fn VAR_7, int VAR_8)
{
    VScalerContext *VAR_9 = ((void*)0);
    VScalerContext *VAR_10 = ((void*)0);
    int VAR_11 = VAR_0->numDesc - (VAR_0->is_internal_gamma ? 2 : 1);

    if (FUNC_2(VAR_0->dstFormat) || (FUNC_1(VAR_0->dstFormat) && !FUNC_0(VAR_0->dstFormat))) {
        if (!FUNC_1(VAR_0->dstFormat)) {
            VAR_10 = VAR_0->desc[VAR_11].instance;

            VAR_10->filter[0] = VAR_8 ? (int16_t*)VAR_0->chrMmxFilter : VAR_0->vChrFilter;
            VAR_10->filter_size = VAR_0->vChrFilterSize;
            VAR_10->filter_pos = VAR_0->vChrFilterPos;
            VAR_10->isMMX = VAR_8;

            --VAR_11;
            if (VAR_3) VAR_10->pfn = VAR_3;
            else if (VAR_0->vChrFilterSize == 1) VAR_10->pfn = VAR_1;
            else VAR_10->pfn = VAR_2;
        }

        VAR_9 = VAR_0->desc[VAR_11].instance;

        VAR_9->filter[0] = VAR_8 ? (int16_t*)VAR_0->lumMmxFilter : VAR_0->vLumFilter;
        VAR_9->filter[1] = VAR_8 ? (int16_t*)VAR_0->alpMmxFilter : VAR_0->vLumFilter;
        VAR_9->filter_size = VAR_0->vLumFilterSize;
        VAR_9->filter_pos = VAR_0->vLumFilterPos;
        VAR_9->isMMX = VAR_8;

        if (VAR_0->vLumFilterSize == 1) VAR_9->pfn = VAR_1;
        else VAR_9->pfn = VAR_2;

    } else {
        VAR_9 = VAR_0->desc[VAR_11].instance;
        VAR_10 = &VAR_9[1];

        VAR_9->filter[0] = VAR_0->vLumFilter;
        VAR_9->filter_size = VAR_0->vLumFilterSize;
        VAR_9->filter_pos = VAR_0->vLumFilterPos;

        VAR_10->filter[0] = VAR_0->vChrFilter;
        VAR_10->filter_size = VAR_0->vChrFilterSize;
        VAR_10->filter_pos = VAR_0->vChrFilterPos;

        VAR_9->isMMX = VAR_8;
        VAR_10->isMMX = VAR_8;

        if (VAR_6) {
            if (VAR_0->yuv2packed1 && VAR_0->vLumFilterSize == 1 && VAR_0->vChrFilterSize <= 2)
                VAR_9->pfn = VAR_4;
            else if (VAR_0->yuv2packed2 && VAR_0->vLumFilterSize == 2 && VAR_0->vChrFilterSize == 2)
                VAR_9->pfn = VAR_5;
            VAR_9->yuv2packedX = VAR_6;
        } else
            VAR_9->pfn = VAR_7;
    }
}
