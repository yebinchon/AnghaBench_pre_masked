
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {TYPE_3__** inputs; TYPE_1__* priv; } ;
struct TYPE_11__ {scalar_t__ num; scalar_t__ den; } ;
struct TYPE_12__ {TYPE_2__ time_base; TYPE_4__* src; int h; int w; void* sample_rate; } ;
struct TYPE_10__ {int tb_expr; void** var_values; } ;
typedef TYPE_1__ SetTBContext ;
typedef TYPE_2__ AVRational ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 TYPE_2__ FUNC_1 (double,int ) ;
 int FUNC_2 (double*,int ,int ,void**,int *,int *,int *,int *,int *,int ,int *) ;
 int FUNC_3 (TYPE_4__*,int ,char*,scalar_t__,...) ;
 void* FUNC_4 (TYPE_2__) ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_5(AVFilterLink *VAR_9)
{
    AVFilterContext *VAR_10 = VAR_9->src;
    SetTBContext *VAR_11 = VAR_10->priv;
    AVFilterLink *VAR_12 = VAR_10->inputs[0];
    AVRational VAR_13;
    int VAR_14;
    double VAR_15;

    VAR_11->var_values[VAR_5] = FUNC_4(VAR_2);
    VAR_11->var_values[VAR_6] = FUNC_4(VAR_12->time_base);
    VAR_11->var_values[VAR_7] = VAR_12->sample_rate;

    VAR_9->w = VAR_12->w;
    VAR_9->h = VAR_12->h;

    if ((VAR_14 = FUNC_2(&VAR_15, VAR_11->tb_expr, VAR_8, VAR_11->var_values,
                                      ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), 0, ((void*)0))) < 0) {
        FUNC_3(VAR_10, VAR_0, "Invalid expression '%s' for timebase.\n", VAR_11->tb_expr);
        return VAR_14;
    }
    VAR_13 = FUNC_1(VAR_15, VAR_4);
    if (VAR_13.num <= 0 || VAR_13.den <= 0) {
        FUNC_3(VAR_10, VAR_0,
               "Invalid non-positive values for the timebase num:%d or den:%d.\n",
               VAR_13.num, VAR_13.den);
        return FUNC_0(VAR_3);
    }

    VAR_9->time_base = VAR_13;
    FUNC_3(VAR_9->src, VAR_1, "tb:%d/%d -> tb:%d/%d\n",
           VAR_12 ->time_base.num, VAR_12 ->time_base.den,
           VAR_9->time_base.num, VAR_9->time_base.den);

    return 0;
}
