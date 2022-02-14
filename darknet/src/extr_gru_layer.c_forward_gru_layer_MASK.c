
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int input; scalar_t__ train; } ;
typedef TYPE_1__ network ;
struct TYPE_9__ {int outputs; int batch; int steps; int state; int prev_state; int output; int z_cpu; int r_cpu; int forgot_state; int h_cpu; int inputs; scalar_t__ tanh; int delta; struct TYPE_9__* wh; struct TYPE_9__* wr; struct TYPE_9__* wz; struct TYPE_9__* uh; struct TYPE_9__* ur; struct TYPE_9__* uz; } ;
typedef TYPE_2__ layer ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int,int ) ;
 int FUNC_1 (int,int,int,int,int,int) ;
 int FUNC_2 (int,int,int,int,int) ;
 int FUNC_3 (int,int ,int ,int) ;
 int FUNC_4 (TYPE_2__,TYPE_1__) ;
 int FUNC_5 (TYPE_2__*,int) ;
 int FUNC_6 (int,int,int,int,int) ;
 int FUNC_7 (int,int,int,int,int) ;

void FUNC_8(layer VAR_2, network VAR_3)
{
    network VAR_4 = VAR_3;
    VAR_4.train = VAR_3.train;
    int VAR_5;
    layer VAR_6 = *(VAR_2.uz);
    layer VAR_7 = *(VAR_2.ur);
    layer VAR_8 = *(VAR_2.uh);

    layer VAR_9 = *(VAR_2.wz);
    layer VAR_10 = *(VAR_2.wr);
    layer VAR_11 = *(VAR_2.wh);

    FUNC_3(VAR_2.outputs * VAR_2.batch * VAR_2.steps, 0, VAR_6.delta, 1);
    FUNC_3(VAR_2.outputs * VAR_2.batch * VAR_2.steps, 0, VAR_7.delta, 1);
    FUNC_3(VAR_2.outputs * VAR_2.batch * VAR_2.steps, 0, VAR_8.delta, 1);

    FUNC_3(VAR_2.outputs * VAR_2.batch * VAR_2.steps, 0, VAR_9.delta, 1);
    FUNC_3(VAR_2.outputs * VAR_2.batch * VAR_2.steps, 0, VAR_10.delta, 1);
    FUNC_3(VAR_2.outputs * VAR_2.batch * VAR_2.steps, 0, VAR_11.delta, 1);
    if(VAR_3.train) {
        FUNC_3(VAR_2.outputs * VAR_2.batch * VAR_2.steps, 0, VAR_2.delta, 1);
        FUNC_2(VAR_2.outputs*VAR_2.batch, VAR_2.state, 1, VAR_2.prev_state, 1);
    }

    for (VAR_5 = 0; VAR_5 < VAR_2.steps; ++VAR_5) {
        VAR_4.input = VAR_2.state;
        FUNC_4(VAR_9, VAR_4);
        FUNC_4(VAR_10, VAR_4);

        VAR_4.input = VAR_3.input;
        FUNC_4(VAR_6, VAR_4);
        FUNC_4(VAR_7, VAR_4);
        FUNC_4(VAR_8, VAR_4);


        FUNC_2(VAR_2.outputs*VAR_2.batch, VAR_6.output, 1, VAR_2.z_cpu, 1);
        FUNC_1(VAR_2.outputs*VAR_2.batch, 1, VAR_9.output, 1, VAR_2.z_cpu, 1);

        FUNC_2(VAR_2.outputs*VAR_2.batch, VAR_7.output, 1, VAR_2.r_cpu, 1);
        FUNC_1(VAR_2.outputs*VAR_2.batch, 1, VAR_10.output, 1, VAR_2.r_cpu, 1);

        FUNC_0(VAR_2.z_cpu, VAR_2.outputs*VAR_2.batch, VAR_0);
        FUNC_0(VAR_2.r_cpu, VAR_2.outputs*VAR_2.batch, VAR_0);

        FUNC_2(VAR_2.outputs*VAR_2.batch, VAR_2.state, 1, VAR_2.forgot_state, 1);
        FUNC_6(VAR_2.outputs*VAR_2.batch, VAR_2.r_cpu, 1, VAR_2.forgot_state, 1);

        VAR_4.input = VAR_2.forgot_state;
        FUNC_4(VAR_11, VAR_4);

        FUNC_2(VAR_2.outputs*VAR_2.batch, VAR_8.output, 1, VAR_2.h_cpu, 1);
        FUNC_1(VAR_2.outputs*VAR_2.batch, 1, VAR_11.output, 1, VAR_2.h_cpu, 1);

        if(VAR_2.tanh){
            FUNC_0(VAR_2.h_cpu, VAR_2.outputs*VAR_2.batch, VAR_1);
        } else {
            FUNC_0(VAR_2.h_cpu, VAR_2.outputs*VAR_2.batch, VAR_0);
        }

        FUNC_7(VAR_2.state, VAR_2.h_cpu, VAR_2.z_cpu, VAR_2.outputs*VAR_2.batch, VAR_2.output);

        FUNC_2(VAR_2.outputs*VAR_2.batch, VAR_2.output, 1, VAR_2.state, 1);

        VAR_3.input += VAR_2.inputs*VAR_2.batch;
        VAR_2.output += VAR_2.outputs*VAR_2.batch;
        FUNC_5(&VAR_6, 1);
        FUNC_5(&VAR_7, 1);
        FUNC_5(&VAR_8, 1);

        FUNC_5(&VAR_9, 1);
        FUNC_5(&VAR_10, 1);
        FUNC_5(&VAR_11, 1);
    }
}
