
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int tfd_size; int beacon_time_tsf_bits; int max_beacon_itrvl; int rx_wrt_ptr_reg; int max_stations; int max_rxq_log; int max_rxq_size; int rx_page_order; int max_txq_num; int bcast_id; } ;
struct TYPE_6__ {int shared_virt; int shared_phys; } ;
struct il_priv {TYPE_4__ hw_params; int sta_key_max_num; TYPE_3__* cfg; TYPE_2__ _3945; TYPE_1__* pci_dev; } ;
struct il_hw_params {int dummy; } ;
struct il3945_tfd {int dummy; } ;
struct il3945_shared {int dummy; } ;
struct TYPE_7__ {int num_of_queues; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int *,int,int *,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (void*,int ,int) ;

int
FUNC_3(struct il_priv *VAR_11)
{
 FUNC_2((void *)&VAR_11->hw_params, 0, sizeof(struct il_hw_params));

 VAR_11->_3945.shared_virt =
     FUNC_0(&VAR_11->pci_dev->dev, sizeof(struct il3945_shared),
          &VAR_11->_3945.shared_phys, VAR_2);
 if (!VAR_11->_3945.shared_virt)
  return -VAR_0;

 VAR_11->hw_params.bcast_id = VAR_3;


 VAR_11->hw_params.max_txq_num = VAR_11->cfg->num_of_queues;

 VAR_11->hw_params.tfd_size = sizeof(struct il3945_tfd);
 VAR_11->hw_params.rx_page_order = FUNC_1(VAR_7);
 VAR_11->hw_params.max_rxq_size = VAR_8;
 VAR_11->hw_params.max_rxq_log = VAR_9;
 VAR_11->hw_params.max_stations = VAR_5;

 VAR_11->sta_key_max_num = VAR_10;

 VAR_11->hw_params.rx_wrt_ptr_reg = VAR_1;
 VAR_11->hw_params.max_beacon_itrvl = VAR_6;
 VAR_11->hw_params.beacon_time_tsf_bits = VAR_4;

 return 0;
}
