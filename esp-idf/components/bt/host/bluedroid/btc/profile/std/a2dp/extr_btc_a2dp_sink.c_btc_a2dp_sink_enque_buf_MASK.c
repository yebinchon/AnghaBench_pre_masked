
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int num_frames_to_be_processed; int offset; } ;
typedef TYPE_2__ tBT_SBC_HDR ;
typedef int UINT8 ;
struct TYPE_9__ {scalar_t__ rx_flush; int RxSbcQ; } ;
struct TYPE_12__ {TYPE_1__ btc_aa_snk_cb; } ;
struct TYPE_11__ {scalar_t__ len; scalar_t__ offset; } ;
typedef TYPE_3__ BT_HDR ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_8__ VAR_4 ;
 int FUNC_3 () ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (int ,TYPE_2__*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_2__*,TYPE_3__*,scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;

UINT8 FUNC_8(BT_HDR *VAR_6)
{
    tBT_SBC_HDR *VAR_7;

    if (VAR_5 != VAR_0){
        return 0;
    }

    if (VAR_4.btc_aa_snk_cb.rx_flush == VAR_3) {
        return FUNC_5(VAR_4.btc_aa_snk_cb.RxSbcQ);
    }

    if (FUNC_5(VAR_4.btc_aa_snk_cb.RxSbcQ) >= VAR_2) {
        FUNC_2("Pkt dropped\n");
        return FUNC_5(VAR_4.btc_aa_snk_cb.RxSbcQ);
    }

    FUNC_0("btc_a2dp_sink_enque_buf + ");


    if ((VAR_7 = (tBT_SBC_HDR *) FUNC_7(sizeof(tBT_SBC_HDR) +
                                            VAR_6->offset + VAR_6->len)) != ((void*)0)) {
        FUNC_6(VAR_7, VAR_6, (sizeof(BT_HDR) + VAR_6->offset + VAR_6->len));
        VAR_7->num_frames_to_be_processed = (*((UINT8 *)(VAR_7 + 1) + VAR_7->offset)) & 0x0f;
        FUNC_1("btc_a2dp_sink_enque_buf %d + \n", VAR_7->num_frames_to_be_processed);
        FUNC_4(VAR_4.btc_aa_snk_cb.RxSbcQ, VAR_7, VAR_1);
        FUNC_3();
    } else {

        FUNC_2("btc_a2dp_sink_enque_buf No Buffer left - ");
    }
    return FUNC_5(VAR_4.btc_aa_snk_cb.RxSbcQ);
}
