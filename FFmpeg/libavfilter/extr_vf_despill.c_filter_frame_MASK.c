
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_15__ {int * outputs; TYPE_1__* internal; } ;
struct TYPE_14__ {TYPE_4__* dst; } ;
struct TYPE_13__ {int height; } ;
struct TYPE_12__ {int (* execute ) (TYPE_4__*,int ,TYPE_2__*,int *,int ) ;} ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_2 (int ,TYPE_2__*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*,int ,TYPE_2__*,int *,int ) ;

__attribute__((used)) static int FUNC_5(AVFilterLink *VAR_1, AVFrame *VAR_2)
{
    AVFilterContext *VAR_3 = VAR_1->dst;
    int VAR_4;

    if ((VAR_4 = FUNC_1(VAR_2)))
        return VAR_4;

    if ((VAR_4 = VAR_3->internal->execute(VAR_3, VAR_0, VAR_2, ((void*)0), FUNC_0(VAR_2->height, FUNC_3(VAR_3)))))
        return VAR_4;

    return FUNC_2(VAR_3->outputs[0], VAR_2);
}
