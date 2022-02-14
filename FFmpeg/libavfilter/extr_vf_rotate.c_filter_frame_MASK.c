
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


struct TYPE_22__ {int inw; int inh; int const outh; int const outw; int const xi; int const yi; int const xprime; int const yprime; int plane; int c; int s; TYPE_4__* out; TYPE_4__* in; } ;
typedef TYPE_2__ ThreadData ;
struct TYPE_26__ {TYPE_1__* internal; TYPE_3__* priv; TYPE_5__** outputs; } ;
struct TYPE_25__ {int h; int w; int time_base; int frame_count_out; TYPE_6__* dst; } ;
struct TYPE_24__ {int linesize; int data; int pts; } ;
struct TYPE_23__ {double angle; int nb_planes; int hsub; int vsub; int color; int draw; scalar_t__ fillcolor_enable; int * var_values; int angle_expr; } ;
struct TYPE_21__ {int (* execute ) (TYPE_6__*,int ,TYPE_2__*,int *,int ) ;} ;
typedef TYPE_3__ RotContext ;
typedef TYPE_4__ AVFrame ;
typedef TYPE_5__ AVFilterLink ;
typedef TYPE_6__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int const,int ) ;
 double VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,int ) ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 double FUNC_4 (int ,int *,TYPE_3__*) ;
 int FUNC_5 (TYPE_4__*,TYPE_4__*) ;
 int FUNC_6 (TYPE_4__**) ;
 int FUNC_7 (TYPE_6__*,int ,char*,int ,int ,int) ;
 int FUNC_8 (int *,int *,int ,int ,int ,int ,int ,int ) ;
 int FUNC_9 (TYPE_5__*,TYPE_4__*) ;
 int FUNC_10 (TYPE_6__*) ;
 TYPE_4__* FUNC_11 (TYPE_5__*,int ,int ) ;
 int VAR_7 ;
 int FUNC_12 (int) ;
 int FUNC_13 (TYPE_6__*,int ,TYPE_2__*,int *,int ) ;

__attribute__((used)) static int FUNC_14(AVFilterLink *VAR_8, AVFrame *VAR_9)
{
    AVFilterContext *VAR_10 = VAR_8->dst;
    AVFilterLink *VAR_11 = VAR_10->outputs[0];
    AVFrame *VAR_12;
    RotContext *VAR_13 = VAR_10->priv;
    int VAR_14, VAR_15, VAR_16, VAR_17;
    double VAR_18;

    VAR_12 = FUNC_11(VAR_11, VAR_11->w, VAR_11->h);
    if (!VAR_12) {
        FUNC_6(&VAR_9);
        return FUNC_0(VAR_1);
    }
    FUNC_5(VAR_12, VAR_9);

    VAR_13->var_values[VAR_5] = VAR_8->frame_count_out;
    VAR_13->var_values[VAR_6] = FUNC_3(VAR_9->pts, VAR_8->time_base);
    VAR_13->angle = VAR_18 = FUNC_4(VAR_13->angle_expr, VAR_13->var_values, VAR_13);

    FUNC_7(VAR_10, VAR_0, "n:%f time:%f angle:%f/PI\n",
           VAR_13->var_values[VAR_5], VAR_13->var_values[VAR_6], VAR_13->angle/VAR_4);

    VAR_14 = VAR_18 * VAR_2 * 16;
    VAR_15 = FUNC_12(VAR_14);
    VAR_16 = FUNC_12(VAR_14 + VAR_3/2);


    if (VAR_13->fillcolor_enable)
        FUNC_8(&VAR_13->draw, &VAR_13->color, VAR_12->data, VAR_12->linesize,
                          0, 0, VAR_11->w, VAR_11->h);

    for (VAR_17 = 0; VAR_17 < VAR_13->nb_planes; VAR_17++) {
        int VAR_19 = VAR_17 == 1 || VAR_17 == 2 ? VAR_13->hsub : 0;
        int VAR_20 = VAR_17 == 1 || VAR_17 == 2 ? VAR_13->vsub : 0;
        const int VAR_21 = FUNC_1(VAR_11->w, VAR_19);
        const int VAR_22 = FUNC_1(VAR_11->h, VAR_20);
        ThreadData VAR_23 = { .in = VAR_9, .out = VAR_12,
                          .inw = FUNC_1(VAR_8->w, VAR_19),
                          .inh = FUNC_1(VAR_8->h, VAR_20),
                          .outh = VAR_22, .outw = VAR_21,
                          .xi = -(VAR_21-1) * VAR_16 / 2, .yi = (VAR_21-1) * VAR_15 / 2,
                          .xprime = -(VAR_22-1) * VAR_15 / 2,
                          .yprime = -(VAR_22-1) * VAR_16 / 2,
                          .plane = VAR_17, .c = VAR_16, .s = VAR_15 };


        VAR_10->internal->execute(VAR_10, VAR_7, &VAR_23, ((void*)0), FUNC_2(VAR_22, FUNC_10(VAR_10)));
    }

    FUNC_6(&VAR_9);
    return FUNC_9(VAR_11, VAR_12);
}
