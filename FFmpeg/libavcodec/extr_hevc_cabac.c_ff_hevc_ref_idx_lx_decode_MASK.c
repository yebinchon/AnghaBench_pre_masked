
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* HEVClc; } ;
struct TYPE_4__ {int cc; } ;
typedef TYPE_2__ HEVCContext ;


 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 size_t VAR_0 ;
 scalar_t__* VAR_1 ;
 scalar_t__ FUNC_2 (int *) ;

int FUNC_3(HEVCContext *VAR_2, int VAR_3)
{
    int VAR_4 = 0;
    int VAR_5 = VAR_3 - 1;
    int VAR_6 = FUNC_0(VAR_5, 2);

    while (VAR_4 < VAR_6 && FUNC_1(VAR_1[VAR_0] + VAR_4))
        VAR_4++;
    if (VAR_4 == 2) {
        while (VAR_4 < VAR_5 && FUNC_2(&VAR_2->HEVClc->cc))
            VAR_4++;
    }

    return VAR_4;
}
