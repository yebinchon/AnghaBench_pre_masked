
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ mode; } ;
struct TYPE_9__ {TYPE_1__ fcr; } ;
struct TYPE_10__ {scalar_t__ con_state; scalar_t__ rem_mtu_size; scalar_t__ is_congested; int connection_id; int tx_queue; TYPE_2__ cfg; } ;
typedef TYPE_3__ tGAP_CCB ;
typedef scalar_t__ UINT8 ;
typedef scalar_t__ UINT16 ;
struct TYPE_11__ {int offset; scalar_t__ len; int event; } ;
typedef TYPE_4__ BT_HDR ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (char*,scalar_t__) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_1 (int ,TYPE_4__*) ;
 scalar_t__ VAR_13 ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,TYPE_4__*,int ) ;
 TYPE_3__* FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__*,scalar_t__*,scalar_t__) ;
 scalar_t__ FUNC_7 (int ) ;

UINT16 FUNC_8 (UINT16 VAR_14, UINT8 *VAR_15, UINT16 VAR_16, UINT16 *VAR_17)
{
    tGAP_CCB *VAR_18 = FUNC_4 (VAR_14);
    BT_HDR *VAR_19;

    *VAR_17 = 0;

    if (!VAR_18) {
        return (VAR_5);
    }

    if (VAR_18->con_state != VAR_3) {
        return (VAR_6);
    }

    while (VAR_16) {
        if (VAR_18->cfg.fcr.mode == VAR_11) {
            if ((VAR_19 = (BT_HDR *)FUNC_7(VAR_10)) == ((void*)0)) {
                return (VAR_7);
            }
        } else {
            if ((VAR_19 = (BT_HDR *)FUNC_7(VAR_4)) == ((void*)0)) {
                return (VAR_7);
            }
        }

        VAR_19->offset = VAR_12;
        VAR_19->len = (VAR_18->rem_mtu_size < VAR_16) ? VAR_18->rem_mtu_size : VAR_16;
        VAR_19->event = VAR_0;

        FUNC_6 ((UINT8 *)(VAR_19 + 1) + VAR_19->offset, VAR_15, VAR_19->len);

        *VAR_17 += VAR_19->len;
        VAR_16 -= VAR_19->len;
        VAR_15 += VAR_19->len;

        FUNC_0 ("GAP_WriteData %d bytes", VAR_19->len);

        FUNC_3(VAR_18->tx_queue, VAR_19, VAR_2);
    }

    if (VAR_18->is_congested) {
        return (VAR_1);
    }



    FUNC_5 (VAR_14);
    return (VAR_1);
}
