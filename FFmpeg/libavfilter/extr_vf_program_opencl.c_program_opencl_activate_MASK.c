
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* priv; } ;
struct TYPE_4__ {scalar_t__ nb_inputs; int fs; } ;
typedef TYPE_1__ ProgramOpenCLContext ;
typedef TYPE_2__ AVFilterContext ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(AVFilterContext *VAR_0)
{
    ProgramOpenCLContext *VAR_1 = VAR_0->priv;

    FUNC_0(VAR_1->nb_inputs > 0);

    return FUNC_1(&VAR_1->fs);
}
