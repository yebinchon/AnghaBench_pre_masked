
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int data; } ;
typedef TYPE_2__ VMAFMotionContext ;
struct TYPE_9__ {TYPE_1__** inputs; TYPE_2__* priv; } ;
struct TYPE_8__ {TYPE_4__* dst; } ;
struct TYPE_6__ {int format; int h; int w; } ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (int *,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(AVFilterLink *VAR_0)
{
    AVFilterContext *VAR_1 = VAR_0->dst;
    VMAFMotionContext *VAR_2 = VAR_1->priv;

    return FUNC_0(&VAR_2->data, VAR_1->inputs[0]->w,
                              VAR_1->inputs[0]->h, VAR_1->inputs[0]->format);
}
