
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int next_seq_expected; } ;
struct TYPE_7__ {scalar_t__ mode; } ;
struct TYPE_8__ {TYPE_1__ fcr; } ;
struct TYPE_10__ {scalar_t__ chnl_state; TYPE_3__ fcrb; TYPE_2__ peer_cfg; } ;
typedef TYPE_4__ tL2C_CCB ;
typedef int UINT8 ;
typedef int UINT16 ;
typedef int BOOLEAN ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int ,int,int) ;
 int FUNC_1 (char*,int ) ;
 int VAR_5 ;
 int FUNC_2 (TYPE_4__*,int ,int ) ;
 TYPE_4__* FUNC_3 (int *,int ) ;

BOOLEAN FUNC_4 (UINT16 VAR_6, UINT8 VAR_7, UINT8 VAR_8)
{
    tL2C_CCB *VAR_9;

    FUNC_0 ("L2CA_SendTestSFrame()  CID: 0x%04x  Type: 0x%02x  back_track: %u", VAR_6, VAR_7, VAR_8);


    if ((VAR_9 = FUNC_3 (((void*)0), VAR_6)) == ((void*)0)) {
        FUNC_1 ("L2CAP - no CCB for L2CA_SendTestSFrame, CID: %d", VAR_6);
        return (VAR_1);
    }

    if ( (VAR_9->chnl_state != VAR_0) || (VAR_9->peer_cfg.fcr.mode != VAR_2) ) {
        return (VAR_1);
    }

    VAR_9->fcrb.next_seq_expected -= VAR_8;

    FUNC_2 (VAR_9, (UINT16)(VAR_7 & 3), (UINT16)(VAR_7 & (VAR_4 | VAR_3)));

    return (VAR_5);
}
