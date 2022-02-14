
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ath5k_tx_status {int ts_antenna; int ts_status; scalar_t__ ts_final_idx; void* ts_rssi; void* ts_seqnum; void* ts_final_retry; void* ts_shortretry; void* ts_tstamp; } ;
struct ath5k_hw_tx_status {int tx_status_1; int tx_status_0; } ;
struct ath5k_hw {int dummy; } ;
struct TYPE_3__ {struct ath5k_hw_tx_status tx_stat; } ;
struct TYPE_4__ {TYPE_1__ ds_tx5210; } ;
struct ath5k_desc {TYPE_2__ ud; } ;


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
 void* FUNC_0 (int,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int
FUNC_2(struct ath5k_hw *VAR_14,
    struct ath5k_desc *VAR_15,
    struct ath5k_tx_status *VAR_16)
{
 struct ath5k_hw_tx_status *VAR_17;

 VAR_17 = &VAR_15->ud.ds_tx5210.tx_stat;


 if (FUNC_1((VAR_17->tx_status_1 & VAR_8) == 0))
  return -VAR_13;




 VAR_16->ts_tstamp = FUNC_0(VAR_17->tx_status_0,
  VAR_5);
 VAR_16->ts_shortretry = FUNC_0(VAR_17->tx_status_0,
  VAR_6);
 VAR_16->ts_final_retry = FUNC_0(VAR_17->tx_status_0,
  VAR_4);

 VAR_16->ts_seqnum = FUNC_0(VAR_17->tx_status_1,
  VAR_9);
 VAR_16->ts_rssi = FUNC_0(VAR_17->tx_status_1,
  VAR_7);
 VAR_16->ts_antenna = 1;
 VAR_16->ts_status = 0;
 VAR_16->ts_final_idx = 0;

 if (!(VAR_17->tx_status_0 & VAR_3)) {
  if (VAR_17->tx_status_0 &
    VAR_0)
   VAR_16->ts_status |= VAR_12;

  if (VAR_17->tx_status_0 & VAR_1)
   VAR_16->ts_status |= VAR_10;

  if (VAR_17->tx_status_0 & VAR_2)
   VAR_16->ts_status |= VAR_11;
 }

 return 0;
}
