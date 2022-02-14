
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int const uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_7__ {TYPE_1__* internal; } ;
struct TYPE_6__ {int* slice_offsets; int nb_slices; int bitstream_len; int const* bitstream; int slice_offsets_allocated; } ;
struct TYPE_5__ {TYPE_2__* hwaccel_priv_data; } ;
typedef TYPE_2__ NVDECContext ;
typedef TYPE_3__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 void* FUNC_1 (int*,int *,int) ;

int FUNC_2(AVCodecContext *VAR_1, const uint8_t *VAR_2,
                                 uint32_t VAR_3)
{
    NVDECContext *VAR_4 = VAR_1->internal->hwaccel_priv_data;
    void *VAR_5;

    VAR_5 = FUNC_1(VAR_4->slice_offsets, &VAR_4->slice_offsets_allocated,
                          (VAR_4->nb_slices + 1) * sizeof(*VAR_4->slice_offsets));
    if (!VAR_5)
        return FUNC_0(VAR_0);
    VAR_4->slice_offsets = VAR_5;

    if (!VAR_4->bitstream)
        VAR_4->bitstream = (uint8_t*)VAR_2;

    VAR_4->slice_offsets[VAR_4->nb_slices] = VAR_2 - VAR_4->bitstream;
    VAR_4->bitstream_len += VAR_3;
    VAR_4->nb_slices++;

    return 0;
}
