
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int mode; } ;
struct TYPE_7__ {TYPE_1__ fcr; } ;
struct TYPE_8__ {int tx_data_rate; int rx_data_rate; int buff_quota; int ccb_priority; TYPE_2__ peer_cfg; int local_cid; int in_use; } ;
typedef TYPE_3__ tL2C_CCB ;
typedef int tL2CAP_CHNL_DATA_RATE ;
typedef scalar_t__ UINT8 ;
struct TYPE_9__ {TYPE_3__* ccb_pool; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ,int ,int ,int,int,int) ;
 scalar_t__ VAR_1 ;
 TYPE_5__ VAR_2 ;
 int FUNC_2 (TYPE_3__*) ;

void FUNC_3 (void)
{
    UINT8 VAR_3;


    FUNC_0 ("l2c_link_adjust_chnl_allocation");


    for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
    {
        tL2C_CCB *VAR_4 = VAR_2.ccb_pool + VAR_3;

        if (!VAR_4->in_use) {
            continue;
  }

        tL2CAP_CHNL_DATA_RATE VAR_5 = VAR_4->tx_data_rate + VAR_4->rx_data_rate;
        VAR_4->buff_quota = VAR_0 * VAR_5;
        FUNC_1("CID:0x%04x FCR Mode:%u Priority:%u TxDataRate:%u RxDataRate:%u Quota:%u",
                          VAR_4->local_cid, VAR_4->peer_cfg.fcr.mode,
                          VAR_4->ccb_priority, VAR_4->tx_data_rate,
                          VAR_4->rx_data_rate, VAR_4->buff_quota);


        FUNC_2 (VAR_4);
    }
}
