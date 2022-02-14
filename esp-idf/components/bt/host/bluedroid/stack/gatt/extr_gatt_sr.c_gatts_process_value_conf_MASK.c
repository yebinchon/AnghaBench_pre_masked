
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ indicate_handle; int tcb_idx; int conf_timer_ent; } ;
typedef TYPE_1__ tGATT_TCB ;
struct TYPE_10__ {scalar_t__ s_hdl; scalar_t__ e_hdl; int gatt_if; scalar_t__ in_use; } ;
typedef TYPE_2__ tGATT_SR_REG ;
struct TYPE_11__ {scalar_t__ handle; int member_0; } ;
typedef TYPE_3__ tGATTS_DATA ;
typedef scalar_t__ UINT8 ;
typedef int UINT32 ;
typedef scalar_t__ UINT16 ;
struct TYPE_12__ {TYPE_2__* sr_reg; } ;
typedef scalar_t__ BOOLEAN ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 TYPE_8__ VAR_2 ;
 int FUNC_4 (TYPE_1__*,scalar_t__,scalar_t__) ;
 int FUNC_5 (scalar_t__,int ,int ,TYPE_3__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*,scalar_t__) ;

void FUNC_7(tGATT_TCB *VAR_3, UINT8 VAR_4)
{
    UINT16 VAR_5 = VAR_3->indicate_handle;
    UINT32 VAR_6;
    UINT8 VAR_7;
    tGATT_SR_REG *VAR_8 = VAR_2.sr_reg;
    BOOLEAN VAR_9;
    UINT16 VAR_10;

    FUNC_3 (&VAR_3->conf_timer_ent);
    if (FUNC_1(VAR_5)) {
        VAR_3->indicate_handle = 0;
        VAR_9 = FUNC_6(VAR_3, VAR_5);

        if (VAR_9) {
            for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7 ++, VAR_8 ++) {
                if (VAR_8->in_use && VAR_8->s_hdl <= VAR_5 && VAR_8->e_hdl >= VAR_5) {
                    VAR_6 = FUNC_4(VAR_3, VAR_4, VAR_5);
                    VAR_10 = FUNC_0(VAR_3->tcb_idx, VAR_8->gatt_if);
                    tGATTS_DATA VAR_11 = {0};
                    VAR_11.handle = VAR_5;
                    FUNC_5(VAR_10,
                                              VAR_6, VAR_0, &VAR_11);
                }
            }
        }
    } else {
        FUNC_2("unexpected handle value confirmation");
    }
}
