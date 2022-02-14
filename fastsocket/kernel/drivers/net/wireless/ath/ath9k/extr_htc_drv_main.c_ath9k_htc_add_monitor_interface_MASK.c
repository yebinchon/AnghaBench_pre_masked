
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ath_common {int macaddr; } ;
struct ath9k_htc_target_vif {int index; int is_vif_sta; int sta_index; int vif_index; int maxampdu; int macaddr; int opmode; int myaddr; } ;
struct ath9k_htc_target_sta {int index; int is_vif_sta; int sta_index; int vif_index; int maxampdu; int macaddr; int opmode; int myaddr; } ;
struct ath9k_htc_priv {scalar_t__ nvifs; int nstations; int sta_slot; int vif_slot; int mon_vif_idx; int* vif_sta_pos; TYPE_1__* ah; } ;
struct TYPE_2__ {int is_monitoring; int opmode; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,struct ath9k_htc_target_vif*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct ath9k_htc_priv*) ;
 struct ath_common* FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct ath_common*,int ,char*,...) ;
 int FUNC_4 (struct ath_common*,char*) ;
 int FUNC_5 (int) ;
 void* FUNC_6 (int) ;
 int FUNC_7 (int *,int ,int ) ;
 int FUNC_8 (struct ath9k_htc_target_vif*,int ,int) ;

__attribute__((used)) static int FUNC_9(struct ath9k_htc_priv *VAR_10)
{
 struct ath_common *VAR_11 = FUNC_2(VAR_10->ah);
 struct ath9k_htc_target_vif VAR_12;
 struct ath9k_htc_target_sta VAR_13;
 int VAR_14 = 0, VAR_15;
 u8 VAR_16;

 if ((VAR_10->nvifs >= VAR_1) ||
     (VAR_10->nstations >= VAR_0)) {
  VAR_14 = -VAR_3;
  goto err_vif;
 }

 VAR_15 = FUNC_6(VAR_10->sta_slot);
 if ((VAR_15 < 0) || (VAR_15 > VAR_0)) {
  VAR_14 = -VAR_3;
  goto err_vif;
 }




 FUNC_8(&VAR_12, 0, sizeof(struct ath9k_htc_target_vif));
 FUNC_7(&VAR_12.myaddr, VAR_11->macaddr, VAR_4);

 VAR_12.opmode = VAR_6;
 VAR_12.index = FUNC_6(VAR_10->vif_slot);

 FUNC_0(VAR_9, &VAR_12);
 if (VAR_14)
  goto err_vif;





 VAR_10->mon_vif_idx = VAR_12.index;
 VAR_10->vif_slot |= (1 << VAR_12.index);





 if (!VAR_10->nvifs)
  VAR_10->ah->opmode = VAR_7;

 VAR_10->nvifs++;




 FUNC_8(&VAR_13, 0, sizeof(struct ath9k_htc_target_sta));

 FUNC_7(&VAR_13.macaddr, VAR_11->macaddr, VAR_4);

 VAR_13.is_vif_sta = 1;
 VAR_13.sta_index = VAR_15;
 VAR_13.vif_index = VAR_12.index;
 VAR_13.maxampdu = FUNC_5(0xffff);

 FUNC_0(VAR_8, &VAR_13);
 if (VAR_14) {
  FUNC_4(VAR_11, "Unable to add station entry for monitor mode\n");
  goto err_sta;
 }

 VAR_10->sta_slot |= (1 << VAR_15);
 VAR_10->nstations++;
 VAR_10->vif_sta_pos[VAR_10->mon_vif_idx] = VAR_15;
 VAR_10->ah->is_monitoring = 1;

 FUNC_3(VAR_11, VAR_2,
  "Attached a monitor interface at idx: %d, sta idx: %d\n",
  VAR_10->mon_vif_idx, VAR_15);

 return 0;

err_sta:



 FUNC_1(VAR_10);
err_vif:
 FUNC_3(VAR_11, VAR_5, "Unable to attach a monitor interface\n");

 return VAR_14;
}
