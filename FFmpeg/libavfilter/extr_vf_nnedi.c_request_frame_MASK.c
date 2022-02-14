
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {int pts; } ;
struct TYPE_12__ {int * inputs; TYPE_1__* priv; } ;
struct TYPE_11__ {TYPE_4__* src; } ;
struct TYPE_10__ {scalar_t__ pts; } ;
struct TYPE_9__ {int eof; scalar_t__ cur_pts; TYPE_8__* second; } ;
typedef TYPE_1__ NNEDIContext ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_1 (TYPE_8__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,TYPE_2__*) ;

__attribute__((used)) static int FUNC_4(AVFilterLink *VAR_2)
{
    AVFilterContext *VAR_3 = VAR_2->src;
    NNEDIContext *VAR_4 = VAR_3->priv;
    int VAR_5;

    if (VAR_4->eof)
        return VAR_0;

    VAR_5 = FUNC_2(VAR_3->inputs[0]);

    if (VAR_5 == VAR_0 && VAR_4->second) {
        AVFrame *VAR_6 = FUNC_1(VAR_4->second);

        if (!VAR_6)
            return FUNC_0(VAR_1);

        VAR_6->pts = VAR_4->second->pts * 2 - VAR_4->cur_pts;
        VAR_4->eof = 1;

        FUNC_3(VAR_3->inputs[0], VAR_6);
    } else if (VAR_5 < 0) {
        return VAR_5;
    }

    return 0;
}
