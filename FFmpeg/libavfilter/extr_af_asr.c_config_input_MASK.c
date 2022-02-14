
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int ps; } ;
struct TYPE_6__ {TYPE_3__* priv; } ;
struct TYPE_5__ {TYPE_2__* dst; } ;
typedef TYPE_1__ AVFilterLink ;
typedef TYPE_2__ AVFilterContext ;
typedef TYPE_3__ ASRContext ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(AVFilterLink *VAR_0)
{
    AVFilterContext *VAR_1 = VAR_0->dst;
    ASRContext *VAR_2 = VAR_1->priv;

    FUNC_0(VAR_2->ps);

    return 0;
}
