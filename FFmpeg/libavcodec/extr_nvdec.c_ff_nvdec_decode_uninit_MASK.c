
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* internal; } ;
struct TYPE_6__ {int decoder_pool; int decoder_ref; scalar_t__ slice_offsets_allocated; scalar_t__ nb_slices; int slice_offsets; scalar_t__ bitstream_allocated; scalar_t__ bitstream_len; int bitstream; } ;
struct TYPE_5__ {TYPE_2__* hwaccel_priv_data; } ;
typedef TYPE_2__ NVDECContext ;
typedef TYPE_3__ AVCodecContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(AVCodecContext *VAR_0)
{
    NVDECContext *VAR_1 = VAR_0->internal->hwaccel_priv_data;

    FUNC_2(&VAR_1->bitstream);
    VAR_1->bitstream_len = 0;
    VAR_1->bitstream_allocated = 0;

    FUNC_2(&VAR_1->slice_offsets);
    VAR_1->nb_slices = 0;
    VAR_1->slice_offsets_allocated = 0;

    FUNC_1(&VAR_1->decoder_ref);
    FUNC_0(&VAR_1->decoder_pool);

    return 0;
}
