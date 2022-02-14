
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__** inputs; } ;
struct TYPE_7__ {TYPE_3__* dst; } ;
struct TYPE_6__ {scalar_t__ w; scalar_t__ h; scalar_t__ format; } ;
typedef TYPE_2__ AVFilterLink ;
typedef TYPE_3__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_3__*,int ,char*) ;

__attribute__((used)) static int FUNC_2(AVFilterLink *VAR_2)
{
    AVFilterContext *VAR_3 = VAR_2->dst;

    if (VAR_3->inputs[0]->w != VAR_3->inputs[1]->w ||
        VAR_3->inputs[0]->h != VAR_3->inputs[1]->h) {
        FUNC_1(VAR_3, VAR_0, "Width and height of input videos must be same.\n");
        return FUNC_0(VAR_1);
    }
    if (VAR_3->inputs[0]->format != VAR_3->inputs[1]->format) {
        FUNC_1(VAR_3, VAR_0, "Inputs must be of same pixel format.\n");
        return FUNC_0(VAR_1);
    }

    return 0;
}
