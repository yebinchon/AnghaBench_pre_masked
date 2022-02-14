
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int params ;
typedef scalar_t__ VAStatus ;
struct TYPE_13__ {scalar_t__ algorithm; scalar_t__ flags; int type; } ;
typedef TYPE_2__ VAProcFilterParameterBufferDeinterlacing ;
struct TYPE_16__ {scalar_t__ num_backward_references; scalar_t__ num_forward_references; } ;
struct TYPE_14__ {int nb_deint_caps; scalar_t__ mode; int extra_delay_for_timestamps; int field_rate; scalar_t__ queue_depth; TYPE_6__ pipeline_caps; int * filter_buffers; int va_context; TYPE_1__* hwctx; TYPE_7__* deint_caps; } ;
typedef TYPE_3__ VAAPIVPPContext ;
struct TYPE_17__ {scalar_t__ type; } ;
struct TYPE_15__ {TYPE_3__* priv; } ;
struct TYPE_12__ {int display; } ;
typedef TYPE_3__ DeintVAAPIContext ;
typedef TYPE_5__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (TYPE_5__*,int ,char*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_5__*,int ,TYPE_2__*,int,int) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int ,int ,int ,TYPE_7__**,int*) ;
 scalar_t__ FUNC_6 (int ,int ,int *,int,TYPE_6__*) ;

__attribute__((used)) static int FUNC_7(AVFilterContext *VAR_11)
{
    VAAPIVPPContext *VAR_12 = VAR_11->priv;
    DeintVAAPIContext *VAR_13 = VAR_11->priv;
    VAStatus VAR_14;
    VAProcFilterParameterBufferDeinterlacing VAR_15;
    int VAR_16;

    VAR_13->nb_deint_caps = VAR_6;
    VAR_14 = FUNC_5(VAR_12->hwctx->display,
                                     VAR_12->va_context,
                                     VAR_8,
                                     &VAR_13->deint_caps,
                                     &VAR_13->nb_deint_caps);
    if (VAR_14 != VAR_10) {
        FUNC_1(VAR_11, VAR_0, "Failed to query deinterlacing "
               "caps: %d (%s).\n", VAR_14, FUNC_4(VAR_14));
        return FUNC_0(VAR_3);
    }

    if (VAR_13->mode == VAR_7) {
        for (VAR_16 = 0; VAR_16 < VAR_13->nb_deint_caps; VAR_16++) {
            if (VAR_13->deint_caps[VAR_16].type > VAR_13->mode)
                VAR_13->mode = VAR_13->deint_caps[VAR_16].type;
        }
        FUNC_1(VAR_11, VAR_1, "Picking %d (%s) as default "
               "deinterlacing mode.\n", VAR_13->mode,
               FUNC_2(VAR_13->mode));
    } else {
        for (VAR_16 = 0; VAR_16 < VAR_13->nb_deint_caps; VAR_16++) {
            if (VAR_13->deint_caps[VAR_16].type == VAR_13->mode)
                break;
        }
        if (VAR_16 >= VAR_13->nb_deint_caps) {
            FUNC_1(VAR_11, VAR_0, "Deinterlacing mode %d (%s) is "
                   "not supported.\n", VAR_13->mode,
                   FUNC_2(VAR_13->mode));
            return FUNC_0(VAR_2);
        }
    }

    VAR_15.type = VAR_8;
    VAR_15.algorithm = VAR_13->mode;
    VAR_15.flags = 0;

    VAR_14 = FUNC_3(VAR_11,
                                          VAR_9,
                                          &VAR_15,
                                          sizeof(VAR_15),
                                          1);
    if (VAR_14)
        return VAR_14;

    VAR_14 = FUNC_6(VAR_12->hwctx->display,
                                       VAR_12->va_context,
                                       &VAR_12->filter_buffers[0], 1,
                                       &VAR_13->pipeline_caps);
    if (VAR_14 != VAR_10) {
        FUNC_1(VAR_11, VAR_0, "Failed to query pipeline "
               "caps: %d (%s).\n", VAR_14, FUNC_4(VAR_14));
        return FUNC_0(VAR_3);
    }

    VAR_13->extra_delay_for_timestamps = VAR_13->field_rate == 2 &&
        VAR_13->pipeline_caps.num_backward_references == 0;

    VAR_13->queue_depth = VAR_13->pipeline_caps.num_backward_references +
                       VAR_13->pipeline_caps.num_forward_references +
                       VAR_13->extra_delay_for_timestamps + 1;
    if (VAR_13->queue_depth > VAR_5) {
        FUNC_1(VAR_11, VAR_0, "Pipeline requires too many "
               "references (%u forward, %u back).\n",
               VAR_13->pipeline_caps.num_forward_references,
               VAR_13->pipeline_caps.num_backward_references);
        return FUNC_0(VAR_4);
    }

    return 0;
}
