
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* HEVClc; } ;
struct TYPE_4__ {int cc; } ;
typedef TYPE_2__ HEVCContext ;


 int FUNC_0 (int *) ;

int FUNC_1(HEVCContext *VAR_0)
{
    int VAR_1;
    int VAR_2 = FUNC_0(&VAR_0->HEVClc->cc);

    for (VAR_1 = 0; VAR_1 < 4; VAR_1++)
        VAR_2 = (VAR_2 << 1) | FUNC_0(&VAR_0->HEVClc->cc);
    return VAR_2;
}
