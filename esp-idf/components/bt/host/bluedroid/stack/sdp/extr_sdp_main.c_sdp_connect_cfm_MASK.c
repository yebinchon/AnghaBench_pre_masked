
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ mode; int mps; int mon_tout; int rtrans_tout; int max_transmit; int tx_win_sz; } ;
struct TYPE_9__ {TYPE_1__ fcr; scalar_t__ fcr_present; } ;
typedef TYPE_2__ tL2CAP_CFG_INFO ;
struct TYPE_10__ {scalar_t__ con_state; int user_data; int (* p_cb2 ) (scalar_t__,int ) ;int (* p_cb ) (scalar_t__) ;int connection_id; } ;
typedef TYPE_3__ tCONN_CB ;
typedef scalar_t__ UINT16 ;
struct TYPE_11__ {TYPE_2__ l2cap_my_cfg; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (scalar_t__,TYPE_2__*) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_1 (char*,scalar_t__,int ,int ,int ,int ,int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,scalar_t__,...) ;
 TYPE_6__ VAR_14 ;
 TYPE_3__* FUNC_4 (scalar_t__) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_8 (UINT16 VAR_15, UINT16 VAR_16)
{
    tCONN_CB *VAR_17;
    tL2CAP_CFG_INFO VAR_18;


    if ((VAR_17 = FUNC_4 (VAR_15)) == ((void*)0)) {
        FUNC_3 ("SDP - Rcvd conn cnf for unknown CID 0x%x\n", VAR_15);
        return;
    }



    if ((VAR_16 == VAR_7) && (VAR_17->con_state == VAR_13)) {
        VAR_17->con_state = VAR_12;

        VAR_18 = VAR_14.l2cap_my_cfg;

        if (VAR_18.fcr_present) {
            FUNC_1("sdp_connect_cfm:  mode %u, txwinsz %u, max_trans %u, rtrans_tout %u, mon_tout %u, mps %u\n",
                            VAR_18.fcr.mode, VAR_18.fcr.tx_win_sz, VAR_18.fcr.max_transmit,
                            VAR_18.fcr.rtrans_tout, VAR_18.fcr.mon_tout, VAR_18.fcr.mps);
        }

        if ((!FUNC_0 (VAR_15, &VAR_18)) && VAR_18.fcr_present
                && VAR_18.fcr.mode != VAR_8) {

            VAR_18.fcr_present = VAR_0;
            VAR_18.fcr.mode = VAR_8;
            FUNC_0 (VAR_15, &VAR_18);
        }

        FUNC_2 ("SDP - got conn cnf, sent cfg req, CID: 0x%x\n", VAR_17->connection_id);
    } else {
        FUNC_3 ("SDP - Rcvd conn cnf with error: 0x%x  CID 0x%x\n", VAR_16, VAR_17->connection_id);


        if (VAR_17->p_cb || VAR_17->p_cb2) {
            UINT16 VAR_19 = -1;
            if ((VAR_16 == VAR_3)
                    || (VAR_16 == VAR_1)
                    || (VAR_16 == VAR_5)
                    || (VAR_16 == VAR_6)
                    || (VAR_16 == VAR_4)) {
                VAR_19 = VAR_11;
            } else if (VAR_16 == VAR_2) {
                VAR_19 = VAR_10;
            } else {
                VAR_19 = VAR_9;
            }
            if (VAR_17->p_cb) {
                (*VAR_17->p_cb)(VAR_19);
            } else if (VAR_17->p_cb2) {
                (*VAR_17->p_cb2)(VAR_19, VAR_17->user_data);
            }

        }
        FUNC_5 (VAR_17);
    }
}
