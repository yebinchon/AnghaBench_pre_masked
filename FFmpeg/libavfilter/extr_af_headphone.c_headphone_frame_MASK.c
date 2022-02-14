
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


struct TYPE_21__ {int* n_clippings; int temp_afft; int temp_fft; int temp_src; int ringbuffer; int ir; int delay; int write; TYPE_4__* out; TYPE_4__* in; } ;
typedef TYPE_2__ ThreadData ;
struct TYPE_25__ {TYPE_1__* internal; } ;
struct TYPE_24__ {TYPE_6__* src; } ;
struct TYPE_23__ {int nb_samples; int pts; } ;
struct TYPE_22__ {scalar_t__ type; int temp_afft; int temp_fft; int temp_src; int ringbuffer; int data_ir; int delay; int write; } ;
struct TYPE_20__ {int (* execute ) (TYPE_6__*,int ,TYPE_2__*,int *,int) ;} ;
typedef TYPE_3__ HeadphoneContext ;
typedef TYPE_4__ AVFrame ;
typedef TYPE_5__ AVFilterLink ;
typedef TYPE_6__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_4__**) ;
 int FUNC_2 (TYPE_6__*,int ,char*,int,int) ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_5__*,TYPE_4__*) ;
 TYPE_4__* FUNC_5 (TYPE_5__*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (TYPE_6__*,int ,TYPE_2__*,int *,int) ;
 int FUNC_7 (TYPE_6__*,int ,TYPE_2__*,int *,int) ;

__attribute__((used)) static int FUNC_8(HeadphoneContext *VAR_5, AVFrame *VAR_6, AVFilterLink *VAR_7)
{
    AVFilterContext *VAR_8 = VAR_7->src;
    int VAR_9[2] = { 0 };
    ThreadData VAR_10;
    AVFrame *VAR_11;

    VAR_11 = FUNC_5(VAR_7, VAR_6->nb_samples);
    if (!VAR_11) {
        FUNC_1(&VAR_6);
        return FUNC_0(VAR_1);
    }
    VAR_11->pts = VAR_6->pts;

    VAR_10.in = VAR_6; VAR_10.out = VAR_11; VAR_10.write = VAR_5->write;
    VAR_10.delay = VAR_5->delay; VAR_10.ir = VAR_5->data_ir; VAR_10.n_clippings = VAR_9;
    VAR_10.ringbuffer = VAR_5->ringbuffer; VAR_10.temp_src = VAR_5->temp_src;
    VAR_10.temp_fft = VAR_5->temp_fft;
    VAR_10.temp_afft = VAR_5->temp_afft;

    if (VAR_5->type == VAR_2) {
        VAR_8->internal->execute(VAR_8, VAR_3, &VAR_10, ((void*)0), 2);
    } else {
        VAR_8->internal->execute(VAR_8, VAR_4, &VAR_10, ((void*)0), 2);
    }
    FUNC_3();

    if (VAR_9[0] + VAR_9[1] > 0) {
        FUNC_2(VAR_8, VAR_0, "%d of %d samples clipped. Please reduce gain.\n",
               VAR_9[0] + VAR_9[1], VAR_11->nb_samples * 2);
    }

    FUNC_1(&VAR_6);
    return FUNC_4(VAR_7, VAR_11);
}
