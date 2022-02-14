
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_8__ ;
typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


typedef void* int64_t ;
typedef int buffer ;
struct TYPE_30__ {char* name; int nb_inputs; int nb_outputs; TYPE_7__** outputs; TYPE_7__** inputs; TYPE_2__* filter; TYPE_1__* graph; TYPE_5__* priv; } ;
struct TYPE_29__ {TYPE_4__* dst; TYPE_3__* src; int h; int w; } ;
struct TYPE_28__ {void* pts; } ;
struct TYPE_27__ {void* pts; int white; scalar_t__ mode; } ;
struct TYPE_26__ {char* name; } ;
struct TYPE_25__ {char* name; } ;
struct TYPE_24__ {char* name; } ;
struct TYPE_23__ {int nb_filters; TYPE_8__** filters; } ;
typedef TYPE_5__ GraphMonitorContext ;
typedef TYPE_6__ AVFrame ;
typedef TYPE_7__ AVFilterLink ;
typedef TYPE_8__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_5__*,TYPE_6__*,TYPE_7__*) ;
 int FUNC_2 (TYPE_8__*,TYPE_6__*,int,int,TYPE_7__*,size_t) ;
 int FUNC_3 (TYPE_6__*,int,int,char*,int ) ;
 int FUNC_4 (TYPE_7__*,TYPE_6__*) ;
 TYPE_6__* FUNC_5 (TYPE_7__*,int ,int ) ;
 size_t FUNC_6 (TYPE_7__*) ;
 int FUNC_7 (TYPE_8__*) ;
 int FUNC_8 (char*,int,char*,int) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static int FUNC_10(AVFilterContext *VAR_1, int64_t VAR_2)
{
    GraphMonitorContext *VAR_3 = VAR_1->priv;
    AVFilterLink *VAR_4 = VAR_1->outputs[0];
    AVFrame *VAR_5;
    int VAR_6, VAR_7 = 0;

    VAR_5 = FUNC_5(VAR_4, VAR_4->w, VAR_4->h);
    if (!VAR_5)
        return FUNC_0(VAR_0);

    FUNC_1(VAR_3, VAR_5, VAR_4);

    for (int VAR_8 = 0; VAR_8 < VAR_1->graph->nb_filters; VAR_8++) {
        AVFilterContext *VAR_9 = VAR_1->graph->filters[VAR_8];
        char VAR_10[1024] = { 0 };

        if (VAR_3->mode && !FUNC_7(VAR_9))
            continue;

        VAR_6 = 0;
        FUNC_3(VAR_5, VAR_6, VAR_7, VAR_9->name, VAR_3->white);
        VAR_6 += FUNC_9(VAR_9->name) * 8 + 10;
        FUNC_3(VAR_5, VAR_6, VAR_7, VAR_9->filter->name, VAR_3->white);
        VAR_7 += 10;
        for (int VAR_11 = 0; VAR_11 < VAR_9->nb_inputs; VAR_11++) {
            AVFilterLink *VAR_12 = VAR_9->inputs[VAR_11];
            size_t VAR_13 = FUNC_6(VAR_12);

            if (VAR_3->mode && !VAR_13)
                continue;

            VAR_6 = 10;
            FUNC_8(VAR_10, sizeof(VAR_10)-1, "in%d: ", VAR_11);
            FUNC_3(VAR_5, VAR_6, VAR_7, VAR_10, VAR_3->white);
            VAR_6 += FUNC_9(VAR_10) * 8;
            FUNC_3(VAR_5, VAR_6, VAR_7, VAR_12->src->name, VAR_3->white);
            VAR_6 += FUNC_9(VAR_12->src->name) * 8 + 10;
            FUNC_2(VAR_1, VAR_5, VAR_6, VAR_7, VAR_12, VAR_13);
            VAR_7 += 10;
        }

        VAR_7 += 2;
        for (int VAR_14 = 0; VAR_14 < VAR_9->nb_outputs; VAR_14++) {
            AVFilterLink *VAR_15 = VAR_9->outputs[VAR_14];
            size_t VAR_16 = FUNC_6(VAR_15);

            if (VAR_3->mode && !VAR_16)
                continue;

            VAR_6 = 10;
            FUNC_8(VAR_10, sizeof(VAR_10)-1, "out%d: ", VAR_14);
            FUNC_3(VAR_5, VAR_6, VAR_7, VAR_10, VAR_3->white);
            VAR_6 += FUNC_9(VAR_10) * 8;
            FUNC_3(VAR_5, VAR_6, VAR_7, VAR_15->dst->name, VAR_3->white);
            VAR_6 += FUNC_9(VAR_15->dst->name) * 8 + 10;
            FUNC_2(VAR_1, VAR_5, VAR_6, VAR_7, VAR_15, VAR_16);
            VAR_7 += 10;
        }
        VAR_7 += 5;
    }

    VAR_5->pts = VAR_2;
    VAR_3->pts = VAR_2;
    return FUNC_4(VAR_4, VAR_5);
}
