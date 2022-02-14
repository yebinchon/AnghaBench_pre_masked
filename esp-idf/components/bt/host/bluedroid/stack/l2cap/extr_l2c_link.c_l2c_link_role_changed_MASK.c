
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ link_state; scalar_t__ in_use; int acl_priority; scalar_t__ link_role; } ;
typedef TYPE_1__ tL2C_LCB ;
typedef scalar_t__ UINT8 ;
struct TYPE_6__ {TYPE_1__* lcb_pool; } ;
typedef scalar_t__ BD_ADDR ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_4__ VAR_5 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (scalar_t__,int ,int ) ;

void FUNC_3 (BD_ADDR VAR_6, UINT8 VAR_7, UINT8 VAR_8)
{
    tL2C_LCB *VAR_9;
    int VAR_10;


    if (VAR_6) {

        VAR_9 = FUNC_1 (VAR_6, VAR_0);
        if (VAR_9) {
            VAR_9->link_role = VAR_7;


            if (VAR_8 == VAR_1) {
                FUNC_2(VAR_6, VAR_9->acl_priority, VAR_4);
            }
        }
    }


    for (VAR_10 = 0, VAR_9 = &VAR_5.lcb_pool[0]; VAR_10 < VAR_3; VAR_10++, VAR_9++) {
        if ((VAR_9->in_use) && (VAR_9->link_state == VAR_2)) {
            FUNC_0 (VAR_9);
        }
    }
}
