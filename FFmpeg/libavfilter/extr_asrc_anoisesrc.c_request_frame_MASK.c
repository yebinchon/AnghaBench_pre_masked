
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {int duration; int nb_samples; int amplitude; double (* filter ) (double,int ) ;int pts; int infinite; int buf; int c; } ;
struct TYPE_12__ {TYPE_4__* priv; } ;
struct TYPE_11__ {TYPE_3__* src; } ;
struct TYPE_10__ {int pts; scalar_t__* data; } ;
typedef TYPE_1__ AVFrame ;
typedef TYPE_2__ AVFilterLink ;
typedef TYPE_3__ AVFilterContext ;
typedef TYPE_4__ ANoiseSrcContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*) ;
 TYPE_1__* FUNC_3 (TYPE_2__*,int) ;
 double FUNC_4 (double,int ) ;

__attribute__((used)) static int FUNC_5(AVFilterLink *VAR_2)
{
    AVFilterContext *VAR_3 = VAR_2->src;
    ANoiseSrcContext *VAR_4 = VAR_3->priv;
    AVFrame *VAR_5;
    int VAR_6, VAR_7;
    double *VAR_8;

    if (!VAR_4->infinite && VAR_4->duration <= 0) {
        return VAR_0;
    } else if (!VAR_4->infinite && VAR_4->duration < VAR_4->nb_samples) {
        VAR_6 = VAR_4->duration;
    } else {
        VAR_6 = VAR_4->nb_samples;
    }

    if (!(VAR_5 = FUNC_3(VAR_2, VAR_6)))
        return FUNC_0(VAR_1);

    VAR_8 = (double *)VAR_5->data[0];
    for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
        double VAR_9;
        VAR_9 = VAR_4->amplitude * ((2 * ((double) FUNC_1(&VAR_4->c) / 0xffffffff)) - 1);
        VAR_8[VAR_7] = VAR_4->filter(VAR_9, VAR_4->buf);
    }

    if (!VAR_4->infinite)
        VAR_4->duration -= VAR_6;

    VAR_5->pts = VAR_4->pts;
    VAR_4->pts += VAR_6;
    return FUNC_2(VAR_2, VAR_5);
}
