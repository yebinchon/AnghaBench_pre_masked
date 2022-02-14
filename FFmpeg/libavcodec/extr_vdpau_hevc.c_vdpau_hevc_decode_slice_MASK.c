
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
struct TYPE_7__ {TYPE_2__* priv_data; } ;
struct TYPE_6__ {TYPE_1__* ref; } ;
struct TYPE_5__ {struct vdpau_picture_context* hwaccel_picture_private; } ;
typedef TYPE_2__ HEVCContext ;
typedef TYPE_3__ AVCodecContext ;


 int FUNC_0 (struct vdpau_picture_context*,int const*,int) ;
 int const* VAR_0 ;

__attribute__((used)) static int FUNC_1(AVCodecContext *VAR_1,
                                   const uint8_t *VAR_2, uint32_t VAR_3)
{
    HEVCContext *VAR_4 = VAR_1->priv_data;
    struct vdpau_picture_context *VAR_5 = VAR_4->ref->hwaccel_picture_private;
    int VAR_6;

    VAR_6 = FUNC_0(VAR_5, VAR_0, 3);
    if (VAR_6)
        return VAR_6;

    VAR_6 = FUNC_0(VAR_5, VAR_2, VAR_3);
    if (VAR_6)
        return VAR_6;

    return 0;
}
