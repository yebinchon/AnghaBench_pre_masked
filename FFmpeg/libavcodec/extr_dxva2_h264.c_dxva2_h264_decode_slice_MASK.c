
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_14__ {int wBitFields; } ;
struct dxva2_picture_context {size_t slice_count; TYPE_7__ pp; int * slice_long; int * slice_short; int const* bitstream; int bitstream_size; } ;
struct TYPE_13__ {TYPE_3__* priv_data; } ;
struct TYPE_12__ {TYPE_2__* cur_pic_ptr; TYPE_1__* slice_ctx; } ;
struct TYPE_11__ {struct dxva2_picture_context* hwaccel_picture_private; } ;
struct TYPE_10__ {scalar_t__ slice_type; } ;
typedef TYPE_1__ H264SliceContext ;
typedef TYPE_2__ H264Picture ;
typedef TYPE_3__ H264Context ;
typedef int AVDXVAContext ;
typedef TYPE_4__ AVCodecContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_0 (TYPE_4__*) ;
 size_t VAR_2 ;
 int FUNC_1 (TYPE_4__*,int *,TYPE_7__*,unsigned int,int ) ;
 int FUNC_2 (int *,unsigned int,int ) ;
 scalar_t__ FUNC_3 (TYPE_4__*,int *) ;

__attribute__((used)) static int FUNC_4(AVCodecContext *VAR_3,
                                   const uint8_t *VAR_4,
                                   uint32_t VAR_5)
{
    const H264Context *VAR_6 = VAR_3->priv_data;
    const H264SliceContext *VAR_7 = &VAR_6->slice_ctx[0];
    AVDXVAContext *VAR_8 = FUNC_0(VAR_3);
    const H264Picture *VAR_9 = VAR_6->cur_pic_ptr;
    struct dxva2_picture_context *VAR_10 = VAR_9->hwaccel_picture_private;
    unsigned VAR_11;

    if (VAR_10->slice_count >= VAR_2)
        return -1;

    if (!VAR_10->bitstream)
        VAR_10->bitstream = VAR_4;
    VAR_10->bitstream_size += VAR_5;

    VAR_11 = VAR_4 - VAR_10->bitstream;
    if (FUNC_3(VAR_3, VAR_8))
        FUNC_2(&VAR_10->slice_short[VAR_10->slice_count],
                         VAR_11, VAR_5);
    else
        FUNC_1(VAR_3, &VAR_10->slice_long[VAR_10->slice_count],
                        &VAR_10->pp, VAR_11, VAR_5);
    VAR_10->slice_count++;

    if (VAR_7->slice_type != VAR_0 && VAR_7->slice_type != VAR_1)
        VAR_10->pp.wBitFields &= ~(1 << 15);
    return 0;
}
