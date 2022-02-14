
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_17__ {int member_1; int member_0; } ;
struct TYPE_16__ {int member_1; int member_0; } ;
struct TYPE_19__ {TYPE_2__ member_1; TYPE_1__ member_0; } ;
typedef TYPE_4__ selective_color_func_type ;
struct TYPE_20__ {int * out; int * in; } ;
typedef TYPE_5__ ThreadData ;
struct TYPE_23__ {TYPE_3__* internal; TYPE_6__* priv; TYPE_7__** outputs; } ;
struct TYPE_22__ {int h; int w; TYPE_8__* dst; } ;
struct TYPE_21__ {size_t is_16bit; size_t correction_method; } ;
struct TYPE_18__ {int (* execute ) (TYPE_8__*,TYPE_4__ const,TYPE_5__*,int *,int ) ;} ;
typedef TYPE_6__ SelectiveColorContext ;
typedef int AVFrame ;
typedef TYPE_7__ AVFilterLink ;
typedef TYPE_8__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int **) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (TYPE_7__*,int *) ;
 int FUNC_6 (TYPE_8__*) ;
 int * FUNC_7 (TYPE_7__*,int ,int ) ;
 int FUNC_8 (TYPE_8__*,TYPE_4__ const,TYPE_5__*,int *,int ) ;

__attribute__((used)) static int FUNC_9(AVFilterLink *VAR_1, AVFrame *VAR_2)
{
    AVFilterContext *VAR_3 = VAR_1->dst;
    AVFilterLink *VAR_4 = VAR_3->outputs[0];
    int VAR_5;
    AVFrame *VAR_6;
    ThreadData VAR_7;
    const SelectiveColorContext *VAR_8 = VAR_3->priv;
    static const selective_color_func_type VAR_9[2][2][2] = {
        {
            {130, 128},
            {134, 132},
        },{
            {131, 129},
            {135, 133},
        }
    };

    if (FUNC_4(VAR_2)) {
        VAR_5 = 1;
        VAR_6 = VAR_2;
    } else {
        VAR_5 = 0;
        VAR_6 = FUNC_7(VAR_4, VAR_4->w, VAR_4->h);
        if (!VAR_6) {
            FUNC_3(&VAR_2);
            return FUNC_0(VAR_0);
        }
        FUNC_2(VAR_6, VAR_2);
    }

    VAR_7.in = VAR_2;
    VAR_7.out = VAR_6;
    VAR_3->internal->execute(VAR_3, VAR_9[VAR_8->is_16bit][VAR_5][VAR_8->correction_method],
                           &VAR_7, ((void*)0), FUNC_1(VAR_1->h, FUNC_6(VAR_3)));

    if (!VAR_5)
        FUNC_3(&VAR_2);
    return FUNC_5(VAR_4, VAR_6);
}
