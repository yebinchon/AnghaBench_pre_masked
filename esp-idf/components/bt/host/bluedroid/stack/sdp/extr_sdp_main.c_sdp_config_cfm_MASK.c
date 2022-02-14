
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ result; scalar_t__ fcr_present; } ;
typedef TYPE_1__ tL2CAP_CFG_INFO ;
struct TYPE_10__ {int con_flags; int timer_entry; int con_state; } ;
typedef TYPE_2__ tCONN_CB ;
typedef int UINT16 ;
struct TYPE_11__ {TYPE_1__ l2cap_my_cfg; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (char*,int ,scalar_t__) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int *,int ,int ) ;
 TYPE_7__ VAR_9 ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 TYPE_2__* FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7 (UINT16 VAR_10, tL2CAP_CFG_INFO *VAR_11)
{
    tCONN_CB *VAR_12;

    FUNC_1 ("SDP - Rcvd cfg cfm, CID: 0x%x  Result: %d\n", VAR_10, VAR_11->result);


    if ((VAR_12 = FUNC_6 (VAR_10)) == ((void*)0)) {
        FUNC_2 ("SDP - Rcvd L2CAP cfg ind, unknown CID: 0x%x\n", VAR_10);
        return;
    }


    if (VAR_11->result == VAR_2) {
        VAR_12->con_flags |= VAR_6;

        if (VAR_12->con_flags & VAR_4) {
            VAR_12->con_state = VAR_8;

            if (VAR_12->con_flags & VAR_5) {
                FUNC_4 (VAR_12);
            } else

            {
                FUNC_3 (&VAR_12->timer_entry, VAR_0, VAR_7);
            }
        }
    } else {

        if (VAR_11->fcr_present) {
            tL2CAP_CFG_INFO VAR_13 = VAR_9.l2cap_my_cfg;
            VAR_13.fcr_present = VAR_1;
            FUNC_0 (VAR_10, &VAR_13);


            return;
        }


        FUNC_5(VAR_12, VAR_3);

    }
}
