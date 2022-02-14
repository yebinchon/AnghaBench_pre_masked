
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct vdpau_picture_context {int dummy; } ;
struct TYPE_8__ {TYPE_3__* frames; } ;
typedef TYPE_2__ VP9SharedContext ;
struct TYPE_7__ {int f; } ;
struct TYPE_9__ {TYPE_1__ tf; struct vdpau_picture_context* hwaccel_picture_private; } ;
typedef TYPE_3__ VP9Frame ;
struct TYPE_10__ {TYPE_2__* priv_data; } ;
typedef TYPE_4__ AVCodecContext ;


 size_t VAR_0 ;
 int FUNC_0 (TYPE_4__*,int ,struct vdpau_picture_context*) ;

__attribute__((used)) static int FUNC_1(AVCodecContext *VAR_1)
{
    VP9SharedContext *VAR_2 = VAR_1->priv_data;
    VP9Frame VAR_3 = VAR_2->frames[VAR_0];
    struct vdpau_picture_context *VAR_4 = VAR_3.hwaccel_picture_private;

    int VAR_5;

    VAR_5 = FUNC_0(VAR_1, VAR_3.tf.f, VAR_4);
    if (VAR_5 < 0)
        return VAR_5;

    return 0;
}
