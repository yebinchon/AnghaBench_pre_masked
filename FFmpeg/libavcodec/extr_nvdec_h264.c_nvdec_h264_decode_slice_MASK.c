
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_13__ {TYPE_4__* priv_data; TYPE_1__* internal; } ;
struct TYPE_12__ {scalar_t__ intra_pic_flag; } ;
struct TYPE_11__ {TYPE_3__* slice_ctx; } ;
struct TYPE_10__ {scalar_t__ slice_type; } ;
struct TYPE_9__ {int* bitstream; int bitstream_len; int* slice_offsets; int nb_slices; int slice_offsets_allocated; int bitstream_allocated; TYPE_5__ pic_params; } ;
struct TYPE_8__ {TYPE_2__* hwaccel_priv_data; } ;
typedef TYPE_2__ NVDECContext ;
typedef TYPE_3__ H264SliceContext ;
typedef TYPE_4__ H264Context ;
typedef TYPE_5__ CUVIDPICPARAMS ;
typedef TYPE_6__ AVCodecContext ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int*,int) ;
 int VAR_2 ;
 void* FUNC_2 (int*,int *,int) ;
 int FUNC_3 (int*,int const*,int) ;

__attribute__((used)) static int FUNC_4(AVCodecContext *VAR_3, const uint8_t *VAR_4,
                                   uint32_t VAR_5)
{
    NVDECContext *VAR_6 = VAR_3->internal->hwaccel_priv_data;
    CUVIDPICPARAMS *VAR_7 = &VAR_6->pic_params;
    const H264Context *VAR_8 = VAR_3->priv_data;
    const H264SliceContext *VAR_9 = &VAR_8->slice_ctx[0];
    void *VAR_10;

    VAR_10 = FUNC_2(VAR_6->bitstream, &VAR_6->bitstream_allocated,
                          VAR_6->bitstream_len + VAR_5 + 3);
    if (!VAR_10)
        return FUNC_0(VAR_2);
    VAR_6->bitstream = VAR_10;

    VAR_10 = FUNC_2(VAR_6->slice_offsets, &VAR_6->slice_offsets_allocated,
                          (VAR_6->nb_slices + 1) * sizeof(*VAR_6->slice_offsets));
    if (!VAR_10)
        return FUNC_0(VAR_2);
    VAR_6->slice_offsets = VAR_10;

    FUNC_1(VAR_6->bitstream + VAR_6->bitstream_len, 1);
    FUNC_3(VAR_6->bitstream + VAR_6->bitstream_len + 3, VAR_4, VAR_5);
    VAR_6->slice_offsets[VAR_6->nb_slices] = VAR_6->bitstream_len ;
    VAR_6->bitstream_len += VAR_5 + 3;
    VAR_6->nb_slices++;

    if (VAR_9->slice_type != VAR_0 && VAR_9->slice_type != VAR_1)
        VAR_7->intra_pic_flag = 0;

    return 0;
}
