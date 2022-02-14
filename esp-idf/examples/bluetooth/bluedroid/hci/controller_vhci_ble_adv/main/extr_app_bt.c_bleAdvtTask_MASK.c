
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int VAR_0 ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (int) ;
 int VAR_1 ;

void FUNC_8(void *VAR_2)
{
    int VAR_3 = 0;
    bool VAR_4 = 0;
    FUNC_1(&VAR_1);
    FUNC_6("BLE advt task start\n");
    while (1) {
        FUNC_7(1000 / VAR_0);
        VAR_4 = FUNC_0();
        if (VAR_4) {
            switch (VAR_3) {
            case 0: FUNC_5(); ++VAR_3; break;
            case 1: FUNC_4(); ++VAR_3; break;
            case 2: FUNC_3(); ++VAR_3; break;
            case 3: FUNC_2(); ++VAR_3; break;
            }
        }
        FUNC_6("BLE Advertise, flag_send_avail: %d, cmd_sent: %d\n", VAR_4, VAR_3);
    }
}
