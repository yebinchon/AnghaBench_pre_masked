
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8_t ;
typedef int ptrdiff_t ;
struct TYPE_16__ {TYPE_5__* sps; } ;
struct TYPE_13__ {int (* put_pcm ) (int *,int,int,int,int *,int) ;} ;
struct TYPE_12__ {int disable_deblocking_filter_flag; } ;
struct TYPE_18__ {TYPE_6__ ps; TYPE_3__ hevcdsp; TYPE_2__ sh; TYPE_1__* frame; TYPE_7__* HEVClc; } ;
struct TYPE_17__ {int cc; } ;
struct TYPE_14__ {int bit_depth; int bit_depth_chroma; } ;
struct TYPE_15__ {int pixel_shift; int* vshift; int* hshift; TYPE_4__ pcm; scalar_t__ chroma_format_idc; } ;
struct TYPE_11__ {int* linesize; int ** data; } ;
typedef TYPE_7__ HEVCLocalContext ;
typedef TYPE_8__ HEVCContext ;
typedef int GetBitContext ;


 int FUNC_0 (TYPE_8__*,int,int,int) ;
 int FUNC_1 (int *,int const*,int) ;
 int * FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int,int,int,int *,int) ;
 int FUNC_4 (int *,int,int,int,int *,int) ;
 int FUNC_5 (int *,int,int,int,int *,int) ;

__attribute__((used)) static int FUNC_6(HEVCContext *VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
    HEVCLocalContext *VAR_4 = VAR_0->HEVClc;
    GetBitContext VAR_5;
    int VAR_6 = 1 << VAR_3;
    ptrdiff_t VAR_7 = VAR_0->frame->linesize[0];
    ptrdiff_t VAR_8 = VAR_0->frame->linesize[1];
    ptrdiff_t VAR_9 = VAR_0->frame->linesize[2];
    uint8_t *VAR_10 = &VAR_0->frame->data[0][VAR_2 * VAR_7 + (VAR_1 << VAR_0->ps.sps->pixel_shift)];
    uint8_t *VAR_11 = &VAR_0->frame->data[1][(VAR_2 >> VAR_0->ps.sps->vshift[1]) * VAR_8 + ((VAR_1 >> VAR_0->ps.sps->hshift[1]) << VAR_0->ps.sps->pixel_shift)];
    uint8_t *VAR_12 = &VAR_0->frame->data[2][(VAR_2 >> VAR_0->ps.sps->vshift[2]) * VAR_9 + ((VAR_1 >> VAR_0->ps.sps->hshift[2]) << VAR_0->ps.sps->pixel_shift)];

    int VAR_13 = VAR_6 * VAR_6 * VAR_0->ps.sps->pcm.bit_depth +
                         (((VAR_6 >> VAR_0->ps.sps->hshift[1]) * (VAR_6 >> VAR_0->ps.sps->vshift[1])) +
                          ((VAR_6 >> VAR_0->ps.sps->hshift[2]) * (VAR_6 >> VAR_0->ps.sps->vshift[2]))) *
                          VAR_0->ps.sps->pcm.bit_depth_chroma;
    const uint8_t *VAR_14 = FUNC_2(&VAR_4->cc, (VAR_13 + 7) >> 3);
    int VAR_15;

    if (!VAR_0->sh.disable_deblocking_filter_flag)
        FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);

    VAR_15 = FUNC_1(&VAR_5, VAR_14, VAR_13);
    if (VAR_15 < 0)
        return VAR_15;

    VAR_0->hevcdsp.put_pcm(VAR_10, VAR_7, VAR_6, VAR_6, &VAR_5, VAR_0->ps.sps->pcm.bit_depth);
    if (VAR_0->ps.sps->chroma_format_idc) {
        VAR_0->hevcdsp.put_pcm(VAR_11, VAR_8,
                           VAR_6 >> VAR_0->ps.sps->hshift[1],
                           VAR_6 >> VAR_0->ps.sps->vshift[1],
                           &VAR_5, VAR_0->ps.sps->pcm.bit_depth_chroma);
        VAR_0->hevcdsp.put_pcm(VAR_12, VAR_9,
                           VAR_6 >> VAR_0->ps.sps->hshift[2],
                           VAR_6 >> VAR_0->ps.sps->vshift[2],
                           &VAR_5, VAR_0->ps.sps->pcm.bit_depth_chroma);
    }

    return 0;
}
