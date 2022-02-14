
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int h; TYPE_1__* dst; } ;
struct TYPE_11__ {int* linesize; scalar_t__* data; scalar_t__ interlaced_frame; int height; } ;
struct TYPE_10__ {int nb_planes; scalar_t__ type; } ;
struct TYPE_9__ {TYPE_4__** outputs; TYPE_2__* priv; } ;
typedef TYPE_2__ FieldContext ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVFilterLink ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_4__*,TYPE_3__*) ;

__attribute__((used)) static int FUNC_1(AVFilterLink *VAR_1, AVFrame *VAR_2)
{
    FieldContext *VAR_3 = VAR_1->dst->priv;
    AVFilterLink *VAR_4 = VAR_1->dst->outputs[0];
    int VAR_5;

    VAR_2->height = VAR_4->h;
    VAR_2->interlaced_frame = 0;

    for (VAR_5 = 0; VAR_5 < VAR_3->nb_planes; VAR_5++) {
        if (VAR_3->type == VAR_0)
            VAR_2->data[VAR_5] = VAR_2->data[VAR_5] + VAR_2->linesize[VAR_5];
        VAR_2->linesize[VAR_5] = 2 * VAR_2->linesize[VAR_5];
    }
    return FUNC_0(VAR_4, VAR_2);
}
