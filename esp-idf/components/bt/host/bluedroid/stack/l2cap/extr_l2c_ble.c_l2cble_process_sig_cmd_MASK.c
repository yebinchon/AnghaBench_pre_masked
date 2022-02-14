
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int waiting_update_conn_min_interval; int waiting_update_conn_max_interval; int waiting_update_conn_latency; int waiting_update_conn_timeout; int conn_update_mask; int upda_con_timer; int link_role; } ;
typedef TYPE_1__ tL2C_LCB ;
typedef int UINT8 ;
typedef int UINT32 ;
typedef int UINT16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;







 int VAR_11 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int,...) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_3 (int,int*) ;
 int FUNC_4 (int,int*) ;
 int VAR_15 ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_1__*,int) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*,int ,int) ;
 int FUNC_10 (TYPE_1__*,int ,int,int ,int ) ;

void FUNC_11 (tL2C_LCB *VAR_16, UINT8 *VAR_17, UINT16 VAR_18)
{
    UINT8 *VAR_19;
    UINT8 VAR_20, VAR_21;
    UINT16 VAR_22;
    UINT16 VAR_23, VAR_24, VAR_25, VAR_26;

    VAR_19 = VAR_17 + VAR_18;

    FUNC_4 (VAR_20, VAR_17);
    FUNC_4 (VAR_21, VAR_17);
    FUNC_3 (VAR_22, VAR_17);


    if ((VAR_17 + VAR_22) > VAR_19) {
        FUNC_2 ("L2CAP - LE - format error, pkt_len: %d  cmd_len: %d  code: %d", VAR_18, VAR_22, VAR_20);
        return;
    }

    switch (VAR_20) {
    case 128:
    case 131:
    case 129:
        VAR_17 += 2;
        break;
    case 132:
    case 130:
        FUNC_10 (VAR_16, VAR_11, VAR_21, 0, 0);
        break;

    case 134:
        FUNC_3 (VAR_23, VAR_17);
        FUNC_3 (VAR_24, VAR_17);
        FUNC_3 (VAR_25, VAR_17);
        FUNC_3 (VAR_26, VAR_17);

        if (VAR_16->link_role == VAR_7) {
            if (VAR_23 < VAR_1 || VAR_23 > VAR_0 ||
                    VAR_24 < VAR_1 || VAR_24 > VAR_0 ||
                    VAR_25 > VAR_2 ||
                    VAR_26 < VAR_4 || VAR_26 > VAR_3 ||






                    ((VAR_26 * 10) < ((1 + VAR_25) *((VAR_24 * 5) >> 1))) ||
                    VAR_24 < VAR_23) {
                FUNC_9 (VAR_16, VAR_10, VAR_21);

                FUNC_1("slave connection parameters update failed, the parameters are out of range");

            } else {

                FUNC_9 (VAR_16, VAR_9, VAR_21);
                VAR_16->waiting_update_conn_min_interval = VAR_23;
                VAR_16->waiting_update_conn_max_interval = VAR_24;
                VAR_16->waiting_update_conn_latency = VAR_25;
                VAR_16->waiting_update_conn_timeout = VAR_26;
                VAR_16->conn_update_mask |= VAR_12;

                if (FUNC_8(VAR_16) == VAR_15) {
                    UINT32 VAR_27 = FUNC_0(VAR_16);
                    FUNC_5(&VAR_16->upda_con_timer, VAR_5, VAR_27);
                }
            }
        } else {
            FUNC_10 (VAR_16, VAR_11, VAR_21, 0, 0);
        }
        break;

    case 133: {
        UINT16 VAR_28 = 0;
        FUNC_3(VAR_28, VAR_17);
        UINT8 VAR_29 = (VAR_28 == 0) ? VAR_8 : VAR_6;
        if (VAR_29 != VAR_8) {
            FUNC_6(&VAR_16->upda_con_timer);
            VAR_16->conn_update_mask &= ~VAR_14;
            VAR_16->conn_update_mask &= ~VAR_13;
            FUNC_7(VAR_16, VAR_29);
        }
        break;
    }
    default:
        FUNC_2 ("L2CAP - LE - unknown cmd code: %d", VAR_20);
        FUNC_10 (VAR_16, VAR_11, VAR_21, 0, 0);
        return;
    }
}
