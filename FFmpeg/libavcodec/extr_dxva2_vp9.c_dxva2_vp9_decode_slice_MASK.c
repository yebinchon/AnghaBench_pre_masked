
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct vp9_dxva2_picture_context {int slice; int const* bitstream; int bitstream_size; } ;
struct TYPE_6__ {TYPE_1__* frames; } ;
typedef TYPE_2__ VP9SharedContext ;
struct TYPE_7__ {TYPE_2__* priv_data; } ;
struct TYPE_5__ {struct vp9_dxva2_picture_context* hwaccel_picture_private; } ;
typedef TYPE_3__ AVCodecContext ;


 size_t VAR_0 ;
 int FUNC_0 (int *,unsigned int,int ) ;

__attribute__((used)) static int FUNC_1(AVCodecContext *VAR_1,
                                  const uint8_t *VAR_2,
                                  uint32_t VAR_3)
{
    const VP9SharedContext *VAR_4 = VAR_1->priv_data;
    struct vp9_dxva2_picture_context *VAR_5 = VAR_4->frames[VAR_0].hwaccel_picture_private;
    unsigned VAR_6;

    if (!VAR_5->bitstream)
        VAR_5->bitstream = VAR_2;
    VAR_5->bitstream_size += VAR_3;

    VAR_6 = VAR_2 - VAR_5->bitstream;
    FUNC_0(&VAR_5->slice, VAR_6, VAR_3);

    return 0;
}
