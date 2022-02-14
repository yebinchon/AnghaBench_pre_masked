
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_9__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int eof; TYPE_1__* cur; TYPE_9__* next; } ;
typedef TYPE_2__ W3FDIFContext ;
struct TYPE_15__ {int pts; } ;
struct TYPE_14__ {int * inputs; TYPE_2__* priv; } ;
struct TYPE_13__ {TYPE_5__* src; } ;
struct TYPE_12__ {scalar_t__ pts; } ;
struct TYPE_10__ {scalar_t__ pts; } ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVFilterLink ;
typedef TYPE_5__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_1 (TYPE_9__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,TYPE_3__*) ;

__attribute__((used)) static int FUNC_4(AVFilterLink *VAR_2)
{
    AVFilterContext *VAR_3 = VAR_2->src;
    W3FDIFContext *VAR_4 = VAR_3->priv;
    int VAR_5;

    if (VAR_4->eof)
        return VAR_0;

    VAR_5 = FUNC_2(VAR_3->inputs[0]);

    if (VAR_5 == VAR_0 && VAR_4->cur) {
        AVFrame *VAR_6 = FUNC_1(VAR_4->next);
        if (!VAR_6)
            return FUNC_0(VAR_1);
        VAR_6->pts = VAR_4->next->pts * 2 - VAR_4->cur->pts;
        FUNC_3(VAR_3->inputs[0], VAR_6);
        VAR_4->eof = 1;
    } else if (VAR_5 < 0) {
        return VAR_5;
    }

    return 0;
}
