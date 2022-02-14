
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct dxva2_picture_context {scalar_t__ slice_count; scalar_t__ bitstream_size; int pp; } ;
struct TYPE_10__ {TYPE_1__* current_picture_ptr; } ;
struct TYPE_8__ {TYPE_4__ s; } ;
typedef TYPE_2__ VC1Context ;
struct TYPE_9__ {int height; TYPE_2__* priv_data; } ;
struct TYPE_7__ {int f; struct dxva2_picture_context* hwaccel_picture_private; } ;
typedef TYPE_3__ AVCodecContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int ,int *,int,int *,int ,int ) ;
 int FUNC_1 (TYPE_4__*,int ,int ) ;

__attribute__((used)) static int FUNC_2(AVCodecContext *VAR_1)
{
    VC1Context *VAR_2 = VAR_1->priv_data;
    struct dxva2_picture_context *VAR_3 = VAR_2->s.current_picture_ptr->hwaccel_picture_private;
    int VAR_4;

    if (VAR_3->slice_count <= 0 || VAR_3->bitstream_size <= 0)
        return -1;

    VAR_4 = FUNC_0(VAR_1, VAR_2->s.current_picture_ptr->f,
                                    &VAR_3->pp, sizeof(VAR_3->pp),
                                    ((void*)0), 0,
                                    VAR_0);
    if (!VAR_4)
        FUNC_1(&VAR_2->s, 0, VAR_1->height);
    return VAR_4;
}
