
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int is_disabled; int * inputs; TYPE_1__* priv; } ;
struct TYPE_10__ {TYPE_4__* src; } ;
struct TYPE_9__ {int pts; } ;
struct TYPE_8__ {int nb_frames; TYPE_2__** frames; int flush_idx; int * pts; } ;
typedef TYPE_1__ RandomContext ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(AVFilterLink *VAR_1)
{
    AVFilterContext *VAR_2 = VAR_1->src;
    RandomContext *VAR_3 = VAR_2->priv;
    int VAR_4;

    VAR_4 = FUNC_1(VAR_2->inputs[0]);

next:
    if (VAR_4 == VAR_0 && !VAR_2->is_disabled && VAR_3->nb_frames > 0) {
        AVFrame *VAR_5 = VAR_3->frames[VAR_3->nb_frames - 1];
        if (!VAR_5) {
            VAR_3->nb_frames--;
            goto next;
        }
        VAR_5->pts = VAR_3->pts[VAR_3->flush_idx++];
        VAR_4 = FUNC_0(VAR_1, VAR_5);
        VAR_3->frames[VAR_3->nb_frames - 1] = ((void*)0);
        VAR_3->nb_frames--;
    }

    return VAR_4;
}
