
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int dwCodingParamToolFlags; } ;
struct hevc_dxva2_picture_context {scalar_t__ slice_count; scalar_t__ bitstream_size; int qm; TYPE_5__ pp; } ;
struct TYPE_9__ {TYPE_2__* priv_data; } ;
struct TYPE_8__ {TYPE_1__* ref; } ;
struct TYPE_7__ {int frame; struct hevc_dxva2_picture_context* hwaccel_picture_private; } ;
typedef TYPE_2__ HEVCContext ;
typedef TYPE_3__ AVCodecContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int ,TYPE_5__*,int,int *,int,int ) ;

__attribute__((used)) static int FUNC_1(AVCodecContext *VAR_1)
{
    HEVCContext *VAR_2 = VAR_1->priv_data;
    struct hevc_dxva2_picture_context *VAR_3 = VAR_2->ref->hwaccel_picture_private;
    int VAR_4 = VAR_3->pp.dwCodingParamToolFlags & 1;
    int VAR_5;

    if (VAR_3->slice_count <= 0 || VAR_3->bitstream_size <= 0)
        return -1;

    VAR_5 = FUNC_0(VAR_1, VAR_2->ref->frame,
                                    &VAR_3->pp, sizeof(VAR_3->pp),
                                    VAR_4 ? &VAR_3->qm : ((void*)0), VAR_4 ? sizeof(VAR_3->qm) : 0,
                                    VAR_0);
    return VAR_5;
}
