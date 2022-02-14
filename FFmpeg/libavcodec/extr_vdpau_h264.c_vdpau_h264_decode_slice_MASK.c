
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_7__ {int slice_count; } ;
struct TYPE_8__ {TYPE_1__ h264; } ;
struct vdpau_picture_context {TYPE_2__ info; } ;
struct TYPE_11__ {TYPE_4__* priv_data; } ;
struct TYPE_10__ {TYPE_3__* cur_pic_ptr; } ;
struct TYPE_9__ {struct vdpau_picture_context* hwaccel_picture_private; } ;
typedef TYPE_3__ H264Picture ;
typedef TYPE_4__ H264Context ;
typedef TYPE_5__ AVCodecContext ;


 int FUNC_0 (struct vdpau_picture_context*,int const*,int) ;
 int const* VAR_0 ;

__attribute__((used)) static int FUNC_1(AVCodecContext *VAR_1,
                                   const uint8_t *VAR_2, uint32_t VAR_3)
{
    H264Context *VAR_4 = VAR_1->priv_data;
    H264Picture *VAR_5 = VAR_4->cur_pic_ptr;
    struct vdpau_picture_context *VAR_6 = VAR_5->hwaccel_picture_private;
    int VAR_7;

    VAR_7 = FUNC_0(VAR_6, VAR_0, 3);
    if (VAR_7)
        return VAR_7;

    VAR_7 = FUNC_0(VAR_6, VAR_2, VAR_3);
    if (VAR_7)
        return VAR_7;

    VAR_6->info.h264.slice_count++;
    return 0;
}
