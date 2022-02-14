
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_15__ {TYPE_1__* priv; TYPE_3__** outputs; } ;
struct TYPE_14__ {int time_base; TYPE_4__* dst; } ;
struct TYPE_13__ {int pts; } ;
struct TYPE_12__ {int track; int renderer; } ;
typedef TYPE_1__ AssContext ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;
typedef int ASS_Image ;


 int VAR_0 ;
 int * FUNC_0 (int ,int ,double,int*) ;
 int FUNC_1 (TYPE_4__*,int ,char*,double) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_4 (TYPE_1__*,TYPE_2__*,int *) ;

__attribute__((used)) static int FUNC_5(AVFilterLink *VAR_1, AVFrame *VAR_2)
{
    AVFilterContext *VAR_3 = VAR_1->dst;
    AVFilterLink *VAR_4 = VAR_3->outputs[0];
    AssContext *VAR_5 = VAR_3->priv;
    int VAR_6 = 0;
    double VAR_7 = VAR_2->pts * FUNC_2(VAR_1->time_base) * 1000;
    ASS_Image *VAR_8 = FUNC_0(VAR_5->renderer, VAR_5->track,
                                        VAR_7, &VAR_6);

    if (VAR_6)
        FUNC_1(VAR_3, VAR_0, "Change happened at time ms:%f\n", VAR_7);

    FUNC_4(VAR_5, VAR_2, VAR_8);

    return FUNC_3(VAR_4, VAR_2);
}
