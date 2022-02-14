
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_9__ ;
typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef int hb_value_t ;
struct TYPE_23__ {int den; int num; } ;
struct TYPE_22__ {int den; int num; } ;
struct TYPE_20__ {int den; int num; } ;
struct TYPE_21__ {TYPE_1__ par; int height; int width; } ;
struct TYPE_25__ {TYPE_4__ vrate; TYPE_3__ time_base; TYPE_2__ geometry; int pix_fmt; } ;
typedef TYPE_6__ hb_filter_init_t ;
struct TYPE_26__ {char* settings; TYPE_9__* output; int out_time_base; int * frame; int * avgraph; int last; TYPE_9__* input; } ;
typedef TYPE_7__ hb_avfilter_graph_t ;
typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_28__ {TYPE_5__** inputs; } ;
struct TYPE_27__ {int filter_ctx; } ;
struct TYPE_24__ {int time_base; } ;
typedef TYPE_8__ AVFilterInOut ;
typedef TYPE_9__ AVFilterContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_9__* FUNC_0 (TYPE_7__*,char*,char*) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,char*,char*,int ) ;
 scalar_t__ FUNC_3 (TYPE_9__*,char*,int*,int,int ) ;
 int * FUNC_4 () ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,char*,TYPE_8__**,TYPE_8__**) ;
 int FUNC_7 (TYPE_8__**) ;
 int FUNC_8 (int ,int ,int ,int ) ;
 TYPE_7__* FUNC_9 (int,int) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (TYPE_7__**) ;
 int FUNC_12 (char*,...) ;
 char* FUNC_13 (int ,int *) ;
 char* FUNC_14 (char*,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;

hb_avfilter_graph_t *
FUNC_15(hb_value_t * VAR_4, hb_filter_init_t * VAR_5)
{
    hb_avfilter_graph_t * VAR_6;
    AVFilterInOut * VAR_7 = ((void*)0), * VAR_8 = ((void*)0);
    AVFilterContext * VAR_9;
    char * VAR_10;
    int VAR_11;
    char * VAR_12;

    VAR_6 = FUNC_9(1, sizeof(hb_avfilter_graph_t));
    if (VAR_6 == ((void*)0))
    {
        return ((void*)0);
    }

    VAR_10 = FUNC_13(VAR_3, VAR_4);
    if (VAR_10 == ((void*)0))
    {
        FUNC_12("hb_avfilter_graph_init: no filter settings specified");
        goto fail;
    }

    VAR_6->settings = VAR_10;
    VAR_6->avgraph = FUNC_4();
    if (VAR_6->avgraph == ((void*)0))
    {
        FUNC_12("hb_avfilter_graph_init: avfilter_graph_alloc failed");
        goto fail;
    }

    FUNC_2(VAR_6->avgraph, "scale_sws_opts", "lanczos+accurate_rnd", 0);

    VAR_11 = FUNC_6(VAR_6->avgraph, VAR_10, &VAR_7, &VAR_8);
    if (VAR_11 < 0 || VAR_7 == ((void*)0) || VAR_8 == ((void*)0))
    {
        FUNC_12("hb_avfilter_graph_init: avfilter_graph_parse2 failed (%s)",
                 VAR_10);
        goto fail;
    }


    VAR_12 = FUNC_14(
                "width=%d:height=%d:pix_fmt=%d:sar=%d/%d:"
                "time_base=%d/%d:frame_rate=%d/%d",
                VAR_5->geometry.width, VAR_5->geometry.height, VAR_5->pix_fmt,
                VAR_5->geometry.par.num, VAR_5->geometry.par.den,
                VAR_5->time_base.num, VAR_5->time_base.den,
                VAR_5->vrate.num, VAR_5->vrate.den);

    VAR_9 = FUNC_0(VAR_6, "buffer", VAR_12);
    FUNC_10(VAR_12);
    if (VAR_9 == ((void*)0))
    {
        FUNC_12("hb_avfilter_graph_init: failed to create buffer source filter");
        goto fail;
    }
    VAR_6->input = VAR_9;


    VAR_11 = FUNC_8(VAR_6->last, 0, VAR_7->filter_ctx, 0);
    if (VAR_11 < 0)
    {
        goto fail;
    }
    VAR_6->last = VAR_8->filter_ctx;


    VAR_9 = FUNC_0(VAR_6, "buffersink", ((void*)0));
    if (VAR_9 == ((void*)0))
    {
        FUNC_12("hb_avfilter_graph_init: failed to create buffer output filter");
        goto fail;
    }
    VAR_6->output = VAR_9;

    VAR_11 = FUNC_5(VAR_6->avgraph, ((void*)0));
    if (VAR_11 < 0)
    {
        FUNC_12("hb_avfilter_graph_init: failed to configure filter graph");
        goto fail;
    }

    VAR_6->frame = FUNC_1();
    if (VAR_6->frame == ((void*)0))
    {
        FUNC_12("hb_avfilter_graph_init: failed to allocate frame filter");
        goto fail;
    }

    VAR_6->out_time_base = VAR_6->output->inputs[0]->time_base;

    FUNC_7(&VAR_7);
    FUNC_7(&VAR_8);

    return VAR_6;

fail:
    FUNC_7(&VAR_7);
    FUNC_7(&VAR_8);
    FUNC_11(&VAR_6);

    return ((void*)0);
}
