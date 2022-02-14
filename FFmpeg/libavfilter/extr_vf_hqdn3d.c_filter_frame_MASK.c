
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int direct; int * out; int * in; } ;
typedef TYPE_2__ ThreadData ;
struct TYPE_13__ {scalar_t__ is_disabled; TYPE_1__* internal; TYPE_3__** outputs; } ;
struct TYPE_12__ {int h; int w; TYPE_4__* dst; } ;
struct TYPE_10__ {int (* execute ) (TYPE_4__*,int ,TYPE_2__*,int *,int) ;} ;
typedef int AVFrame ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int **) ;
 scalar_t__ FUNC_3 (int *) ;
 int VAR_1 ;
 int FUNC_4 (TYPE_3__*,int *) ;
 int * FUNC_5 (TYPE_3__*,int ,int ) ;
 int FUNC_6 (TYPE_4__*,int ,TYPE_2__*,int *,int) ;

__attribute__((used)) static int FUNC_7(AVFilterLink *VAR_2, AVFrame *VAR_3)
{
    AVFilterContext *VAR_4 = VAR_2->dst;
    AVFilterLink *VAR_5 = VAR_4->outputs[0];

    AVFrame *VAR_6;
    int VAR_7 = FUNC_3(VAR_3) && !VAR_4->is_disabled;
    ThreadData VAR_8;

    if (VAR_7) {
        VAR_6 = VAR_3;
    } else {
        VAR_6 = FUNC_5(VAR_5, VAR_5->w, VAR_5->h);
        if (!VAR_6) {
            FUNC_2(&VAR_3);
            return FUNC_0(VAR_0);
        }

        FUNC_1(VAR_6, VAR_3);
    }

    VAR_8.in = VAR_3;
    VAR_8.out = VAR_6;
    VAR_8.direct = VAR_7;

    VAR_4->internal->execute(VAR_4, VAR_1, &VAR_8, ((void*)0), 3);

    if (VAR_4->is_disabled) {
        FUNC_2(&VAR_6);
        return FUNC_4(VAR_5, VAR_3);
    }

    if (!VAR_7)
        FUNC_2(&VAR_3);

    return FUNC_4(VAR_5, VAR_6);
}
