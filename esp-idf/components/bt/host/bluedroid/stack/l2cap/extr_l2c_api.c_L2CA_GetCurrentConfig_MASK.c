
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ ext_flow_spec_present; scalar_t__ fcs_present; scalar_t__ fcr_present; scalar_t__ flush_to_present; scalar_t__ qos_present; scalar_t__ mtu_present; } ;
struct TYPE_6__ {int peer_cfg_bits; TYPE_2__ peer_cfg; TYPE_2__ our_cfg; } ;
typedef TYPE_1__ tL2C_CCB ;
typedef int tL2CAP_CH_CFG_BITS ;
typedef TYPE_2__ tL2CAP_CFG_INFO ;
typedef int UINT16 ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int ) ;
 int VAR_7 ;
 TYPE_1__* FUNC_2 (int *,int ) ;

BOOLEAN FUNC_3 (UINT16 VAR_8,
                               tL2CAP_CFG_INFO **VAR_9, tL2CAP_CH_CFG_BITS *VAR_10,
                               tL2CAP_CFG_INFO **VAR_11, tL2CAP_CH_CFG_BITS *VAR_12)
{
    tL2C_CCB *VAR_13;

    FUNC_0 ("L2CA_GetCurrentConfig()  CID: 0x%04x", VAR_8);

    VAR_13 = FUNC_2(((void*)0), VAR_8);

    if (VAR_13) {
        *VAR_9 = &(VAR_13->our_cfg);


        *VAR_10 = 0;
        if (VAR_13->our_cfg.mtu_present) {
            *VAR_10 |= VAR_5;
        }
        if (VAR_13->our_cfg.qos_present) {
            *VAR_10 |= VAR_6;
        }
        if (VAR_13->our_cfg.flush_to_present) {
            *VAR_10 |= VAR_4;
        }
        if (VAR_13->our_cfg.fcr_present) {
            *VAR_10 |= VAR_2;
        }
        if (VAR_13->our_cfg.fcs_present) {
            *VAR_10 |= VAR_3;
        }
        if (VAR_13->our_cfg.ext_flow_spec_present) {
            *VAR_10 |= VAR_1;
        }

        *VAR_11 = &(VAR_13->peer_cfg);
        *VAR_12 = VAR_13->peer_cfg_bits;

        return VAR_7;
    } else {
        FUNC_1 ("No CCB for CID:0x%04x", VAR_8);
        return VAR_0;
    }
}
