
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int tmp_out_surf ;
struct TYPE_9__ {TYPE_1__* priv_data; } ;
struct TYPE_8__ {scalar_t__ encoder_flushing; int unused_surface_queue; int output_surface_ready_queue; int nvencoder; int d3d11_device; int cu_context; } ;
typedef int NvencSurface ;
typedef TYPE_1__ NvencContext ;
typedef int AVPacket ;
typedef TYPE_2__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int **,int,int *) ;
 int FUNC_2 (int ,int **,int,int *) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (TYPE_2__*,scalar_t__) ;
 int FUNC_6 (TYPE_2__*,int *,int *) ;

int FUNC_7(AVCodecContext *VAR_3, AVPacket *VAR_4)
{
    NvencSurface *VAR_5;
    int VAR_6, VAR_7;

    NvencContext *VAR_8 = VAR_3->priv_data;

    if ((!VAR_8->cu_context && !VAR_8->d3d11_device) || !VAR_8->nvencoder)
        return FUNC_0(VAR_2);

    if (FUNC_5(VAR_3, VAR_8->encoder_flushing)) {
        FUNC_1(VAR_8->output_surface_ready_queue, &VAR_5, sizeof(VAR_5), ((void*)0));

        VAR_6 = FUNC_4(VAR_3);
        if (VAR_6 < 0)
            return VAR_6;

        VAR_6 = FUNC_6(VAR_3, VAR_4, VAR_5);

        VAR_7 = FUNC_3(VAR_3);
        if (VAR_7 < 0)
            return VAR_7;

        if (VAR_6)
            return VAR_6;

        FUNC_2(VAR_8->unused_surface_queue, &VAR_5, sizeof(VAR_5), ((void*)0));
    } else if (VAR_8->encoder_flushing) {
        return VAR_0;
    } else {
        return FUNC_0(VAR_1);
    }

    return 0;
}
