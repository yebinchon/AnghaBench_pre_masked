
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int mps; } ;
struct TYPE_8__ {TYPE_2__ fcr; } ;
struct TYPE_9__ {int tx_mps; TYPE_3__ peer_cfg; TYPE_1__* p_lcb; } ;
typedef TYPE_4__ tL2C_CCB ;
typedef int UINT16 ;
struct TYPE_6__ {int remote_bd_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int,int,...) ;
 int FUNC_1 (int ) ;

void FUNC_2 (tL2C_CCB *VAR_4)
{
    UINT16 VAR_5;


    VAR_5 = FUNC_1 (VAR_4->p_lcb->remote_bd_addr);

    if (VAR_5 <= (VAR_2 + VAR_0 + VAR_3 + VAR_1)) {

        FUNC_0 ("l2cu_adjust_out_mps bad packet size: %u  will use MPS: %u", VAR_5, VAR_4->peer_cfg.fcr.mps);
        VAR_4->tx_mps = VAR_4->peer_cfg.fcr.mps;
    } else {
        VAR_5 -= (VAR_2 + VAR_0 + VAR_3 + VAR_1);
        if (VAR_4->peer_cfg.fcr.mps >= VAR_5) {
            VAR_4->tx_mps = VAR_4->peer_cfg.fcr.mps / VAR_5 * VAR_5;
        } else {
            VAR_4->tx_mps = VAR_4->peer_cfg.fcr.mps;
        }

        FUNC_0 ("l2cu_adjust_out_mps use %d   Based on peer_cfg.fcr.mps: %u  packet_size: %u",
                           VAR_4->tx_mps, VAR_4->peer_cfg.fcr.mps, VAR_5);
    }
}
