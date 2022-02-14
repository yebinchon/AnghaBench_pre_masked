
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int input; scalar_t__ train; int member_0; } ;
typedef TYPE_1__ network ;
struct TYPE_9__ {int outputs; int batch; int steps; int h_cpu; int output; int f_cpu; int i_cpu; int g_cpu; int o_cpu; int temp_cpu; int c_cpu; int cell_cpu; int inputs; int delta; struct TYPE_9__* uo; struct TYPE_9__* ug; struct TYPE_9__* ui; struct TYPE_9__* uf; struct TYPE_9__* wo; struct TYPE_9__* wg; struct TYPE_9__* wi; struct TYPE_9__* wf; } ;
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

void FUNC_7(layer VAR_2, network VAR_3)
{
    network VAR_4 = { 0 };
    VAR_4.train = VAR_3.train;
    int VAR_5;
    layer VAR_6 = *(VAR_2.wf);
    layer VAR_7 = *(VAR_2.wi);
    layer VAR_8 = *(VAR_2.wg);
    layer VAR_9 = *(VAR_2.wo);

    layer VAR_10 = *(VAR_2.uf);
    layer VAR_11 = *(VAR_2.ui);
    layer VAR_12 = *(VAR_2.ug);
    layer VAR_13 = *(VAR_2.uo);

    FUNC_3(VAR_2.outputs * VAR_2.batch * VAR_2.steps, 0, VAR_6.delta, 1);
    FUNC_3(VAR_2.outputs * VAR_2.batch * VAR_2.steps, 0, VAR_7.delta, 1);
    FUNC_3(VAR_2.outputs * VAR_2.batch * VAR_2.steps, 0, VAR_8.delta, 1);
    FUNC_3(VAR_2.outputs * VAR_2.batch * VAR_2.steps, 0, VAR_9.delta, 1);

    FUNC_3(VAR_2.outputs * VAR_2.batch * VAR_2.steps, 0, VAR_10.delta, 1);
    FUNC_3(VAR_2.outputs * VAR_2.batch * VAR_2.steps, 0, VAR_11.delta, 1);
    FUNC_3(VAR_2.outputs * VAR_2.batch * VAR_2.steps, 0, VAR_12.delta, 1);
    FUNC_3(VAR_2.outputs * VAR_2.batch * VAR_2.steps, 0, VAR_13.delta, 1);
    if (VAR_3.train) {
        FUNC_3(VAR_2.outputs * VAR_2.batch * VAR_2.steps, 0, VAR_2.delta, 1);
    }

    for (VAR_5 = 0; VAR_5 < VAR_2.steps; ++VAR_5) {
        VAR_4.input = VAR_2.h_cpu;
        FUNC_4(VAR_6, VAR_4);
        FUNC_4(VAR_7, VAR_4);
        FUNC_4(VAR_8, VAR_4);
        FUNC_4(VAR_9, VAR_4);

        VAR_4.input = VAR_3.input;
        FUNC_4(VAR_10, VAR_4);
        FUNC_4(VAR_11, VAR_4);
        FUNC_4(VAR_12, VAR_4);
        FUNC_4(VAR_13, VAR_4);

        FUNC_2(VAR_2.outputs*VAR_2.batch, VAR_6.output, 1, VAR_2.f_cpu, 1);
        FUNC_1(VAR_2.outputs*VAR_2.batch, 1, VAR_10.output, 1, VAR_2.f_cpu, 1);

        FUNC_2(VAR_2.outputs*VAR_2.batch, VAR_7.output, 1, VAR_2.i_cpu, 1);
        FUNC_1(VAR_2.outputs*VAR_2.batch, 1, VAR_11.output, 1, VAR_2.i_cpu, 1);

        FUNC_2(VAR_2.outputs*VAR_2.batch, VAR_8.output, 1, VAR_2.g_cpu, 1);
        FUNC_1(VAR_2.outputs*VAR_2.batch, 1, VAR_12.output, 1, VAR_2.g_cpu, 1);

        FUNC_2(VAR_2.outputs*VAR_2.batch, VAR_9.output, 1, VAR_2.o_cpu, 1);
        FUNC_1(VAR_2.outputs*VAR_2.batch, 1, VAR_13.output, 1, VAR_2.o_cpu, 1);

        FUNC_0(VAR_2.f_cpu, VAR_2.outputs*VAR_2.batch, VAR_0);
        FUNC_0(VAR_2.i_cpu, VAR_2.outputs*VAR_2.batch, VAR_0);
        FUNC_0(VAR_2.g_cpu, VAR_2.outputs*VAR_2.batch, VAR_1);
        FUNC_0(VAR_2.o_cpu, VAR_2.outputs*VAR_2.batch, VAR_0);

        FUNC_2(VAR_2.outputs*VAR_2.batch, VAR_2.i_cpu, 1, VAR_2.temp_cpu, 1);
        FUNC_6(VAR_2.outputs*VAR_2.batch, VAR_2.g_cpu, 1, VAR_2.temp_cpu, 1);
        FUNC_6(VAR_2.outputs*VAR_2.batch, VAR_2.f_cpu, 1, VAR_2.c_cpu, 1);
        FUNC_1(VAR_2.outputs*VAR_2.batch, 1, VAR_2.temp_cpu, 1, VAR_2.c_cpu, 1);

        FUNC_2(VAR_2.outputs*VAR_2.batch, VAR_2.c_cpu, 1, VAR_2.h_cpu, 1);
        FUNC_0(VAR_2.h_cpu, VAR_2.outputs*VAR_2.batch, VAR_1);
        FUNC_6(VAR_2.outputs*VAR_2.batch, VAR_2.o_cpu, 1, VAR_2.h_cpu, 1);

        FUNC_2(VAR_2.outputs*VAR_2.batch, VAR_2.c_cpu, 1, VAR_2.cell_cpu, 1);
        FUNC_2(VAR_2.outputs*VAR_2.batch, VAR_2.h_cpu, 1, VAR_2.output, 1);

        VAR_3.input += VAR_2.inputs*VAR_2.batch;
        VAR_2.output += VAR_2.outputs*VAR_2.batch;
        VAR_2.cell_cpu += VAR_2.outputs*VAR_2.batch;

        FUNC_5(&VAR_6, 1);
        FUNC_5(&VAR_7, 1);
        FUNC_5(&VAR_8, 1);
        FUNC_5(&VAR_9, 1);

        FUNC_5(&VAR_10, 1);
        FUNC_5(&VAR_11, 1);
        FUNC_5(&VAR_12, 1);
        FUNC_5(&VAR_13, 1);
    }
}
