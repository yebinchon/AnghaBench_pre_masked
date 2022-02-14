
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u32 ;
struct statistics_tx {scalar_t__ temperature; } ;
struct statistics_rx_phy {scalar_t__ temperature; } ;
struct statistics_rx_non_phy {scalar_t__ temperature; } ;
struct statistics_rx_ht_phy {scalar_t__ temperature; } ;
struct statistics_general_common {scalar_t__ temperature; } ;
struct statistics_bt_activity {scalar_t__ temperature; } ;
struct TYPE_15__ {scalar_t__ cmd; } ;
struct iwl_rx_packet {TYPE_6__ hdr; int data; int len_n_flags; } ;
struct iwl_rx_cmd_buffer {int dummy; } ;
struct TYPE_18__ {scalar_t__ temperature; } ;
struct TYPE_17__ {int flag; int lock; TYPE_9__ bt_activity; TYPE_9__ tx; TYPE_9__ rx_cck; TYPE_9__ rx_ofdm_ht; TYPE_9__ rx_ofdm; TYPE_9__ rx_non_phy; TYPE_9__ common; int accum_num_bt_kills; int num_bt_kills; } ;
struct iwl_priv {unsigned long rx_statistics_jiffies; TYPE_8__ statistics; TYPE_7__* lib; int run_time_calib_work; int workqueue; int status; int statistics_periodic; } ;
struct TYPE_14__ {struct statistics_tx cck; struct statistics_tx ofdm_ht; struct statistics_tx ofdm; struct statistics_tx general; } ;
struct TYPE_13__ {struct statistics_tx common; } ;
struct iwl_notif_statistics {int flag; struct statistics_tx tx; TYPE_5__ rx; TYPE_4__ general; } ;
struct iwl_device_cmd {int dummy; } ;
struct iwl_cmd_header {int dummy; } ;
struct TYPE_11__ {int num_bt_kills; struct statistics_tx common; } ;
struct TYPE_12__ {TYPE_2__ general; struct statistics_tx cck; struct statistics_tx ofdm_ht; struct statistics_tx ofdm; } ;
struct TYPE_10__ {struct statistics_tx activity; struct statistics_tx common; } ;
struct iwl_bt_notif_statistics {int flag; TYPE_3__ rx; TYPE_1__ general; struct statistics_tx tx; } ;
typedef int __le32 ;
struct TYPE_16__ {int (* temperature ) (struct iwl_priv*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct iwl_priv*,char*,int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int,char*,int,int,int) ;
 int FUNC_2 (struct iwl_priv*,struct statistics_tx*,struct statistics_tx*,struct statistics_tx*,struct statistics_tx*,struct statistics_tx*,struct statistics_tx*,struct statistics_tx*) ;
 int FUNC_3 (struct iwl_priv*,struct statistics_tx*,struct statistics_tx*,struct statistics_tx*,unsigned long) ;
 int FUNC_4 (struct iwl_priv*) ;
 unsigned long VAR_5 ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_9__*,struct statistics_tx*,int) ;
 int FUNC_8 (int *,scalar_t__) ;
 scalar_t__ FUNC_9 (int const) ;
 int FUNC_10 (int ,int *) ;
 struct iwl_rx_packet* FUNC_11 (struct iwl_rx_cmd_buffer*) ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct iwl_priv*) ;
 int FUNC_16 (int ,int *) ;
 scalar_t__ FUNC_17 (int) ;

__attribute__((used)) static int FUNC_18(struct iwl_priv *VAR_6,
         struct iwl_rx_cmd_buffer *VAR_7,
         struct iwl_device_cmd *VAR_8)
{
 unsigned long VAR_9 = VAR_5;
 const int VAR_10 = 60;
 int VAR_11;
 struct iwl_rx_packet *VAR_12 = FUNC_11(VAR_7);
 u32 VAR_13 = FUNC_6(VAR_12->len_n_flags) & VAR_0;
 __le32 *VAR_14;
 struct statistics_general_common *VAR_15;
 struct statistics_rx_non_phy *VAR_16;
 struct statistics_rx_phy *VAR_17;
 struct statistics_rx_ht_phy *VAR_18;
 struct statistics_rx_phy *VAR_19;
 struct statistics_tx *VAR_20;
 struct statistics_bt_activity *VAR_21;

 VAR_13 -= sizeof(struct iwl_cmd_header);

 FUNC_0(VAR_6, "Statistics notification received (%d bytes).\n",
       VAR_13);

 FUNC_13(&VAR_6->statistics.lock);

 if (VAR_13 == sizeof(struct iwl_bt_notif_statistics)) {
  struct iwl_bt_notif_statistics *VAR_22;
  VAR_22 = (void *)&VAR_12->data;
  VAR_14 = &VAR_22->flag;
  VAR_15 = &VAR_22->general.common;
  VAR_16 = &VAR_22->rx.general.common;
  VAR_17 = &VAR_22->rx.ofdm;
  VAR_18 = &VAR_22->rx.ofdm_ht;
  VAR_19 = &VAR_22->rx.cck;
  VAR_20 = &VAR_22->tx;
  VAR_21 = &VAR_22->general.activity;







 } else if (VAR_13 == sizeof(struct iwl_notif_statistics)) {
  struct iwl_notif_statistics *VAR_23;
  VAR_23 = (void *)&VAR_12->data;
  VAR_14 = &VAR_23->flag;
  VAR_15 = &VAR_23->general.common;
  VAR_16 = &VAR_23->rx.general;
  VAR_17 = &VAR_23->rx.ofdm;
  VAR_18 = &VAR_23->rx.ofdm_ht;
  VAR_19 = &VAR_23->rx.cck;
  VAR_20 = &VAR_23->tx;
  VAR_21 = ((void*)0);
 } else {
  FUNC_1(1, "len %d doesn't match BT (%zu) or normal (%zu)\n",
     VAR_13, sizeof(struct iwl_bt_notif_statistics),
     sizeof(struct iwl_notif_statistics));
  FUNC_14(&VAR_6->statistics.lock);
  return 0;
 }

 VAR_11 = VAR_15->temperature != VAR_6->statistics.common.temperature ||
   (*VAR_14 & VAR_2) !=
   (VAR_6->statistics.flag & VAR_2);

 FUNC_2(VAR_6, VAR_15, VAR_16, VAR_17,
        VAR_18, VAR_19, VAR_20, VAR_21);

 FUNC_3(VAR_6, VAR_17, VAR_18, VAR_20, VAR_9);

 VAR_6->statistics.flag = *VAR_14;
 FUNC_7(&VAR_6->statistics.common, VAR_15, sizeof(*VAR_15));
 FUNC_7(&VAR_6->statistics.rx_non_phy, VAR_16, sizeof(*VAR_16));
 FUNC_7(&VAR_6->statistics.rx_ofdm, VAR_17, sizeof(*VAR_17));
 FUNC_7(&VAR_6->statistics.rx_ofdm_ht, VAR_18, sizeof(*VAR_18));
 FUNC_7(&VAR_6->statistics.rx_cck, VAR_19, sizeof(*VAR_19));
 FUNC_7(&VAR_6->statistics.tx, VAR_20, sizeof(*VAR_20));






 VAR_6->rx_statistics_jiffies = VAR_9;

 FUNC_12(VAR_4, &VAR_6->status);





 FUNC_8(&VAR_6->statistics_periodic, VAR_5 +
    FUNC_9(VAR_10 * 1000));

 if (FUNC_17(!FUNC_16(VAR_3, &VAR_6->status)) &&
     (VAR_12->hdr.cmd == VAR_1)) {
  FUNC_4(VAR_6);
  FUNC_10(VAR_6->workqueue, &VAR_6->run_time_calib_work);
 }
 if (VAR_6->lib->temperature && VAR_11)
  VAR_6->lib->temperature(VAR_6);

 FUNC_14(&VAR_6->statistics.lock);

 return 0;
}
