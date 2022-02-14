
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_12__ {int pps; int enable; int settime; int gettime; int adjtime; int adjfreq; scalar_t__ n_per_out; scalar_t__ n_ext_ts; scalar_t__ n_alarm; int max_adj; int name; int owner; } ;
struct TYPE_8__ {int rx_filter; int tx_type; scalar_t__ flags; } ;
struct efx_ptp_data {int nic_ts_enabled; int start; void* workwq; int phc_clock; void* pps_workwq; int pps_work; TYPE_6__ phc_clock_info; int evt_free_list; TYPE_3__* rx_evts; int evt_lock; int evt_list; TYPE_2__ config; int work; int txq; int rxq; struct efx_channel* channel; } ;
struct efx_nic {struct efx_ptp_data* ptp_data; TYPE_5__* pci_dev; TYPE_4__* net_dev; } ;
struct TYPE_7__ {scalar_t__ core_index; } ;
struct efx_channel {TYPE_1__ rx_queue; scalar_t__ irq_moderation; struct efx_nic* efx; } ;
struct TYPE_11__ {int dev; } ;
struct TYPE_10__ {int perm_addr; } ;
struct TYPE_9__ {int link; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_3 (int ) ;
 int VAR_6 ;
 void* FUNC_4 (char*) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (struct efx_nic*,int *,int) ;
 int FUNC_7 (struct efx_nic*,int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_8 (struct efx_ptp_data*) ;
 struct efx_ptp_data* FUNC_9 (int,int ) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (TYPE_6__*,int *) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ,int,char*,int ) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static int FUNC_16(struct efx_channel *VAR_14)
{
 struct efx_nic *VAR_15 = VAR_14->efx;
 struct efx_ptp_data *VAR_16;
 int VAR_17 = 0;
 unsigned int VAR_18;

 VAR_14->irq_moderation = 0;
 VAR_14->rx_queue.core_index = 0;

 VAR_16 = FUNC_9(sizeof(struct efx_ptp_data), VAR_1);
 VAR_15->ptp_data = VAR_16;
 if (!VAR_15->ptp_data)
  return -VAR_0;

 VAR_17 = FUNC_6(VAR_15, &VAR_16->start, sizeof(int));
 if (VAR_17 != 0)
  goto fail1;

 VAR_16->channel = VAR_14;
 FUNC_13(&VAR_16->rxq);
 FUNC_13(&VAR_16->txq);
 VAR_16->workwq = FUNC_4("sfc_ptp");
 if (!VAR_16->workwq) {
  VAR_17 = -VAR_0;
  goto fail2;
 }

 FUNC_1(&VAR_16->work, VAR_13);
 VAR_16->config.flags = 0;
 VAR_16->config.tx_type = VAR_3;
 VAR_16->config.rx_filter = VAR_2;
 FUNC_0(&VAR_16->evt_list);
 FUNC_0(&VAR_16->evt_free_list);
 FUNC_15(&VAR_16->evt_lock);
 for (VAR_18 = 0; VAR_18 < VAR_5; VAR_18++)
  FUNC_10(&VAR_16->rx_evts[VAR_18].link, &VAR_16->evt_free_list);

 VAR_16->phc_clock_info.owner = VAR_6;
 FUNC_14(VAR_16->phc_clock_info.name,
   sizeof(VAR_16->phc_clock_info.name),
   "%pm", VAR_15->net_dev->perm_addr);
 VAR_16->phc_clock_info.max_adj = VAR_4;
 VAR_16->phc_clock_info.n_alarm = 0;
 VAR_16->phc_clock_info.n_ext_ts = 0;
 VAR_16->phc_clock_info.n_per_out = 0;
 VAR_16->phc_clock_info.pps = 1;
 VAR_16->phc_clock_info.adjfreq = VAR_7;
 VAR_16->phc_clock_info.adjtime = VAR_8;
 VAR_16->phc_clock_info.gettime = VAR_10;
 VAR_16->phc_clock_info.settime = VAR_11;
 VAR_16->phc_clock_info.enable = VAR_9;

 VAR_16->phc_clock = FUNC_11(&VAR_16->phc_clock_info,
         &VAR_15->pci_dev->dev);
 if (FUNC_2(VAR_16->phc_clock)) {
  VAR_17 = FUNC_3(VAR_16->phc_clock);
  goto fail3;
 }

 FUNC_1(&VAR_16->pps_work, VAR_12);
 VAR_16->pps_workwq = FUNC_4("sfc_pps");
 if (!VAR_16->pps_workwq) {
  VAR_17 = -VAR_0;
  goto fail4;
 }
 VAR_16->nic_ts_enabled = 0;

 return 0;
fail4:
 FUNC_12(VAR_15->ptp_data->phc_clock);

fail3:
 FUNC_5(VAR_15->ptp_data->workwq);

fail2:
 FUNC_7(VAR_15, &VAR_16->start);

fail1:
 FUNC_8(VAR_15->ptp_data);
 VAR_15->ptp_data = ((void*)0);

 return VAR_17;
}
