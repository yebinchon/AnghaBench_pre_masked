
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int tGATT_TCB ;
typedef int tBT_TRANSPORT ;
typedef size_t UINT8 ;
struct TYPE_3__ {scalar_t__ p_srv_chg_callback; } ;
struct TYPE_4__ {int * tcb; scalar_t__ handle_of_h_r; TYPE_1__ cb_info; } ;
typedef int BOOLEAN ;
typedef int BD_ADDR ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 TYPE_2__ VAR_1 ;
 scalar_t__ FUNC_1 (size_t,int ,size_t*,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;

void FUNC_5 (void)
{
    UINT8 VAR_2, VAR_3;
    BD_ADDR VAR_4;
    BOOLEAN VAR_5 = VAR_0;
    tGATT_TCB *VAR_6;
    tBT_TRANSPORT VAR_7;

    FUNC_0 ("gatt_proc_srv_chg");

    if (VAR_1.cb_info.p_srv_chg_callback && VAR_1.handle_of_h_r) {
        FUNC_4();
        VAR_2 = 0;
        while (FUNC_1(VAR_2, VAR_4, &VAR_3, &VAR_7)) {
            VAR_6 = &VAR_1.tcb[VAR_3];
            VAR_5 = FUNC_2(VAR_6);

            if (!VAR_5) {
                FUNC_3(VAR_4);
            } else {
                FUNC_0 ("discard srv chg - already has one in the queue");
            }
            VAR_2 = ++VAR_3;
        }
    }
}
