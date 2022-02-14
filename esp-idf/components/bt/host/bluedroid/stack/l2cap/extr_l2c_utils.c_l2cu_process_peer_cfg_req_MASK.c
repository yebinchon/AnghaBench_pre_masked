
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ service_type; } ;
struct TYPE_13__ {scalar_t__ mtu; int flush_to; TYPE_2__ qos; void* qos_present; void* flush_to_present; void* mtu_present; } ;
struct TYPE_14__ {TYPE_3__ peer_cfg; int peer_cfg_bits; } ;
typedef TYPE_4__ tL2C_CCB ;
struct TYPE_11__ {int mode; } ;
struct TYPE_15__ {scalar_t__ fcr_present; scalar_t__ mtu; int flush_to; void* qos_present; void* flush_to_present; void* mtu_present; int result; TYPE_2__ qos; TYPE_1__ fcr; } ;
typedef TYPE_5__ tL2CAP_CFG_INFO ;
typedef scalar_t__ UINT8 ;
typedef int BOOLEAN ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 void* VAR_14 ;
 scalar_t__ FUNC_0 (TYPE_4__*,TYPE_5__*) ;
 int FUNC_1 (TYPE_4__*) ;

UINT8 FUNC_2 (tL2C_CCB *VAR_15, tL2CAP_CFG_INFO *VAR_16)
{
    BOOLEAN VAR_17 = VAR_14;
    BOOLEAN VAR_18 = VAR_14;
    BOOLEAN VAR_19 = VAR_14;
    BOOLEAN VAR_20 = VAR_14;

    UINT8 VAR_21;


    if (!VAR_16->fcr_present) {
        VAR_16->fcr.mode = VAR_8;
    }


    if (VAR_16->mtu_present) {

        if (VAR_16->mtu >= VAR_9) {

            if ( (VAR_16->fcr_present == VAR_1) && (VAR_16->mtu > VAR_10) ) {
                VAR_16->mtu = VAR_10;
            }


            VAR_15->peer_cfg.mtu = VAR_16->mtu;
            VAR_15->peer_cfg.mtu_present = VAR_14;
            VAR_15->peer_cfg_bits |= VAR_6;
        } else {
            VAR_16->mtu = VAR_9;
            VAR_17 = VAR_1;
        }
    }

    else if (VAR_15->peer_cfg.mtu_present) {
        VAR_16->mtu_present = VAR_14;
        VAR_16->mtu = VAR_15->peer_cfg.mtu;
    }


    if (VAR_16->flush_to_present) {
        if (!VAR_16->flush_to) {
            VAR_16->flush_to = 0xFFFF;
            VAR_19 = VAR_1;
        } else {
            VAR_15->peer_cfg.flush_to_present = VAR_14;
            VAR_15->peer_cfg.flush_to = VAR_16->flush_to;
            VAR_15->peer_cfg_bits |= VAR_5;
        }
    }

    else if (VAR_15->peer_cfg.flush_to_present) {
        VAR_16->flush_to_present = VAR_14;
        VAR_16->flush_to = VAR_15->peer_cfg.flush_to;
    }


    if (VAR_16->qos_present) {



        if (VAR_16->qos.service_type <= VAR_2) {
            VAR_15->peer_cfg.qos = VAR_16->qos;
            VAR_15->peer_cfg.qos_present = VAR_14;
            VAR_15->peer_cfg_bits |= VAR_7;
        } else {
            VAR_16->qos.service_type = VAR_0;
            VAR_18 = VAR_1;
        }
    }

    else if (VAR_15->peer_cfg.qos_present) {
        VAR_16->qos_present = VAR_14;
        VAR_16->qos = VAR_15->peer_cfg.qos;
    }

    if ((VAR_21 = FUNC_0 (VAR_15, VAR_16)) == VAR_11) {

        VAR_16->result = VAR_3;
        VAR_16->mtu_present = VAR_16->qos_present = VAR_16->flush_to_present = 0;

        return (VAR_11);
    }

    VAR_20 = (VAR_21 == VAR_12);



    if (VAR_17 && VAR_19 && VAR_18 && VAR_20) {
        FUNC_1 (VAR_15);
        return (VAR_12);
    } else {
        VAR_16->result = VAR_4;

        if (VAR_17) {
            VAR_16->mtu_present = VAR_1;
        }
        if (VAR_19) {
            VAR_16->flush_to_present = VAR_1;
        }
        if (VAR_18) {
            VAR_16->qos_present = VAR_1;
        }
        if (VAR_20) {
            VAR_16->fcr_present = VAR_1;
        }

        return (VAR_13);
    }
}
