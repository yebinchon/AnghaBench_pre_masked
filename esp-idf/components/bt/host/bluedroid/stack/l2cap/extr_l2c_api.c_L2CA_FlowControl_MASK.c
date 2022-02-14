
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ local_busy; int wait_ack; } ;
struct TYPE_7__ {scalar_t__ mode; } ;
struct TYPE_8__ {TYPE_1__ fcr; } ;
struct TYPE_10__ {scalar_t__ chnl_state; TYPE_3__ fcrb; TYPE_2__ peer_cfg; } ;
typedef TYPE_4__ tL2C_CCB ;
typedef int UINT16 ;
typedef scalar_t__ BOOLEAN ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,scalar_t__,int ) ;
 int FUNC_1 (char*,scalar_t__) ;
 int FUNC_2 (char*,int ,scalar_t__) ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (TYPE_4__*,int ,int ) ;
 TYPE_4__* FUNC_4 (int *,int ) ;

BOOLEAN FUNC_5 (UINT16 VAR_7, BOOLEAN VAR_8)
{
    tL2C_CCB *VAR_9;
    BOOLEAN VAR_10 = !VAR_8;

    FUNC_0 ("L2CA_FlowControl(%d)  CID: 0x%04x", VAR_10, VAR_7);


    if ((VAR_9 = FUNC_4 (((void*)0), VAR_7)) == ((void*)0)) {
        FUNC_2 ("L2CAP - no CCB for L2CA_FlowControl, CID: 0x%04x  data_enabled: %d", VAR_7, VAR_8);
        return (VAR_1);
    }

    if (VAR_9->peer_cfg.fcr.mode != VAR_2) {
        FUNC_1 ("L2CA_FlowControl()  invalid mode:%d", VAR_9->peer_cfg.fcr.mode);
        return (VAR_1);
    }
    if (VAR_9->fcrb.local_busy != VAR_10) {
        VAR_9->fcrb.local_busy = VAR_10;

        if ( (VAR_9->chnl_state == VAR_0) && (!VAR_9->fcrb.wait_ack) ) {
            if (VAR_10) {
                FUNC_3 (VAR_9, VAR_4, 0);
            } else {
                FUNC_3 (VAR_9, VAR_5, VAR_3);
            }
        }
    }

    return (VAR_6);
}
