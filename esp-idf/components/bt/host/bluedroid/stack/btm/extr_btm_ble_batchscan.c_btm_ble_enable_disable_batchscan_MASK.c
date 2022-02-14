
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tBTM_STATUS ;
typedef int UINT8 ;
struct TYPE_2__ {int cur_state; int discard_rule; int addr_type; int scan_window; int scan_interval; } ;
typedef scalar_t__ BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ,int,int*,int ) ;
 int VAR_9 ;
 int FUNC_2 (int*,int) ;
 TYPE_1__ VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (int ,int ,int ,int ,int ) ;
 int FUNC_4 (int*,int ,int) ;

tBTM_STATUS FUNC_5(BOOLEAN VAR_12)
{
    tBTM_STATUS VAR_13 = VAR_8;
    UINT8 VAR_14 = 0x01;
    UINT8 VAR_15[VAR_1], *VAR_16;

    if (!VAR_12) {
        VAR_14 = 0x00;
    }

    if (VAR_12) {
        VAR_16 = VAR_15;
        FUNC_4(VAR_15, 0, VAR_1);

        FUNC_2 (VAR_16, VAR_0);
        FUNC_2 (VAR_16, VAR_14);

        if ((VAR_13 = FUNC_1(VAR_9,
                                                VAR_1, VAR_15,
                                                VAR_11)) != VAR_5) {
            VAR_13 = VAR_7;
            FUNC_0("btm_ble_enable_disable_batchscan %d", VAR_13);
            return VAR_6;
        }
    } else if ((VAR_13 = FUNC_3(VAR_2,
                         VAR_10.scan_interval, VAR_10.scan_window,
                         VAR_10.addr_type, VAR_10.discard_rule)) != VAR_5) {
        VAR_13 = VAR_7;
        FUNC_0("btm_ble_enable_disable_batchscan %d", VAR_13);
        return VAR_6;
    }

    if (VAR_12) {
        VAR_10.cur_state = VAR_4;
    } else {
        VAR_10.cur_state = VAR_3;
    }
    return VAR_13;
}
