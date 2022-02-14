
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct dxva2_picture_context {scalar_t__ slice_count; int bitstream_size; int * slice; int const* bitstream; } ;
struct TYPE_8__ {TYPE_3__* current_picture_ptr; } ;
struct TYPE_9__ {TYPE_1__ s; } ;
typedef TYPE_2__ VC1Context ;
struct TYPE_11__ {scalar_t__ codec_id; TYPE_2__* priv_data; } ;
struct TYPE_10__ {struct dxva2_picture_context* hwaccel_picture_private; } ;
typedef TYPE_3__ Picture ;
typedef TYPE_4__ AVCodecContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int const*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (TYPE_4__*,char*,scalar_t__) ;
 int FUNC_3 (TYPE_4__*,int *,unsigned int,int) ;

__attribute__((used)) static int FUNC_4(AVCodecContext *VAR_2,
                                  const uint8_t *VAR_3,
                                  uint32_t VAR_4)
{
    const VC1Context *VAR_5 = VAR_2->priv_data;
    const Picture *VAR_6 = VAR_5->s.current_picture_ptr;
    struct dxva2_picture_context *VAR_7 = VAR_6->hwaccel_picture_private;
    unsigned VAR_8;

    if (VAR_7->slice_count >= VAR_1) {
        FUNC_2(VAR_2, "%d slices in dxva2",
                              VAR_7->slice_count);
        return -1;
    }

    if (VAR_2->codec_id == VAR_0 &&
        VAR_4 >= 4 && FUNC_1(FUNC_0(VAR_3))) {
        VAR_3 += 4;
        VAR_4 -= 4;
    }

    if (!VAR_7->bitstream)
        VAR_7->bitstream = VAR_3;
    VAR_7->bitstream_size += VAR_4;

    VAR_8 = VAR_3 - VAR_7->bitstream;
    FUNC_3(VAR_2, &VAR_7->slice[VAR_7->slice_count++], VAR_8, VAR_4);
    return 0;
}
