
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct dxva2_picture_context {scalar_t__ slice_count; scalar_t__ bitstream_size; int qm; int pp; } ;
struct MpegEncContext {TYPE_1__* current_picture_ptr; } ;
struct TYPE_6__ {int height; struct MpegEncContext* priv_data; } ;
struct TYPE_5__ {int f; struct dxva2_picture_context* hwaccel_picture_private; } ;
typedef TYPE_2__ AVCodecContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,int *,int,int *,int,int ) ;
 int FUNC_1 (struct MpegEncContext*,int ,int ) ;

__attribute__((used)) static int FUNC_2(AVCodecContext *VAR_1)
{
    struct MpegEncContext *VAR_2 = VAR_1->priv_data;
    struct dxva2_picture_context *VAR_3 =
        VAR_2->current_picture_ptr->hwaccel_picture_private;
    int VAR_4;

    if (VAR_3->slice_count <= 0 || VAR_3->bitstream_size <= 0)
        return -1;
    VAR_4 = FUNC_0(VAR_1, VAR_2->current_picture_ptr->f,
                                    &VAR_3->pp, sizeof(VAR_3->pp),
                                    &VAR_3->qm, sizeof(VAR_3->qm),
                                    VAR_0);
    if (!VAR_4)
        FUNC_1(VAR_2, 0, VAR_1->height);
    return VAR_4;
}
