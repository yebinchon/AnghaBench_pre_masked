
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tL2C_LCB ;
typedef scalar_t__ tBTM_BLE_CONN_ST ;
typedef int BOOLEAN ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,scalar_t__) ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;

BOOLEAN FUNC_5 (tL2C_LCB *VAR_4)
{
    tBTM_BLE_CONN_ST VAR_5 = FUNC_2();
    BOOLEAN VAR_6 = VAR_2;


    if (VAR_5 == VAR_1) {
        VAR_6 = FUNC_4(VAR_4);
    } else {
        FUNC_0 ("L2CAP - LE - cannot start new connection at conn st: %d", VAR_5);

        FUNC_1(VAR_4);

        if (VAR_5 == VAR_0) {
            FUNC_3();
        }

        VAR_6 = VAR_3;
    }
    return VAR_6;
}
