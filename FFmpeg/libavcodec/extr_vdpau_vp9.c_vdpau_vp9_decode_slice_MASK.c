
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct vdpau_picture_context {int dummy; } ;
struct TYPE_5__ {TYPE_2__* frames; } ;
typedef TYPE_1__ VP9SharedContext ;
struct TYPE_6__ {struct vdpau_picture_context* hwaccel_picture_private; } ;
typedef TYPE_2__ VP9Frame ;
struct TYPE_7__ {TYPE_1__* priv_data; } ;
typedef TYPE_3__ AVCodecContext ;


 size_t VAR_0 ;
 int FUNC_0 (struct vdpau_picture_context*,int const*,int) ;
 int const* VAR_1 ;

__attribute__((used)) static int FUNC_1(AVCodecContext *VAR_2,
                                   const uint8_t *VAR_3, uint32_t VAR_4)
{
    VP9SharedContext *VAR_5 = VAR_2->priv_data;
    VP9Frame VAR_6 = VAR_5->frames[VAR_0];
    struct vdpau_picture_context *VAR_7 = VAR_6.hwaccel_picture_private;

    int VAR_8;

    VAR_8 = FUNC_0(VAR_7, VAR_1, 3);
    if (VAR_8)
        return VAR_8;

    VAR_8 = FUNC_0(VAR_7, VAR_3, VAR_4);
    if (VAR_8)
        return VAR_8;

    return 0;
}
