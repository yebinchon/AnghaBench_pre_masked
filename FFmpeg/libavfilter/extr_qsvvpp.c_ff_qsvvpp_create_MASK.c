
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_15__ ;


typedef int mfxExtBuffer ;
struct TYPE_22__ {int CropH; int CropW; int CropY; int CropX; } ;
struct TYPE_21__ {int nb_inputs; int * outputs; int * inputs; } ;
struct TYPE_17__ {TYPE_8__ Out; TYPE_8__ In; } ;
struct TYPE_16__ {int NumExtParam; int AsyncDepth; int IOPattern; int ** ExtParam; TYPE_1__ vpp; } ;
struct TYPE_20__ {int nb_ext_buffers; TYPE_15__ vpp_param; int session; int out_mem_mode; int in_mem_mode; int ** ext_buffers; int opaque_alloc; TYPE_8__* frame_infos; int out_sw_format; scalar_t__ filter_frame; } ;
struct TYPE_19__ {size_t in_idx; int h; int w; int y; int x; } ;
struct TYPE_18__ {int num_crop; int num_ext_buf; int ** ext_buf; TYPE_3__* crop; int out_sw_format; scalar_t__ filter_frame; } ;
typedef TYPE_2__ QSVVPPParam ;
typedef TYPE_3__ QSVVPPCrop ;
typedef TYPE_4__ QSVVPPContext ;
typedef TYPE_5__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,TYPE_15__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (TYPE_5__*,int ,char*,...) ;
 TYPE_4__* FUNC_6 (int) ;
 void* FUNC_7 (int,int) ;
 scalar_t__ VAR_9 ;
 int FUNC_8 (TYPE_4__**) ;
 int FUNC_9 (TYPE_8__*,int ) ;
 int FUNC_10 (TYPE_5__*,TYPE_4__*) ;

int FUNC_11(AVFilterContext *VAR_10, QSVVPPContext **VAR_11, QSVVPPParam *VAR_12)
{
    int VAR_13;
    int VAR_14;
    QSVVPPContext *VAR_15;

    VAR_15 = FUNC_6(sizeof(*VAR_15));
    if (!VAR_15)
        return FUNC_0(VAR_2);

    VAR_15->filter_frame = VAR_12->filter_frame;
    if (!VAR_15->filter_frame)
        VAR_15->filter_frame = VAR_9;
    VAR_15->out_sw_format = VAR_12->out_sw_format;


    VAR_14 = FUNC_10(VAR_10, VAR_15);
    if (VAR_14 < 0)
        goto failed;

    VAR_15->frame_infos = FUNC_7(VAR_10->nb_inputs, sizeof(*VAR_15->frame_infos));
    if (!VAR_15->frame_infos) {
        VAR_14 = FUNC_0(VAR_2);
        goto failed;
    }


    for (VAR_13 = 0; VAR_13 < VAR_10->nb_inputs; VAR_13++) {
        VAR_14 = FUNC_9(&VAR_15->frame_infos[VAR_13], VAR_10->inputs[VAR_13]);
        if (VAR_14 < 0)
            goto failed;
    }


    for (VAR_13 = 0; VAR_13 < VAR_12->num_crop; VAR_13++) {
        QSVVPPCrop *VAR_16 = VAR_12->crop + VAR_13;
        if (VAR_16->in_idx > VAR_10->nb_inputs) {
            VAR_14 = FUNC_0(VAR_1);
            goto failed;
        }
        VAR_15->frame_infos[VAR_16->in_idx].CropX = VAR_16->x;
        VAR_15->frame_infos[VAR_16->in_idx].CropY = VAR_16->y;
        VAR_15->frame_infos[VAR_16->in_idx].CropW = VAR_16->w;
        VAR_15->frame_infos[VAR_16->in_idx].CropH = VAR_16->h;
    }

    VAR_15->vpp_param.vpp.In = VAR_15->frame_infos[0];

    VAR_14 = FUNC_9(&VAR_15->vpp_param.vpp.Out, VAR_10->outputs[0]);
    if (VAR_14 < 0) {
        FUNC_5(VAR_10, VAR_0, "Fail to get frame info from link.\n");
        goto failed;
    }

    if (FUNC_1(VAR_15->in_mem_mode) || FUNC_1(VAR_15->out_mem_mode)) {
        VAR_15->nb_ext_buffers = VAR_12->num_ext_buf + 1;
        VAR_15->ext_buffers = FUNC_7(VAR_15->nb_ext_buffers, sizeof(*VAR_15->ext_buffers));
        if (!VAR_15->ext_buffers) {
            VAR_14 = FUNC_0(VAR_2);
            goto failed;
        }

        VAR_15->ext_buffers[0] = (mfxExtBuffer *)&VAR_15->opaque_alloc;
        for (VAR_13 = 1; VAR_13 < VAR_12->num_ext_buf; VAR_13++)
            VAR_15->ext_buffers[VAR_13] = VAR_12->ext_buf[VAR_13 - 1];
        VAR_15->vpp_param.ExtParam = VAR_15->ext_buffers;
        VAR_15->vpp_param.NumExtParam = VAR_15->nb_ext_buffers;
    } else {
        VAR_15->vpp_param.NumExtParam = VAR_12->num_ext_buf;
        VAR_15->vpp_param.ExtParam = VAR_12->ext_buf;
    }

    VAR_15->vpp_param.AsyncDepth = 1;

    if (FUNC_2(VAR_15->in_mem_mode))
        VAR_15->vpp_param.IOPattern |= VAR_4;
    else if (FUNC_3(VAR_15->in_mem_mode))
        VAR_15->vpp_param.IOPattern |= VAR_5;
    else if (FUNC_1(VAR_15->in_mem_mode))
        VAR_15->vpp_param.IOPattern |= VAR_3;

    if (FUNC_2(VAR_15->out_mem_mode))
        VAR_15->vpp_param.IOPattern |= VAR_7;
    else if (FUNC_3(VAR_15->out_mem_mode))
        VAR_15->vpp_param.IOPattern |= VAR_8;
    else if (FUNC_1(VAR_15->out_mem_mode))
        VAR_15->vpp_param.IOPattern |= VAR_6;

    VAR_14 = FUNC_4(VAR_15->session, &VAR_15->vpp_param);
    if (VAR_14 < 0) {
        FUNC_5(VAR_10, VAR_0, "Failed to create a qsvvpp, ret = %d.\n", VAR_14);
        goto failed;
    }

    *VAR_11 = VAR_15;
    return 0;

failed:
    FUNC_8(&VAR_15);

    return VAR_14;
}
