
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {int first_field; int nb_planes; TYPE_2__* prev; scalar_t__ double_weave; int * planeheight; int * linesize; } ;
typedef TYPE_1__ WeaveContext ;
struct TYPE_17__ {TYPE_3__** outputs; TYPE_1__* priv; } ;
struct TYPE_16__ {int frame_count_out; int h; int w; TYPE_4__* dst; } ;
struct TYPE_15__ {int* linesize; int pts; int interlaced_frame; int top_field_first; scalar_t__* data; } ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_2 (TYPE_2__**) ;
 int FUNC_3 (scalar_t__,int,scalar_t__,int,int ,int ) ;
 int FUNC_4 (TYPE_3__*,TYPE_2__*) ;
 TYPE_2__* FUNC_5 (TYPE_3__*,int ,int ) ;

__attribute__((used)) static int FUNC_6(AVFilterLink *VAR_1, AVFrame *VAR_2)
{
    AVFilterContext *VAR_3 = VAR_1->dst;
    WeaveContext *VAR_4 = VAR_3->priv;
    AVFilterLink *VAR_5 = VAR_3->outputs[0];
    AVFrame *VAR_6;
    int VAR_7;
    int VAR_8;
    int VAR_9, VAR_10;

    if (!VAR_4->prev) {
        VAR_4->prev = VAR_2;
        return 0;
    }

    VAR_6 = FUNC_5(VAR_5, VAR_5->w, VAR_5->h);
    if (!VAR_6) {
        FUNC_2(&VAR_2);
        FUNC_2(&VAR_4->prev);
        return FUNC_0(VAR_0);
    }
    FUNC_1(VAR_6, VAR_2);

    VAR_8 = (VAR_4->double_weave && !(VAR_1->frame_count_out & 1));
    VAR_9 = VAR_8 ? VAR_4->first_field : (!VAR_4->first_field);
    VAR_10 = VAR_8 ? (!VAR_4->first_field) : VAR_4->first_field;
    for (VAR_7 = 0; VAR_7 < VAR_4->nb_planes; VAR_7++) {
        FUNC_3(VAR_6->data[VAR_7] + VAR_6->linesize[VAR_7] * VAR_9,
                            VAR_6->linesize[VAR_7] * 2,
                            VAR_2->data[VAR_7], VAR_2->linesize[VAR_7],
                            VAR_4->linesize[VAR_7], VAR_4->planeheight[VAR_7]);
        FUNC_3(VAR_6->data[VAR_7] + VAR_6->linesize[VAR_7] * VAR_10,
                            VAR_6->linesize[VAR_7] * 2,
                            VAR_4->prev->data[VAR_7], VAR_4->prev->linesize[VAR_7],
                            VAR_4->linesize[VAR_7], VAR_4->planeheight[VAR_7]);
    }

    VAR_6->pts = VAR_4->double_weave ? VAR_4->prev->pts : VAR_2->pts / 2;
    VAR_6->interlaced_frame = 1;
    VAR_6->top_field_first = !VAR_4->first_field;

    if (!VAR_4->double_weave)
        FUNC_2(&VAR_2);
    FUNC_2(&VAR_4->prev);
    if (VAR_4->double_weave)
        VAR_4->prev = VAR_2;
    return FUNC_4(VAR_5, VAR_6);
}
