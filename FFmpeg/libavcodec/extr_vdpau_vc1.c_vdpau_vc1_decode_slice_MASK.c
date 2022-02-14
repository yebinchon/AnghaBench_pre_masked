
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
struct TYPE_8__ {int slice_count; } ;
struct TYPE_9__ {TYPE_1__ vc1; } ;
struct vdpau_picture_context {TYPE_2__ info; } ;
struct TYPE_12__ {TYPE_4__* current_picture_ptr; } ;
struct TYPE_10__ {TYPE_5__ s; } ;
typedef TYPE_3__ VC1Context ;
struct TYPE_13__ {TYPE_3__* priv_data; } ;
struct TYPE_11__ {struct vdpau_picture_context* hwaccel_picture_private; } ;
typedef TYPE_4__ Picture ;
typedef TYPE_5__ MpegEncContext ;
typedef TYPE_6__ AVCodecContext ;


 int FUNC_0 (struct vdpau_picture_context*,int const*,int ) ;

__attribute__((used)) static int FUNC_1(AVCodecContext *VAR_0,
                                  const uint8_t *VAR_1, uint32_t VAR_2)
{
    VC1Context * const VAR_3 = VAR_0->priv_data;
    MpegEncContext * const VAR_4 = &VAR_3->s;
    Picture *VAR_5 = VAR_4->current_picture_ptr;
    struct vdpau_picture_context *VAR_6 = VAR_5->hwaccel_picture_private;
    int VAR_7;

    VAR_7 = FUNC_0(VAR_6, VAR_1, VAR_2);
    if (VAR_7 < 0)
        return VAR_7;

    VAR_6->info.vc1.slice_count++;
    return 0;
}
