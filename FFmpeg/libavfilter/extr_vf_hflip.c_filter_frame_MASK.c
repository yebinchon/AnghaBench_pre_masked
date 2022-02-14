
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_15__ ;


struct TYPE_21__ {TYPE_3__* out; TYPE_3__* in; } ;
typedef TYPE_2__ ThreadData ;
struct TYPE_24__ {TYPE_1__* internal; TYPE_4__** outputs; } ;
struct TYPE_23__ {int h; int format; int w; TYPE_5__* dst; } ;
struct TYPE_22__ {int * data; } ;
struct TYPE_20__ {int (* execute ) (TYPE_5__*,int ,TYPE_2__*,int *,int ) ;} ;
struct TYPE_19__ {int flags; } ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVFilterLink ;
typedef TYPE_5__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_3 (TYPE_3__**) ;
 TYPE_15__* FUNC_4 (int ) ;
 int FUNC_5 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_6 (TYPE_5__*) ;
 TYPE_3__* FUNC_7 (TYPE_4__*,int ,int ) ;
 int VAR_3 ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (TYPE_5__*,int ,TYPE_2__*,int *,int ) ;

__attribute__((used)) static int FUNC_10(AVFilterLink *VAR_4, AVFrame *VAR_5)
{
    AVFilterContext *VAR_6 = VAR_4->dst;
    AVFilterLink *VAR_7 = VAR_6->outputs[0];
    ThreadData VAR_8;
    AVFrame *VAR_9;

    VAR_9 = FUNC_7(VAR_7, VAR_7->w, VAR_7->h);
    if (!VAR_9) {
        FUNC_3(&VAR_5);
        return FUNC_0(VAR_2);
    }
    FUNC_2(VAR_9, VAR_5);


    if (FUNC_4(VAR_4->format)->flags & VAR_1)
        FUNC_8(VAR_9->data[1], VAR_5->data[1], VAR_0);

    VAR_8.in = VAR_5, VAR_8.out = VAR_9;
    VAR_6->internal->execute(VAR_6, VAR_3, &VAR_8, ((void*)0), FUNC_1(VAR_7->h, FUNC_6(VAR_6)));

    FUNC_3(&VAR_5);
    return FUNC_5(VAR_7, VAR_9);
}
