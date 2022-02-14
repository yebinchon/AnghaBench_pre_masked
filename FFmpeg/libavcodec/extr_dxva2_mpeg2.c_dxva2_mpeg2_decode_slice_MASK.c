
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct dxva2_picture_context {scalar_t__ slice_count; int * slice; int const* bitstream; int bitstream_size; } ;
struct MpegEncContext {TYPE_1__* current_picture_ptr; } ;
struct TYPE_7__ {struct MpegEncContext* priv_data; } ;
struct TYPE_6__ {struct dxva2_picture_context* hwaccel_picture_private; } ;
typedef TYPE_2__ AVCodecContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*,char*,scalar_t__) ;
 int FUNC_1 (TYPE_2__*,struct MpegEncContext const*,int *,unsigned int,int const*,int ) ;

__attribute__((used)) static int FUNC_2(AVCodecContext *VAR_1,
                                    const uint8_t *VAR_2, uint32_t VAR_3)
{
    const struct MpegEncContext *VAR_4 = VAR_1->priv_data;
    struct dxva2_picture_context *VAR_5 =
        VAR_4->current_picture_ptr->hwaccel_picture_private;
    unsigned VAR_6;

    if (VAR_5->slice_count >= VAR_0) {
        FUNC_0(VAR_1, "%d slices in dxva2",
                              VAR_5->slice_count);
        return -1;
    }
    if (!VAR_5->bitstream)
        VAR_5->bitstream = VAR_2;
    VAR_5->bitstream_size += VAR_3;

    VAR_6 = VAR_2 - VAR_5->bitstream;
    FUNC_1(VAR_1, VAR_4, &VAR_5->slice[VAR_5->slice_count++], VAR_6,
               VAR_2, VAR_3);
    return 0;
}
