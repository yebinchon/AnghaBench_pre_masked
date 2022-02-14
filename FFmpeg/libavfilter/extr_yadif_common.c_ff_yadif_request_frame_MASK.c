
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_13__ {int eof; TYPE_1__* cur; TYPE_10__* next; int current_field; scalar_t__ frame_pending; } ;
typedef TYPE_2__ YADIFContext ;
struct TYPE_16__ {int * inputs; TYPE_2__* priv; } ;
struct TYPE_15__ {TYPE_5__* src; } ;
struct TYPE_14__ {scalar_t__ pts; } ;
struct TYPE_12__ {scalar_t__ pts; } ;
struct TYPE_11__ {int pts; } ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVFilterLink ;
typedef TYPE_5__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* FUNC_1 (TYPE_10__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,TYPE_3__*) ;
 int FUNC_4 (TYPE_5__*,int) ;

int FUNC_5(AVFilterLink *VAR_3)
{
    AVFilterContext *VAR_4 = VAR_3->src;
    YADIFContext *VAR_5 = VAR_4->priv;
    int VAR_6;

    if (VAR_5->frame_pending) {
        FUNC_4(VAR_4, 1);
        return 0;
    }

    if (VAR_5->eof)
        return VAR_0;

    VAR_6 = FUNC_2(VAR_4->inputs[0]);

    if (VAR_6 == VAR_0 && VAR_5->cur) {
        AVFrame *VAR_7 = FUNC_1(VAR_5->next);

        if (!VAR_7)
            return FUNC_0(VAR_1);

        VAR_5->current_field = VAR_2;
        VAR_7->pts = VAR_5->next->pts * 2 - VAR_5->cur->pts;

        FUNC_3(VAR_4->inputs[0], VAR_7);
        VAR_5->eof = 1;
    } else if (VAR_6 < 0) {
        return VAR_6;
    }

    return 0;
}
