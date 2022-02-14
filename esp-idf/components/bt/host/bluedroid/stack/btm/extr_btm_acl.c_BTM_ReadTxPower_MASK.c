
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int tBT_TRANSPORT ;
typedef int tBTM_STATUS ;
typedef int tBTM_CMPL_CB ;
struct TYPE_6__ {scalar_t__ transport; int hci_handle; } ;
typedef TYPE_2__ tACL_CONN ;
struct TYPE_5__ {int tx_power_timer; int * p_tx_power_cmpl_cb; int read_tx_pwr_addr; } ;
struct TYPE_7__ {TYPE_1__ devcb; } ;
typedef int BOOLEAN ;
typedef int * BD_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int ,int ,int ,int ,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 TYPE_2__* FUNC_1 (int *,int ) ;
 TYPE_3__ VAR_9 ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int *,int ) ;

tBTM_STATUS FUNC_7 (BD_ADDR VAR_10, tBT_TRANSPORT VAR_11, tBTM_CMPL_CB *VAR_12)
{
    tACL_CONN *VAR_13;
    BOOLEAN VAR_14;



    FUNC_0 ("BTM_ReadTxPower: RemBdAddr: %02x%02x%02x%02x%02x%02x\n",
                   VAR_10[0], VAR_10[1], VAR_10[2],
                   VAR_10[3], VAR_10[4], VAR_10[5]);


    if (VAR_9.devcb.p_tx_power_cmpl_cb) {
        return (VAR_1);
    }

    VAR_13 = FUNC_1(VAR_10, VAR_11);
    if (VAR_13 != (tACL_CONN *)((void*)0)) {
        FUNC_4 (&VAR_9.devcb.tx_power_timer, VAR_7,
                         VAR_3);

        VAR_9.devcb.p_tx_power_cmpl_cb = VAR_12;


        if (VAR_13->transport == VAR_8) {
            FUNC_6(VAR_9.devcb.read_tx_pwr_addr, VAR_10, VAR_0);
            VAR_14 = FUNC_2();
        } else

        {
            VAR_14 = FUNC_3 (VAR_13->hci_handle, 0x00);
        }
        if (!VAR_14) {
            VAR_9.devcb.p_tx_power_cmpl_cb = ((void*)0);
            FUNC_5 (&VAR_9.devcb.tx_power_timer);
            return (VAR_4);
        } else {
            return (VAR_2);
        }
    }


    return (VAR_6);
}
