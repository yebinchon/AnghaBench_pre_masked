
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_17__ {TYPE_3__* out; TYPE_3__* in; } ;
typedef TYPE_2__ ThreadData ;
struct TYPE_20__ {TYPE_1__* internal; TYPE_4__** outputs; } ;
struct TYPE_19__ {int channels; TYPE_5__* dst; } ;
struct TYPE_18__ {int pts; } ;
struct TYPE_16__ {int (* execute ) (TYPE_5__*,int ,TYPE_2__*,int *,int ) ;} ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVFilterLink ;
typedef TYPE_5__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_3__**) ;
 int FUNC_3 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_4 (TYPE_5__*) ;
 TYPE_3__* FUNC_5 (TYPE_4__*,int ) ;
 int VAR_2 ;
 int FUNC_6 (TYPE_5__*,int ,TYPE_2__*,int *,int ) ;

__attribute__((used)) static int FUNC_7(AVFilterLink *VAR_3, AVFrame *VAR_4)
{
    AVFilterContext *VAR_5 = VAR_3->dst;
    AVFilterLink *VAR_6 = VAR_5->outputs[0];
    AVFrame *VAR_7 = ((void*)0);
    ThreadData VAR_8;

    VAR_7 = FUNC_5(VAR_6, VAR_1);
    if (!VAR_7) {
        FUNC_2(&VAR_4);
        return FUNC_0(VAR_0);
    }
    VAR_7->pts = VAR_4->pts;

    VAR_8.in = VAR_4; VAR_8.out = VAR_7;
    VAR_5->internal->execute(VAR_5, VAR_2, &VAR_8, ((void*)0), FUNC_1(VAR_6->channels,
                                                                   FUNC_4(VAR_5)));

    FUNC_2(&VAR_4);
    return FUNC_3(VAR_6, VAR_7);
}
