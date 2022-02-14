
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ supervision_tout; scalar_t__ slave_latency; scalar_t__ max_conn_int; scalar_t__ min_conn_int; } ;
struct TYPE_5__ {TYPE_1__ conn_params; } ;
typedef TYPE_2__ tBTM_SEC_DEV_REC ;
typedef scalar_t__ UINT16 ;
typedef int BD_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (scalar_t__,int ,int ) ;
 int FUNC_1 (char*,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_2 (char*) ;
 TYPE_2__* FUNC_3 (int ) ;

void FUNC_4 (BD_ADDR VAR_8,
                               UINT16 VAR_9, UINT16 VAR_10,
                               UINT16 VAR_11, UINT16 VAR_12)
{
    tBTM_SEC_DEV_REC *VAR_13 = FUNC_3 (VAR_8);

    FUNC_1 ("BTM_BleSetPrefConnParams min: %u  max: %u  latency: %u                      tout: %u",

                   VAR_9, VAR_10, VAR_11, VAR_12);

    if (FUNC_0(VAR_9, VAR_1, VAR_0) &&
            FUNC_0(VAR_10, VAR_1, VAR_0) &&
            FUNC_0(VAR_12, VAR_6, VAR_5) &&
            (VAR_11 <= VAR_2 || VAR_11 == VAR_3)) {
        if (VAR_13) {

            if (VAR_9 != VAR_3 || VAR_10 != VAR_3) {
                if (VAR_9 != VAR_3) {
                    VAR_13->conn_params.min_conn_int = VAR_9;
                } else {
                    VAR_13->conn_params.min_conn_int = VAR_10;
                }

                if (VAR_10 != VAR_3) {
                    VAR_13->conn_params.max_conn_int = VAR_10;
                } else {
                    VAR_13->conn_params.max_conn_int = VAR_9;
                }

                if (VAR_11 != VAR_3) {
                    VAR_13->conn_params.slave_latency = VAR_11;
                } else {
                    VAR_13->conn_params.slave_latency = VAR_4;
                }

                if (VAR_12 != VAR_3) {
                    VAR_13->conn_params.supervision_tout = VAR_12;
                } else {
                    VAR_13->conn_params.supervision_tout = VAR_7;
                }

            }

        } else {
            FUNC_2("Unknown Device, setting rejected");
        }
    } else {
        FUNC_2("Illegal Connection Parameters");
    }
}
