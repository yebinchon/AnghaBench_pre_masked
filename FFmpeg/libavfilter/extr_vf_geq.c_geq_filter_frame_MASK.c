
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_20__ {int width; int height; int plane; int linesize; } ;
typedef TYPE_2__ ThreadData ;
struct TYPE_24__ {TYPE_1__* internal; TYPE_5__** outputs; TYPE_3__* priv; } ;
struct TYPE_23__ {int frame_count_out; int w; int h; int time_base; TYPE_6__* dst; } ;
struct TYPE_22__ {int pts; int* linesize; scalar_t__* data; } ;
struct TYPE_21__ {int* values; int planes; TYPE_4__* picref; int * dst16; scalar_t__ dst; int vsub; int hsub; } ;
struct TYPE_19__ {int (* execute ) (TYPE_6__*,int ,TYPE_2__*,int *,int ) ;} ;
typedef TYPE_3__ GEQContext ;
typedef TYPE_4__ AVFrame ;
typedef TYPE_5__ AVFilterLink ;
typedef TYPE_6__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int const,int const) ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int FUNC_3 (TYPE_4__*,TYPE_4__*) ;
 int FUNC_4 (TYPE_4__**) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_5__*,TYPE_4__*) ;
 int FUNC_7 (TYPE_6__*) ;
 TYPE_4__* FUNC_8 (TYPE_5__*,int,int) ;
 int VAR_9 ;
 int FUNC_9 (TYPE_6__*,int ,TYPE_2__*,int *,int ) ;

__attribute__((used)) static int FUNC_10(AVFilterLink *VAR_10, AVFrame *VAR_11)
{
    int VAR_12;
    AVFilterContext *VAR_13 = VAR_10->dst;
    const int VAR_14 = FUNC_7(VAR_13);
    GEQContext *VAR_15 = VAR_13->priv;
    AVFilterLink *VAR_16 = VAR_10->dst->outputs[0];
    AVFrame *VAR_17;

    VAR_15->values[VAR_4] = VAR_10->frame_count_out,
    VAR_15->values[VAR_7] = VAR_11->pts == VAR_0 ? VAR_2 : VAR_11->pts * FUNC_5(VAR_10->time_base),

    VAR_15->picref = VAR_11;
    VAR_17 = FUNC_8(VAR_16, VAR_16->w, VAR_16->h);
    if (!VAR_17) {
        FUNC_4(&VAR_11);
        return FUNC_0(VAR_1);
    }
    FUNC_3(VAR_17, VAR_11);

    for (VAR_12 = 0; VAR_12 < VAR_15->planes && VAR_17->data[VAR_12]; VAR_12++) {
        const int VAR_18 = (VAR_12 == 1 || VAR_12 == 2) ? FUNC_1(VAR_10->w, VAR_15->hsub) : VAR_10->w;
        const int VAR_19 = (VAR_12 == 1 || VAR_12 == 2) ? FUNC_1(VAR_10->h, VAR_15->vsub) : VAR_10->h;
        const int VAR_20 = VAR_17->linesize[VAR_12];
        ThreadData VAR_21;

        VAR_15->dst = VAR_17->data[VAR_12];
        VAR_15->dst16 = (uint16_t*)VAR_17->data[VAR_12];

        VAR_15->values[VAR_8] = VAR_18;
        VAR_15->values[VAR_3] = VAR_19;
        VAR_15->values[VAR_6] = VAR_18 / (double)VAR_10->w;
        VAR_15->values[VAR_5] = VAR_19 / (double)VAR_10->h;

        VAR_21.width = VAR_18;
        VAR_21.height = VAR_19;
        VAR_21.plane = VAR_12;
        VAR_21.linesize = VAR_20;

        VAR_13->internal->execute(VAR_13, VAR_9, &VAR_21, ((void*)0), FUNC_2(VAR_19, VAR_14));
    }

    FUNC_4(&VAR_15->picref);
    return FUNC_6(VAR_16, VAR_17);
}
