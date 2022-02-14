
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_5__ {TYPE_1__* p_lcb; int remote_cid; } ;
typedef TYPE_2__ tL2C_CCB ;
struct TYPE_4__ {int handle; } ;


 TYPE_2__* FUNC_0 (int *,int ) ;

bool FUNC_1(uint16_t VAR_0, uint16_t *VAR_1, uint16_t *VAR_2)
{
    tL2C_CCB *VAR_3 = FUNC_0(((void*)0), VAR_0);
    if (!VAR_3) {
        return 0;
    }

    if (VAR_1) {
        *VAR_1 = VAR_3->remote_cid;
    }
    if (VAR_2) {
        *VAR_2 = VAR_3->p_lcb->handle;
    }

    return 1;
}
