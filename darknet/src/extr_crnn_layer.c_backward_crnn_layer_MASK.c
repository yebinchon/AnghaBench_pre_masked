
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int input; int delta; } ;
typedef TYPE_1__ network ;
struct TYPE_9__ {int steps; int state; int hidden; int batch; int output; int delta; int inputs; scalar_t__ shortcut; struct TYPE_9__* output_layer; struct TYPE_9__* self_layer; struct TYPE_9__* input_layer; } ;
typedef TYPE_2__ layer ;


 int FUNC_0 (int,int,int,int,int,int) ;
 int FUNC_1 (TYPE_2__,TYPE_1__) ;
 int FUNC_2 (int,int,int,int,int) ;
 int FUNC_3 (TYPE_2__*,int) ;

void FUNC_4(layer VAR_0, network VAR_1)
{
    network VAR_2 = VAR_1;
    int VAR_3;
    layer VAR_4 = *(VAR_0.input_layer);
    layer VAR_5 = *(VAR_0.self_layer);
    layer VAR_6 = *(VAR_0.output_layer);

    FUNC_3(&VAR_4, VAR_0.steps-1);
    FUNC_3(&VAR_5, VAR_0.steps-1);
    FUNC_3(&VAR_6, VAR_0.steps-1);

    VAR_0.state += VAR_0.hidden*VAR_0.batch*VAR_0.steps;
    for (VAR_3 = VAR_0.steps-1; VAR_3 >= 0; --VAR_3) {
        FUNC_2(VAR_0.hidden * VAR_0.batch, VAR_4.output, 1, VAR_0.state, 1);
        FUNC_0(VAR_0.hidden * VAR_0.batch, 1, VAR_5.output, 1, VAR_0.state, 1);

        VAR_2.input = VAR_0.state;
        VAR_2.delta = VAR_5.delta;
        FUNC_1(VAR_6, VAR_2);

        VAR_0.state -= VAR_0.hidden*VAR_0.batch;
        VAR_2.input = VAR_0.state;
        VAR_2.delta = VAR_5.delta - VAR_0.hidden*VAR_0.batch;
        if (VAR_3 == 0) VAR_2.delta = 0;
        FUNC_1(VAR_5, VAR_2);

        FUNC_2(VAR_0.hidden*VAR_0.batch, VAR_5.delta, 1, VAR_4.delta, 1);
        if (VAR_3 > 0 && VAR_0.shortcut) FUNC_0(VAR_0.hidden*VAR_0.batch, 1, VAR_5.delta, 1, VAR_5.delta - VAR_0.hidden*VAR_0.batch, 1);
        VAR_2.input = VAR_1.input + VAR_3*VAR_0.inputs*VAR_0.batch;
        if(VAR_1.delta) VAR_2.delta = VAR_1.delta + VAR_3*VAR_0.inputs*VAR_0.batch;
        else VAR_2.delta = 0;
        FUNC_1(VAR_4, VAR_2);

        FUNC_3(&VAR_4, -1);
        FUNC_3(&VAR_5, -1);
        FUNC_3(&VAR_6, -1);
    }
}
