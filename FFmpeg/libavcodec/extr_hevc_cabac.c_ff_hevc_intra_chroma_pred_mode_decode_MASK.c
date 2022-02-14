
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* HEVClc; } ;
struct TYPE_4__ {int cc; } ;
typedef TYPE_2__ HEVCContext ;


 int FUNC_0 (int ) ;
 size_t VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (int *) ;

int FUNC_2(HEVCContext *VAR_2)
{
    int VAR_3;
    if (!FUNC_0(VAR_1[VAR_0]))
        return 4;

    VAR_3 = FUNC_1(&VAR_2->HEVClc->cc) << 1;
    VAR_3 |= FUNC_1(&VAR_2->HEVClc->cc);
    return VAR_3;
}
