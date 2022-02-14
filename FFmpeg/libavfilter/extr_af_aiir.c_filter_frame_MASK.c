
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_8__ ;
typedef struct TYPE_31__ TYPE_7__ ;
typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_23__ ;
typedef struct TYPE_24__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_28__ {TYPE_6__* out; TYPE_6__* in; } ;
typedef TYPE_4__ ThreadData ;
struct TYPE_32__ {TYPE_3__** inputs; TYPE_7__** outputs; TYPE_1__* internal; TYPE_5__* priv; } ;
struct TYPE_31__ {int channels; int time_base; TYPE_8__* dst; } ;
struct TYPE_30__ {int pts; int nb_samples; } ;
struct TYPE_29__ {TYPE_23__* video; scalar_t__ response; TYPE_2__* iir; int iir_channel; } ;
struct TYPE_27__ {int time_base; } ;
struct TYPE_26__ {scalar_t__ clippings; } ;
struct TYPE_25__ {scalar_t__ pts; } ;
struct TYPE_24__ {int (* execute ) (TYPE_8__*,int ,TYPE_4__*,int *,int) ;} ;
typedef TYPE_5__ AudioIIRContext ;
typedef TYPE_6__ AVFrame ;
typedef TYPE_7__ AVFilterLink ;
typedef TYPE_8__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_6__* FUNC_1 (TYPE_23__*) ;
 int FUNC_2 (TYPE_6__*,TYPE_6__*) ;
 int FUNC_3 (TYPE_6__**) ;
 scalar_t__ FUNC_4 (TYPE_6__*) ;
 int FUNC_5 (TYPE_8__*,int ,char*,int,scalar_t__) ;
 scalar_t__ FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (TYPE_7__*,TYPE_6__*) ;
 TYPE_6__* FUNC_8 (TYPE_7__*,int ) ;
 int FUNC_9 (TYPE_8__*,int ,TYPE_4__*,int *,int) ;

__attribute__((used)) static int FUNC_10(AVFilterLink *VAR_2, AVFrame *VAR_3)
{
    AVFilterContext *VAR_4 = VAR_2->dst;
    AudioIIRContext *VAR_5 = VAR_4->priv;
    AVFilterLink *VAR_6 = VAR_4->outputs[0];
    ThreadData VAR_7;
    AVFrame *VAR_8;
    int VAR_9, VAR_10;

    if (FUNC_4(VAR_3)) {
        VAR_8 = VAR_3;
    } else {
        VAR_8 = FUNC_8(VAR_6, VAR_3->nb_samples);
        if (!VAR_8) {
            FUNC_3(&VAR_3);
            return FUNC_0(VAR_1);
        }
        FUNC_2(VAR_8, VAR_3);
    }

    VAR_7.in = VAR_3;
    VAR_7.out = VAR_8;
    VAR_4->internal->execute(VAR_4, VAR_5->iir_channel, &VAR_7, ((void*)0), VAR_6->channels);

    for (VAR_9 = 0; VAR_9 < VAR_6->channels; VAR_9++) {
        if (VAR_5->iir[VAR_9].clippings > 0)
            FUNC_5(VAR_4, VAR_0, "Channel %d clipping %d times. Please reduce gain.\n",
                   VAR_9, VAR_5->iir[VAR_9].clippings);
        VAR_5->iir[VAR_9].clippings = 0;
    }

    if (VAR_3 != VAR_8)
        FUNC_3(&VAR_3);

    if (VAR_5->response) {
        AVFilterLink *VAR_11 = VAR_4->outputs[1];
        int64_t VAR_12 = VAR_5->video->pts;
        int64_t VAR_13 = FUNC_6(VAR_8->pts, VAR_4->inputs[0]->time_base, VAR_11->time_base);

        if (VAR_13 > VAR_12) {
            VAR_5->video->pts = VAR_13;
            VAR_10 = FUNC_7(VAR_11, FUNC_1(VAR_5->video));
            if (VAR_10 < 0)
                return VAR_10;
        }
    }

    return FUNC_7(VAR_6, VAR_8);
}
