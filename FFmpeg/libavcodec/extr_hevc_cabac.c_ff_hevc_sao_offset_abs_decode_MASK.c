
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* sps; } ;
struct TYPE_9__ {TYPE_3__* HEVClc; TYPE_2__ ps; } ;
struct TYPE_8__ {int cc; } ;
struct TYPE_6__ {int bit_depth; } ;
typedef TYPE_4__ HEVCContext ;


 int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (int *) ;

int FUNC_2(HEVCContext *VAR_0)
{
    int VAR_1 = 0;
    int VAR_2 = (1 << (FUNC_0(VAR_0->ps.sps->bit_depth, 10) - 5)) - 1;

    while (VAR_1 < VAR_2 && FUNC_1(&VAR_0->HEVClc->cc))
        VAR_1++;
    return VAR_1;
}
