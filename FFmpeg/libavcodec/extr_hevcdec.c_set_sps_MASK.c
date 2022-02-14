
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_15__ {TYPE_4__ const* sps; TYPE_2__** vps_list; int * vps; } ;
struct TYPE_17__ {TYPE_3__ ps; void** sao_pixel_buffer_v; void** sao_pixel_buffer_h; TYPE_1__* avctx; int vdsp; int hevcdsp; int hpc; } ;
struct TYPE_16__ {scalar_t__ chroma_format_idc; int width; int* hshift; int height; int* vshift; int ctb_height; int pixel_shift; int ctb_width; size_t vps_id; scalar_t__ sao_enabled; int bit_depth; } ;
struct TYPE_14__ {scalar_t__ data; } ;
struct TYPE_13__ {int pix_fmt; int hwaccel; } ;
typedef int HEVCVPS ;
typedef TYPE_4__ HEVCSPS ;
typedef TYPE_5__ HEVCContext ;


 int FUNC_0 (void**) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (TYPE_5__*,TYPE_4__ const*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (TYPE_5__*) ;
 int FUNC_7 (TYPE_5__*,TYPE_4__ const*) ;

__attribute__((used)) static int FUNC_8(HEVCContext *VAR_0, const HEVCSPS *VAR_1,
                   enum AVPixelFormat VAR_2)
{
    int VAR_3, VAR_4;

    FUNC_6(VAR_0);
    VAR_0->ps.sps = ((void*)0);
    VAR_0->ps.vps = ((void*)0);

    if (!VAR_1)
        return 0;

    VAR_3 = FUNC_7(VAR_0, VAR_1);
    if (VAR_3 < 0)
        goto fail;

    FUNC_2(VAR_0, VAR_1);

    VAR_0->avctx->pix_fmt = VAR_2;

    FUNC_4(&VAR_0->hpc, VAR_1->bit_depth);
    FUNC_3 (&VAR_0->hevcdsp, VAR_1->bit_depth);
    FUNC_5 (&VAR_0->vdsp, VAR_1->bit_depth);

    for (VAR_4 = 0; VAR_4 < 3; VAR_4++) {
        FUNC_0(&VAR_0->sao_pixel_buffer_h[VAR_4]);
        FUNC_0(&VAR_0->sao_pixel_buffer_v[VAR_4]);
    }

    if (VAR_1->sao_enabled && !VAR_0->avctx->hwaccel) {
        int VAR_5 = (VAR_1->chroma_format_idc != 0) ? 3 : 1;
        int VAR_6;

        for(VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
            int VAR_7 = VAR_1->width >> VAR_1->hshift[VAR_6];
            int VAR_8 = VAR_1->height >> VAR_1->vshift[VAR_6];
            VAR_0->sao_pixel_buffer_h[VAR_6] =
                FUNC_1((VAR_7 * 2 * VAR_1->ctb_height) <<
                          VAR_1->pixel_shift);
            VAR_0->sao_pixel_buffer_v[VAR_6] =
                FUNC_1((VAR_8 * 2 * VAR_1->ctb_width) <<
                          VAR_1->pixel_shift);
        }
    }

    VAR_0->ps.sps = VAR_1;
    VAR_0->ps.vps = (HEVCVPS*) VAR_0->ps.vps_list[VAR_0->ps.sps->vps_id]->data;

    return 0;

fail:
    FUNC_6(VAR_0);
    VAR_0->ps.sps = ((void*)0);
    return VAR_3;
}
