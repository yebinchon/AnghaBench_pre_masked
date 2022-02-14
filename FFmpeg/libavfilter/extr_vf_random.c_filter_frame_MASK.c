
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {TYPE_3__** outputs; TYPE_1__* priv; } ;
struct TYPE_11__ {TYPE_4__* dst; } ;
struct TYPE_10__ {int pts; } ;
struct TYPE_9__ {int nb_frames_filled; int nb_frames; int * pts; TYPE_2__** frames; int lfg; } ;
typedef TYPE_1__ RandomContext ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_2 (int *,int *,int) ;

__attribute__((used)) static int FUNC_3(AVFilterLink *VAR_0, AVFrame *VAR_1)
{
    AVFilterContext *VAR_2 = VAR_0->dst;
    RandomContext *VAR_3 = VAR_2->priv;
    AVFilterLink *VAR_4 = VAR_2->outputs[0];
    AVFrame *VAR_5;
    int VAR_6;

    if (VAR_3->nb_frames_filled < VAR_3->nb_frames) {
        VAR_3->frames[VAR_3->nb_frames_filled] = VAR_1;
        VAR_3->pts[VAR_3->nb_frames_filled++] = VAR_1->pts;
        return 0;
    }

    VAR_6 = FUNC_0(&VAR_3->lfg) % VAR_3->nb_frames;

    VAR_5 = VAR_3->frames[VAR_6];
    VAR_5->pts = VAR_3->pts[0];
    FUNC_2(&VAR_3->pts[0], &VAR_3->pts[1], (VAR_3->nb_frames - 1) * sizeof(VAR_3->pts[0]));
    VAR_3->frames[VAR_6] = VAR_1;
    VAR_3->pts[VAR_3->nb_frames - 1] = VAR_1->pts;

    return FUNC_1(VAR_4, VAR_5);
}
