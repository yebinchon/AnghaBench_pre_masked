
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


struct TYPE_22__ {int* n_clippings; int temp_afft; int temp_fft; int temp_src; int ringbuffer; int ir; int delay; int write; TYPE_4__* out; TYPE_4__* in; } ;
typedef TYPE_2__ ThreadData ;
struct TYPE_26__ {TYPE_1__* internal; TYPE_5__** outputs; TYPE_3__* priv; } ;
struct TYPE_25__ {TYPE_6__* dst; } ;
struct TYPE_24__ {int nb_samples; } ;
struct TYPE_23__ {scalar_t__ type; int temp_afft; int temp_fft; int temp_src; int ringbuffer; int data_ir; int delay; int write; } ;
struct TYPE_21__ {int (* execute ) (TYPE_6__*,int ,TYPE_2__*,int *,int) ;} ;
typedef TYPE_3__ SOFAlizerContext ;
typedef TYPE_4__ AVFrame ;
typedef TYPE_5__ AVFilterLink ;
typedef TYPE_6__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (TYPE_4__*,TYPE_4__*) ;
 int FUNC_2 (TYPE_4__**) ;
 int FUNC_3 (TYPE_6__*,int ,char*,int,int) ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_5__*,TYPE_4__*) ;
 TYPE_4__* FUNC_6 (TYPE_5__*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (TYPE_6__*,int ,TYPE_2__*,int *,int) ;
 int FUNC_8 (TYPE_6__*,int ,TYPE_2__*,int *,int) ;

__attribute__((used)) static int FUNC_9(AVFilterLink *VAR_6, AVFrame *VAR_7)
{
    AVFilterContext *VAR_8 = VAR_6->dst;
    SOFAlizerContext *VAR_9 = VAR_8->priv;
    AVFilterLink *VAR_10 = VAR_8->outputs[0];
    int VAR_11[2] = { 0 };
    ThreadData VAR_12;
    AVFrame *VAR_13;

    VAR_13 = FUNC_6(VAR_10, VAR_7->nb_samples);
    if (!VAR_13) {
        FUNC_2(&VAR_7);
        return FUNC_0(VAR_1);
    }
    FUNC_1(VAR_13, VAR_7);

    VAR_12.in = VAR_7; VAR_12.out = VAR_13; VAR_12.write = VAR_9->write;
    VAR_12.delay = VAR_9->delay; VAR_12.ir = VAR_9->data_ir; VAR_12.n_clippings = VAR_11;
    VAR_12.ringbuffer = VAR_9->ringbuffer; VAR_12.temp_src = VAR_9->temp_src;
    VAR_12.temp_fft = VAR_9->temp_fft;
    VAR_12.temp_afft = VAR_9->temp_afft;

    if (VAR_9->type == VAR_3) {
        VAR_8->internal->execute(VAR_8, VAR_4, &VAR_12, ((void*)0), 2);
    } else if (VAR_9->type == VAR_2) {
        VAR_8->internal->execute(VAR_8, VAR_5, &VAR_12, ((void*)0), 2);
    }
    FUNC_4();


    if (VAR_11[0] + VAR_11[1] > 0) {
        FUNC_3(VAR_8, VAR_0, "%d of %d samples clipped. Please reduce gain.\n",
               VAR_11[0] + VAR_11[1], VAR_13->nb_samples * 2);
    }

    FUNC_2(&VAR_7);
    return FUNC_5(VAR_10, VAR_13);
}
