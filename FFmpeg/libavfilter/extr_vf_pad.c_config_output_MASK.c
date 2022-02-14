
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int h; int w; TYPE_1__* src; } ;
struct TYPE_6__ {int h; int w; } ;
struct TYPE_5__ {TYPE_2__* priv; } ;
typedef TYPE_2__ PadContext ;
typedef TYPE_3__ AVFilterLink ;



__attribute__((used)) static int FUNC_0(AVFilterLink *VAR_0)
{
    PadContext *VAR_1 = VAR_0->src->priv;

    VAR_0->w = VAR_1->w;
    VAR_0->h = VAR_1->h;
    return 0;
}
