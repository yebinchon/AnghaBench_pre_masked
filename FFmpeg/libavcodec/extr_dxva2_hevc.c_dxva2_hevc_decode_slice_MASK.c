
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct hevc_dxva2_picture_context {size_t slice_count; int * slice_short; int const* bitstream; int bitstream_size; } ;
struct TYPE_7__ {TYPE_2__* priv_data; } ;
struct TYPE_6__ {TYPE_1__* ref; } ;
struct TYPE_5__ {struct hevc_dxva2_picture_context* hwaccel_picture_private; } ;
typedef TYPE_1__ HEVCFrame ;
typedef TYPE_2__ HEVCContext ;
typedef TYPE_3__ AVCodecContext ;


 size_t VAR_0 ;
 int FUNC_0 (int *,unsigned int,int ) ;

__attribute__((used)) static int FUNC_1(AVCodecContext *VAR_1,
                                   const uint8_t *VAR_2,
                                   uint32_t VAR_3)
{
    const HEVCContext *VAR_4 = VAR_1->priv_data;
    const HEVCFrame *VAR_5 = VAR_4->ref;
    struct hevc_dxva2_picture_context *VAR_6 = VAR_5->hwaccel_picture_private;
    unsigned VAR_7;

    if (VAR_6->slice_count >= VAR_0)
        return -1;

    if (!VAR_6->bitstream)
        VAR_6->bitstream = VAR_2;
    VAR_6->bitstream_size += VAR_3;

    VAR_7 = VAR_2 - VAR_6->bitstream;
    FUNC_0(&VAR_6->slice_short[VAR_6->slice_count], VAR_7, VAR_3);
    VAR_6->slice_count++;

    return 0;
}
