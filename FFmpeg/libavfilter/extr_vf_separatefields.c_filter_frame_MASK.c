
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_15__ {TYPE_3__** outputs; TYPE_1__* priv; } ;
struct TYPE_14__ {int h; TYPE_4__* dst; } ;
struct TYPE_13__ {int top_field_first; scalar_t__ pts; scalar_t__ interlaced_frame; int height; } ;
struct TYPE_12__ {int nb_planes; TYPE_2__* second; } ;
typedef TYPE_1__ SeparateFieldsContext ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 int FUNC_3 (TYPE_3__*,TYPE_2__*) ;

__attribute__((used)) static int FUNC_4(AVFilterLink *VAR_2, AVFrame *VAR_3)
{
    AVFilterContext *VAR_4 = VAR_2->dst;
    SeparateFieldsContext *VAR_5 = VAR_4->priv;
    AVFilterLink *VAR_6 = VAR_4->outputs[0];
    int VAR_7;

    VAR_3->height = VAR_6->h;
    VAR_3->interlaced_frame = 0;

    if (!VAR_5->second) {
        goto clone;
    } else {
        AVFrame *VAR_8 = VAR_5->second;

        FUNC_2(VAR_8, VAR_5->nb_planes, VAR_8->top_field_first);

        if (VAR_8->pts != VAR_0 &&
            VAR_3->pts != VAR_0)
            VAR_8->pts += VAR_3->pts;
        else
            VAR_8->pts = VAR_0;

        VAR_7 = FUNC_3(VAR_6, VAR_8);
        if (VAR_7 < 0)
            return VAR_7;
clone:
        VAR_5->second = FUNC_1(VAR_3);
        if (!VAR_5->second)
            return FUNC_0(VAR_1);
    }

    FUNC_2(VAR_3, VAR_5->nb_planes, !VAR_3->top_field_first);

    if (VAR_3->pts != VAR_0)
        VAR_3->pts *= 2;

    return FUNC_3(VAR_6, VAR_3);
}
