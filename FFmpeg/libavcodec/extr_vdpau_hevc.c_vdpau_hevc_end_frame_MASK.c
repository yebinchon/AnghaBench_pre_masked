
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct vdpau_picture_context {int dummy; } ;
struct TYPE_8__ {TYPE_2__* priv_data; } ;
struct TYPE_7__ {TYPE_1__* ref; } ;
struct TYPE_6__ {int frame; struct vdpau_picture_context* hwaccel_picture_private; } ;
typedef TYPE_2__ HEVCContext ;
typedef TYPE_3__ AVCodecContext ;


 int FUNC_0 (TYPE_3__*,int ,struct vdpau_picture_context*) ;

__attribute__((used)) static int FUNC_1(AVCodecContext *VAR_0)
{
    HEVCContext *VAR_1 = VAR_0->priv_data;
    struct vdpau_picture_context *VAR_2 = VAR_1->ref->hwaccel_picture_private;
    int VAR_3;

    VAR_3 = FUNC_0(VAR_0, VAR_1->ref->frame, VAR_2);
    if (VAR_3 < 0)
        return VAR_3;

    return 0;
}
