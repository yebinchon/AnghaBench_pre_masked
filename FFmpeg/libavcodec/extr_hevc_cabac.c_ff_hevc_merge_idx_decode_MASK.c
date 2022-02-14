
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int max_num_merge_cand; } ;
struct TYPE_7__ {TYPE_2__* HEVClc; TYPE_1__ sh; } ;
struct TYPE_6__ {int cc; } ;
typedef TYPE_3__ HEVCContext ;


 int FUNC_0 (int ) ;
 size_t VAR_0 ;
 int * VAR_1 ;
 scalar_t__ FUNC_1 (int *) ;

int FUNC_2(HEVCContext *VAR_2)
{
    int VAR_3 = FUNC_0(VAR_1[VAR_0]);

    if (VAR_3 != 0) {
        while (VAR_3 < VAR_2->sh.max_num_merge_cand-1 && FUNC_1(&VAR_2->HEVClc->cc))
            VAR_3++;
    }
    return VAR_3;
}
