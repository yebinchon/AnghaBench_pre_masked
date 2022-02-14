
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ link_state; void* idle_timeout; scalar_t__ in_use; } ;
typedef TYPE_1__ tL2C_LCB ;
struct TYPE_6__ {TYPE_1__* p_lcb; } ;
typedef TYPE_2__ tL2C_CCB ;
typedef void* UINT16 ;
struct TYPE_7__ {void* idle_timeout; } ;
typedef scalar_t__ BOOLEAN ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,void*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_4__ VAR_3 ;
 TYPE_2__* FUNC_1 (int *,void*) ;

BOOLEAN FUNC_2 (UINT16 VAR_4, UINT16 VAR_5, BOOLEAN VAR_6)
{
    tL2C_CCB *VAR_7;
    tL2C_LCB *VAR_8;

    if (VAR_6) {
        VAR_3.idle_timeout = VAR_5;
    } else {

        if ((VAR_7 = FUNC_1 (((void*)0), VAR_4)) == ((void*)0)) {
            FUNC_0 ("L2CAP - no CCB for L2CA_SetIdleTimeout, CID: %d", VAR_4);
            return (VAR_0);
        }

        VAR_8 = VAR_7->p_lcb;

        if ((VAR_8) && (VAR_8->in_use) && (VAR_8->link_state == VAR_1)) {
            VAR_8->idle_timeout = VAR_5;
        } else {
            return (VAR_0);
        }
    }

    return (VAR_2);
}
