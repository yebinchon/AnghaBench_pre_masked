
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ acl_priority; scalar_t__ in_use; } ;
typedef TYPE_1__ tL2C_LCB ;
typedef scalar_t__ UINT8 ;
struct TYPE_4__ {TYPE_1__* lcb_pool; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;

UINT8 FUNC_0 (void)
{
    UINT8 VAR_3 = 0;
    int VAR_4;
    tL2C_LCB *VAR_5 = &VAR_2.lcb_pool[0];

    for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++, VAR_5++) {
        if ((VAR_5->in_use) && (VAR_5->acl_priority == VAR_0)) {
            VAR_3++;
        }
    }
    return VAR_3;
}
