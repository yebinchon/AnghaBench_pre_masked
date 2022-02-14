
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_24__ {int len; } ;
struct TYPE_23__ {unsigned int nb_inputs; unsigned int nb_outputs; TYPE_6__** outputs; TYPE_1__* filter; int name; TYPE_6__** inputs; } ;
struct TYPE_22__ {unsigned int nb_filters; TYPE_8__** filters; } ;
struct TYPE_21__ {TYPE_5__* dstpad; TYPE_2__* dst; TYPE_4__* srcpad; TYPE_3__* src; } ;
struct TYPE_20__ {int name; } ;
struct TYPE_19__ {int name; } ;
struct TYPE_18__ {int name; } ;
struct TYPE_17__ {int name; } ;
struct TYPE_16__ {int name; } ;
typedef TYPE_6__ AVFilterLink ;
typedef TYPE_7__ AVFilterGraph ;
typedef TYPE_8__ AVFilterContext ;
typedef TYPE_9__ AVBPrint ;


 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 unsigned int FUNC_1 (int,unsigned int,unsigned int) ;
 int FUNC_2 (TYPE_9__*,char,unsigned int) ;
 int FUNC_3 (TYPE_9__*,char*,...) ;
 unsigned int FUNC_4 (TYPE_9__*,TYPE_6__*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(AVBPrint *VAR_0, AVFilterGraph *VAR_1)
{
    unsigned VAR_2, VAR_3, VAR_4, VAR_5;

    for (VAR_2 = 0; VAR_2 < VAR_1->nb_filters; VAR_2++) {
        AVFilterContext *VAR_6 = VAR_1->filters[VAR_2];
        unsigned VAR_7 = 0, VAR_8 = 0;
        unsigned VAR_9 = 0, VAR_10 = 0;
        unsigned VAR_11 = 0, VAR_12 = 0;
        unsigned VAR_13, VAR_14, VAR_15;
        unsigned VAR_16 = FUNC_5(VAR_6->name);
        unsigned VAR_17 = FUNC_5(VAR_6->filter->name);

        for (VAR_3 = 0; VAR_3 < VAR_6->nb_inputs; VAR_3++) {
            AVFilterLink *VAR_18 = VAR_6->inputs[VAR_3];
            unsigned VAR_19 = FUNC_5(VAR_18->src->name) + 1 + FUNC_5(VAR_18->srcpad->name);
            VAR_7 = FUNC_0(VAR_7, VAR_19);
            VAR_9 = FUNC_0(VAR_9, FUNC_5(VAR_18->dstpad->name));
            VAR_11 = FUNC_0(VAR_11, FUNC_4(((void*)0), VAR_18));
        }
        for (VAR_3 = 0; VAR_3 < VAR_6->nb_outputs; VAR_3++) {
            AVFilterLink *VAR_20 = VAR_6->outputs[VAR_3];
            unsigned VAR_21 = FUNC_5(VAR_20->dst->name) + 1 + FUNC_5(VAR_20->dstpad->name);
            VAR_8 = FUNC_0(VAR_8, VAR_21);
            VAR_10 = FUNC_0(VAR_10, FUNC_5(VAR_20->srcpad->name));
            VAR_12 = FUNC_0(VAR_12, FUNC_4(((void*)0), VAR_20));
        }
        VAR_15 = VAR_7 + VAR_9 + VAR_11;
        VAR_15 += VAR_15 ? 4 : 0;
        VAR_13 = FUNC_0(VAR_16 + 2, VAR_17 + 4);
        VAR_14 = FUNC_1(2, VAR_6->nb_inputs, VAR_6->nb_outputs);
        FUNC_2(VAR_0, ' ', VAR_15);
        FUNC_3(VAR_0, "+");
        FUNC_2(VAR_0, '-', VAR_13);
        FUNC_3(VAR_0, "+\n");
        for (VAR_3 = 0; VAR_3 < VAR_14; VAR_3++) {
            unsigned VAR_22 = VAR_3 - (VAR_14 - VAR_6->nb_inputs ) / 2;
            unsigned VAR_23 = VAR_3 - (VAR_14 - VAR_6->nb_outputs) / 2;


            if (VAR_22 < VAR_6->nb_inputs) {
                AVFilterLink *VAR_24 = VAR_6->inputs[VAR_22];
                VAR_5 = VAR_0->len + VAR_7 + 2;
                FUNC_3(VAR_0, "%s:%s", VAR_24->src->name, VAR_24->srcpad->name);
                FUNC_2(VAR_0, '-', VAR_5 - VAR_0->len);
                VAR_5 = VAR_0->len + VAR_11 + 2 +
                    VAR_9 - FUNC_5(VAR_24->dstpad->name);
                FUNC_4(VAR_0, VAR_24);
                FUNC_2(VAR_0, '-', VAR_5 - VAR_0->len);
                FUNC_3(VAR_0, "%s", VAR_24->dstpad->name);
            } else {
                FUNC_2(VAR_0, ' ', VAR_15);
            }


            FUNC_3(VAR_0, "|");
            if (VAR_3 == (VAR_14 - 2) / 2) {
                VAR_4 = (VAR_13 - VAR_16) / 2;
                FUNC_3(VAR_0, "%*s%-*s", VAR_4, "", VAR_13 - VAR_4, VAR_6->name);
            } else if (VAR_3 == (VAR_14 - 2) / 2 + 1) {
                VAR_4 = (VAR_13 - VAR_17 - 2) / 2;
                FUNC_3(VAR_0, "%*s(%s)%*s", VAR_4, "", VAR_6->filter->name,
                        VAR_13 - VAR_17 - 2 - VAR_4, "");
            } else {
                FUNC_2(VAR_0, ' ', VAR_13);
            }
            FUNC_3(VAR_0, "|");


            if (VAR_23 < VAR_6->nb_outputs) {
                AVFilterLink *VAR_25 = VAR_6->outputs[VAR_23];
                unsigned VAR_26 = FUNC_5(VAR_25->dst->name) + 1 +
                              FUNC_5(VAR_25->dstpad->name);
                VAR_5 = VAR_0->len + VAR_10 + 2;
                FUNC_3(VAR_0, "%s", VAR_25->srcpad->name);
                FUNC_2(VAR_0, '-', VAR_5 - VAR_0->len);
                VAR_5 = VAR_0->len + VAR_12 + 2 +
                    VAR_8 - VAR_26;
                FUNC_4(VAR_0, VAR_25);
                FUNC_2(VAR_0, '-', VAR_5 - VAR_0->len);
                FUNC_3(VAR_0, "%s:%s", VAR_25->dst->name, VAR_25->dstpad->name);
            }
            FUNC_3(VAR_0, "\n");
        }
        FUNC_2(VAR_0, ' ', VAR_15);
        FUNC_3(VAR_0, "+");
        FUNC_2(VAR_0, '-', VAR_13);
        FUNC_3(VAR_0, "+\n");
        FUNC_3(VAR_0, "\n");
    }
}
