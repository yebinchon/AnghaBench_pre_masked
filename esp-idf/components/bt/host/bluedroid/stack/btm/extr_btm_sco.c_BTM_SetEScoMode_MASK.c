
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int max_latency; int voice_contfmt; scalar_t__ retrans_effort; int packet_types; void* rx_bw; void* tx_bw; } ;
struct TYPE_5__ {scalar_t__ desired_sco_mode; scalar_t__ esco_supported; TYPE_2__ def_esco_parms; } ;
typedef TYPE_1__ tSCO_CB ;
typedef int tBTM_STATUS ;
typedef scalar_t__ tBTM_SCO_TYPE ;
typedef TYPE_2__ tBTM_ESCO_PARAMS ;
struct TYPE_7__ {TYPE_1__ sco_cb; } ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,void*,void*,int,int,int ,scalar_t__) ;
 TYPE_3__ VAR_6 ;

tBTM_STATUS FUNC_2 (tBTM_SCO_TYPE VAR_7, tBTM_ESCO_PARAMS *VAR_8)
{
    tSCO_CB *VAR_9 = &VAR_6.sco_cb;
    tBTM_ESCO_PARAMS *VAR_10 = &VAR_9->def_esco_parms;

    if (VAR_9->esco_supported) {
        if (VAR_8) {
            if (VAR_7 == VAR_1) {
                *VAR_10 = *VAR_8;
            } else {
                VAR_10->packet_types = VAR_8->packet_types;
                VAR_10->tx_bw = VAR_0;
                VAR_10->rx_bw = VAR_0;
                VAR_10->max_latency = 0x000a;
                VAR_10->voice_contfmt = 0x0060;
                VAR_10->retrans_effort = 0;


                VAR_10->packet_types |= VAR_3;
            }
        }
        VAR_9->desired_sco_mode = VAR_7;
        FUNC_0("BTM_SetEScoMode -> mode %d", VAR_7);
    } else {
        VAR_9->desired_sco_mode = VAR_2;
        VAR_10->packet_types &= VAR_4;
        VAR_10->retrans_effort = 0;
        FUNC_0("BTM_SetEScoMode -> mode SCO (eSCO not supported)");
    }

    FUNC_1("    txbw 0x%08x, rxbw 0x%08x, max_lat 0x%04x, voice 0x%04x, pkt 0x%04x, rtx effort 0x%02x",
                    VAR_10->tx_bw, VAR_10->rx_bw, VAR_10->max_latency,
                    VAR_10->voice_contfmt, VAR_10->packet_types,
                    VAR_10->retrans_effort);

    return (VAR_5);
}
