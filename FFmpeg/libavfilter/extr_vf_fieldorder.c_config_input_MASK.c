
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* priv; } ;
struct TYPE_6__ {int w; int format; TYPE_3__* dst; } ;
struct TYPE_5__ {int line_size; } ;
typedef TYPE_1__ FieldOrderContext ;
typedef TYPE_2__ AVFilterLink ;
typedef TYPE_3__ AVFilterContext ;


 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(AVFilterLink *VAR_0)
{
    AVFilterContext *VAR_1 = VAR_0->dst;
    FieldOrderContext *VAR_2 = VAR_1->priv;

    return FUNC_0(VAR_2->line_size, VAR_0->format, VAR_0->w);
}
