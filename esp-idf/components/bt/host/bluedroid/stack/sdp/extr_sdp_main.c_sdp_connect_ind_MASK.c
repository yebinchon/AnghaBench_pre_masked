
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ mode; int mps; int mon_tout; int rtrans_tout; int max_transmit; int tx_win_sz; } ;
struct TYPE_8__ {scalar_t__ fcr_present; TYPE_1__ fcr; } ;
typedef TYPE_2__ tL2CAP_CFG_INFO ;
struct TYPE_9__ {int connection_id; int * device_address; int con_state; } ;
typedef TYPE_3__ tCONN_CB ;
typedef int UINT8 ;
typedef int UINT16 ;
struct TYPE_10__ {TYPE_2__ l2cap_my_cfg; } ;
typedef int BD_ADDR ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (int ,int ,int ,int ,int ) ;
 int VAR_4 ;
 int FUNC_2 (char*,scalar_t__,int ,int ,int ,int ,int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int ,int) ;
 TYPE_5__ VAR_5 ;
 TYPE_3__* FUNC_6 () ;

__attribute__((used)) static void FUNC_7 (BD_ADDR VAR_6, UINT16 VAR_7, UINT16 VAR_8, UINT8 VAR_9)
{
    FUNC_4(VAR_8);

    tCONN_CB *VAR_10;


    if ((VAR_10 = FUNC_6()) == ((void*)0)) {
        return;
    }


    VAR_10->con_state = VAR_4;


    FUNC_5 (&VAR_10->device_address[0], VAR_6, sizeof (BD_ADDR));
    VAR_10->connection_id = VAR_7;


    FUNC_1 (VAR_6, VAR_9, VAR_7, VAR_2, VAR_2);
    {
        tL2CAP_CFG_INFO VAR_11 = VAR_5.l2cap_my_cfg;

        if (VAR_11.fcr_present) {
            FUNC_2("sdp_connect_ind:  mode %u, txwinsz %u, max_trans %u, rtrans_tout %u, mon_tout %u, mps %u\n",
                            VAR_11.fcr.mode, VAR_11.fcr.tx_win_sz, VAR_11.fcr.max_transmit,
                            VAR_11.fcr.rtrans_tout, VAR_11.fcr.mon_tout, VAR_11.fcr.mps);
        }

        if ((!FUNC_0 (VAR_7, &VAR_11)) && VAR_11.fcr_present
                && VAR_11.fcr.mode != VAR_3) {

            VAR_11.fcr.mode = VAR_3;
            VAR_11.fcr_present = VAR_0;
            FUNC_0 (VAR_7, &VAR_11);
        }
    }

    FUNC_3 ("SDP - Rcvd L2CAP conn ind, sent config req, CID 0x%x\n", VAR_10->connection_id);




}
