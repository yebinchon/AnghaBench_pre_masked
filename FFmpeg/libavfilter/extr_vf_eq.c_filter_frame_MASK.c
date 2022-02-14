
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_26__ {int (* adjust ) (TYPE_6__*,int ,int ,int ,int ,int,int) ;} ;
struct TYPE_25__ {TYPE_1__* priv; TYPE_4__** outputs; } ;
struct TYPE_24__ {int w; int h; int frame_count_out; int time_base; int format; TYPE_5__* dst; } ;
struct TYPE_23__ {int pkt_pos; int * linesize; int * data; int pts; } ;
struct TYPE_22__ {int nb_components; int log2_chroma_h; int log2_chroma_w; } ;
struct TYPE_21__ {int* var_values; scalar_t__ eval_mode; TYPE_6__* param; } ;
typedef TYPE_1__ EQContext ;
typedef TYPE_2__ AVPixFmtDescriptor ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVFilterLink ;
typedef TYPE_5__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ) ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_3 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_4 (TYPE_3__**) ;
 int FUNC_5 (int ,int ,int ,int ,int,int) ;
 TYPE_2__* FUNC_6 (int ) ;
 int FUNC_7 (TYPE_4__*,TYPE_3__*) ;
 TYPE_3__* FUNC_8 (TYPE_4__*,int,int) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_6__*,int ,int ,int ,int ,int,int) ;

__attribute__((used)) static int FUNC_14(AVFilterLink *VAR_6, AVFrame *VAR_7)
{
    AVFilterContext *VAR_8 = VAR_6->dst;
    AVFilterLink *VAR_9 = VAR_6->dst->outputs[0];
    EQContext *VAR_10 = VAR_8->priv;
    AVFrame *VAR_11;
    int64_t VAR_12 = VAR_7->pkt_pos;
    const AVPixFmtDescriptor *VAR_13;
    int VAR_14;

    VAR_11 = FUNC_8(VAR_9, VAR_6->w, VAR_6->h);
    if (!VAR_11) {
        FUNC_4(&VAR_7);
        return FUNC_0(VAR_0);
    }

    FUNC_3(VAR_11, VAR_7);
    VAR_13 = FUNC_6(VAR_6->format);

    VAR_10->var_values[VAR_3] = VAR_6->frame_count_out;
    VAR_10->var_values[VAR_4] = VAR_12 == -1 ? VAR_2 : VAR_12;
    VAR_10->var_values[VAR_5] = FUNC_2(VAR_7->pts, VAR_6->time_base);

    if (VAR_10->eval_mode == VAR_1) {
        FUNC_11(VAR_10);
        FUNC_10(VAR_10);
        FUNC_9(VAR_10);
        FUNC_12(VAR_10);
    }

    for (VAR_14 = 0; VAR_14 < VAR_13->nb_components; VAR_14++) {
        int VAR_15 = VAR_6->w;
        int VAR_16 = VAR_6->h;

        if (VAR_14 == 1 || VAR_14 == 2) {
            VAR_15 = FUNC_1(VAR_15, VAR_13->log2_chroma_w);
            VAR_16 = FUNC_1(VAR_16, VAR_13->log2_chroma_h);
        }

        if (VAR_10->param[VAR_14].adjust)
            VAR_10->param[VAR_14].adjust(&VAR_10->param[VAR_14], VAR_11->data[VAR_14], VAR_11->linesize[VAR_14],
                                 VAR_7->data[VAR_14], VAR_7->linesize[VAR_14], VAR_15, VAR_16);
        else
            FUNC_5(VAR_11->data[VAR_14], VAR_11->linesize[VAR_14],
                                VAR_7->data[VAR_14], VAR_7->linesize[VAR_14], VAR_15, VAR_16);
    }

    FUNC_4(&VAR_7);
    return FUNC_7(VAR_9, VAR_11);
}
