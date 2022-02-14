
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* priv; } ;
struct TYPE_6__ {TYPE_3__* dst; } ;
struct TYPE_5__ {int ** input_views; } ;
typedef TYPE_1__ FramepackContext ;
typedef int AVFrame ;
typedef TYPE_2__ AVFilterLink ;


 size_t VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_1(AVFilterLink *VAR_1, AVFrame *VAR_2)
{
    FramepackContext *VAR_3 = VAR_1->dst->priv;
    VAR_3->input_views[VAR_0] = VAR_2;
    return FUNC_0(VAR_1->dst);
}
