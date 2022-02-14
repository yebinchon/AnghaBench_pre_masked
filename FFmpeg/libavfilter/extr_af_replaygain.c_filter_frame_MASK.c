
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef size_t int64_t ;
struct TYPE_17__ {TYPE_1__* priv; TYPE_3__** outputs; } ;
struct TYPE_16__ {TYPE_4__* dst; } ;
struct TYPE_15__ {int nb_samples; scalar_t__* data; } ;
struct TYPE_14__ {int * histogram; int peak; } ;
typedef TYPE_1__ ReplayGainContext ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t FUNC_1 (size_t,int ,scalar_t__) ;
 int FUNC_2 (TYPE_2__**) ;
 int FUNC_3 (TYPE_1__*,float*,int ) ;
 int FUNC_4 (float*,int ,int *) ;
 int FUNC_5 (float*,int ) ;
 int FUNC_6 (TYPE_3__*,TYPE_2__*) ;
 TYPE_2__* FUNC_7 (TYPE_3__*,int ) ;
 int FUNC_8 (int) ;
 size_t FUNC_9 (int ) ;
 int FUNC_10 (TYPE_1__*,float const*,float*,int ) ;

__attribute__((used)) static int FUNC_11(AVFilterLink *VAR_2, AVFrame *VAR_3)
{
    AVFilterContext *VAR_4 = VAR_2->dst;
    AVFilterLink *VAR_5 = VAR_4->outputs[0];
    ReplayGainContext *VAR_6 = VAR_4->priv;
    int64_t VAR_7;
    AVFrame *VAR_8;

    VAR_8 = FUNC_7(VAR_5, VAR_3->nb_samples);
    if (!VAR_8) {
        FUNC_2(&VAR_3);
        return FUNC_0(VAR_0);
    }

    FUNC_4((float *)VAR_3->data[0],
                              VAR_3->nb_samples, &VAR_6->peak);
    FUNC_10(VAR_6, (const float *)VAR_3->data[0],
                                        (float *)VAR_8->data[0],
                                                 VAR_8->nb_samples);
    FUNC_3(VAR_6, (float *)VAR_8->data[0],
                                             VAR_8->nb_samples);
    VAR_7 = FUNC_9(FUNC_8(100 * FUNC_5((float *)VAR_8->data[0],
                                                           VAR_8->nb_samples)));
    VAR_7 = FUNC_1(VAR_7, 0, VAR_1 - 1);

    VAR_6->histogram[VAR_7]++;

    FUNC_2(&VAR_8);
    return FUNC_6(VAR_5, VAR_3);
}
