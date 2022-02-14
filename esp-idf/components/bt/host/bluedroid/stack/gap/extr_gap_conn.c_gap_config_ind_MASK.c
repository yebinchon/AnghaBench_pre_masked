
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ mtu; void* fcs_present; int result; void* mtu_present; void* flush_to_present; } ;
typedef TYPE_4__ tL2CAP_CFG_INFO ;
struct TYPE_12__ {int user_tx_buf_size; } ;
struct TYPE_10__ {scalar_t__ mode; } ;
struct TYPE_11__ {TYPE_1__ fcr; } ;
struct TYPE_14__ {scalar_t__ rem_mtu_size; int con_flags; TYPE_3__ ertm_info; TYPE_2__ cfg; } ;
typedef TYPE_5__ tGAP_CCB ;
typedef scalar_t__ UINT16 ;
typedef int BT_HDR ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (scalar_t__,TYPE_4__*) ;
 int FUNC_1 (TYPE_5__*) ;
 TYPE_5__* FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3 (UINT16 VAR_6, tL2CAP_CFG_INFO *VAR_7)
{
    tGAP_CCB *VAR_8;
    UINT16 VAR_9;


    if ((VAR_8 = FUNC_2 (VAR_6)) == ((void*)0)) {
        return;
    }



    if (VAR_8->cfg.fcr.mode == VAR_3) {
        VAR_9 = VAR_8->ertm_info.user_tx_buf_size
                         - sizeof(BT_HDR) - VAR_4;
    } else {
        VAR_9 = VAR_5;
    }

    if ((!VAR_7->mtu_present) || (VAR_7->mtu > VAR_9)) {
        VAR_8->rem_mtu_size = VAR_9;
    } else {
        VAR_8->rem_mtu_size = VAR_7->mtu;
    }


    VAR_7->flush_to_present = VAR_0;
    VAR_7->mtu_present = VAR_0;
    VAR_7->result = VAR_2;
    VAR_7->fcs_present = VAR_0;

    FUNC_0 (VAR_6, VAR_7);

    VAR_8->con_flags |= VAR_1;

    FUNC_1 (VAR_8);
}
