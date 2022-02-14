
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct vp9_dxva2_picture_context {scalar_t__ bitstream_size; int pp; } ;
struct TYPE_9__ {TYPE_2__* frames; } ;
typedef TYPE_3__ VP9SharedContext ;
struct TYPE_10__ {TYPE_3__* priv_data; } ;
struct TYPE_7__ {int f; } ;
struct TYPE_8__ {TYPE_1__ tf; struct vp9_dxva2_picture_context* hwaccel_picture_private; } ;
typedef TYPE_4__ AVCodecContext ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*,int ,int *,int,int *,int ,int ) ;

__attribute__((used)) static int FUNC_1(AVCodecContext *VAR_2)
{
    VP9SharedContext *VAR_3 = VAR_2->priv_data;
    struct vp9_dxva2_picture_context *VAR_4 = VAR_3->frames[VAR_0].hwaccel_picture_private;
    int VAR_5;

    if (VAR_4->bitstream_size <= 0)
        return -1;

    VAR_5 = FUNC_0(VAR_2, VAR_3->frames[VAR_0].tf.f,
                                    &VAR_4->pp, sizeof(VAR_4->pp),
                                    ((void*)0), 0,
                                    VAR_1);
    return VAR_5;
}
