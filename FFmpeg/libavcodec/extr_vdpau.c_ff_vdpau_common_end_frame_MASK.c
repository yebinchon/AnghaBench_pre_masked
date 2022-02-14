
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct vdpau_picture_context {int bitstream_buffers; int bitstream_buffers_used; int info; } ;
typedef int VdpVideoSurface ;
typedef int VdpStatus ;
struct TYPE_9__ {int decoder; int (* render ) (int ,int ,int *,int ,int ) ;} ;
typedef TYPE_2__ VDPAUContext ;
struct TYPE_11__ {TYPE_3__* hwaccel_context; TYPE_1__* internal; } ;
struct TYPE_10__ {int (* render2 ) (TYPE_4__*,int *,void*,int ,int ) ;int render; } ;
struct TYPE_8__ {TYPE_2__* hwaccel_priv_data; } ;
typedef TYPE_3__ AVVDPAUContext ;
typedef int AVFrame ;
typedef TYPE_4__ AVCodecContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_4__*,int *,void*,int ,int ) ;
 int FUNC_4 (int ,int ,int *,int ,int ) ;
 int FUNC_5 (int ) ;

int FUNC_6(AVCodecContext *VAR_0, AVFrame *VAR_1,
                              struct vdpau_picture_context *VAR_2)
{
    VDPAUContext *VAR_3 = VAR_0->internal->hwaccel_priv_data;
    AVVDPAUContext *VAR_4 = VAR_0->hwaccel_context;
    VdpVideoSurface VAR_5 = FUNC_2(VAR_1);
    VdpStatus VAR_6;
    int VAR_7;

    VAR_7 = FUNC_1(VAR_0);
    if (VAR_7 < 0)
        return VAR_7;

    if (VAR_4 && !VAR_4->render && VAR_4->render2) {
        VAR_6 = VAR_4->render2(VAR_0, VAR_1, (void *)&VAR_2->info,
                                VAR_2->bitstream_buffers_used, VAR_2->bitstream_buffers);
    } else
    VAR_6 = VAR_3->render(VAR_3->decoder, VAR_5, &VAR_2->info,
                           VAR_2->bitstream_buffers_used,
                           VAR_2->bitstream_buffers);

    FUNC_0(&VAR_2->bitstream_buffers);

    return FUNC_5(VAR_6);
}
