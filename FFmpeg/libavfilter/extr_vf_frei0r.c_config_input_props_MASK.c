
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* priv; } ;
struct TYPE_8__ {int h; int w; TYPE_3__* dst; } ;
struct TYPE_7__ {int params; scalar_t__ (* construct ) (int ,int ) ;scalar_t__ instance; int (* destruct ) (scalar_t__) ;} ;
typedef TYPE_1__ Frei0rContext ;
typedef TYPE_2__ AVFilterLink ;
typedef TYPE_3__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_3__*,int ,char*) ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(AVFilterLink *VAR_2)
{
    AVFilterContext *VAR_3 = VAR_2->dst;
    Frei0rContext *VAR_4 = VAR_3->priv;

    if (VAR_4->destruct && VAR_4->instance)
        VAR_4->destruct(VAR_4->instance);
    if (!(VAR_4->instance = VAR_4->construct(VAR_2->w, VAR_2->h))) {
        FUNC_1(VAR_3, VAR_0, "Impossible to load frei0r instance.\n");
        return FUNC_0(VAR_1);
    }

    return FUNC_2(VAR_3, VAR_4->params);
}
