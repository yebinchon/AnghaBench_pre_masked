
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int int16_t ;
struct TYPE_17__ {TYPE_1__* dst; } ;
struct TYPE_16__ {int nb_samples; scalar_t__* data; } ;
struct TYPE_15__ {int * taps; } ;
struct TYPE_14__ {scalar_t__ priv; TYPE_4__** outputs; } ;
typedef TYPE_2__ EarwaxContext ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVFilterLink ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int,int) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_3 (TYPE_3__**) ;
 int FUNC_4 (TYPE_4__*,TYPE_3__*) ;
 TYPE_3__* FUNC_5 (TYPE_4__*,int) ;
 int FUNC_6 (int *,int *,int) ;
 int FUNC_7 (int *,int *,int) ;
 int * FUNC_8 (int *,int *,int *) ;

__attribute__((used)) static int FUNC_9(AVFilterLink *VAR_2, AVFrame *VAR_3)
{
    AVFilterLink *VAR_4 = VAR_2->dst->outputs[0];
    int16_t *VAR_5, *VAR_6, *VAR_7, *VAR_8;
    AVFrame *VAR_9 = FUNC_5(VAR_4, VAR_3->nb_samples);
    int VAR_10;

    if (!VAR_9) {
        FUNC_3(&VAR_3);
        return FUNC_0(VAR_0);
    }
    FUNC_2(VAR_9, VAR_3);

    VAR_5 = ((EarwaxContext *)VAR_2->dst->priv)->taps;
    VAR_8 = (int16_t *)VAR_9->data[0];
    VAR_7 = (int16_t *)VAR_3 ->data[0];

    VAR_10 = FUNC_1(VAR_1, 2*VAR_3->nb_samples);

    FUNC_6(VAR_5+VAR_1, VAR_7, VAR_10 * sizeof(*VAR_5));
    VAR_8 = FUNC_8(VAR_5, VAR_5 + VAR_10, VAR_8);


    if (2*VAR_3->nb_samples >= VAR_1 ){
        VAR_6 = VAR_7 + VAR_3->nb_samples * 2 - VAR_1;
        FUNC_8(VAR_7, VAR_6, VAR_8);


        FUNC_6(VAR_5, VAR_6, VAR_1 * sizeof(*VAR_5));
    } else
        FUNC_7(VAR_5, VAR_5 + 2*VAR_3->nb_samples, VAR_1 * sizeof(*VAR_5));

    FUNC_3(&VAR_3);
    return FUNC_4(VAR_4, VAR_9);
}
