
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct ieee80211_vif {int const type; int addr; scalar_t__ drv_priv; } ;
struct ieee80211_hw {struct ath9k_htc_priv* priv; } ;
struct ath_common {int dummy; } ;
struct ath9k_htc_vif {int index; } ;
struct ath9k_htc_target_vif {int index; int rtsthreshold; int opmode; int myaddr; } ;
struct ath9k_htc_priv {int vif_slot; int mutex; TYPE_1__* ah; int op_flags; int nvifs; } ;
struct TYPE_3__ {int const opmode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ath9k_htc_priv*,int const) ;



 int VAR_6 ;
 int FUNC_1 (int ,struct ath9k_htc_target_vif*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct ath9k_htc_priv*,struct ieee80211_vif*,int *) ;
 int FUNC_3 (struct ath9k_htc_priv*,struct ieee80211_vif*) ;
 int FUNC_4 (struct ath9k_htc_priv*) ;
 int FUNC_5 (struct ath9k_htc_priv*) ;
 int FUNC_6 (struct ath9k_htc_priv*,struct ieee80211_vif*) ;
 int FUNC_7 (struct ath9k_htc_priv*) ;
 int FUNC_8 (struct ath9k_htc_priv*) ;
 struct ath_common* FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*,int) ;
 int FUNC_11 (struct ath_common*,int ,char*,int const,int) ;
 int FUNC_12 (struct ath_common*,char*,int const) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int *,int ,int ) ;
 int FUNC_16 (struct ath9k_htc_target_vif*,int ,int) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int ,int *) ;

__attribute__((used)) static int FUNC_20(struct ieee80211_hw *VAR_9,
       struct ieee80211_vif *VAR_10)
{
 struct ath9k_htc_priv *VAR_11 = VAR_9->priv;
 struct ath9k_htc_vif *VAR_12 = (void *)VAR_10->drv_priv;
 struct ath_common *VAR_13 = FUNC_9(VAR_11->ah);
 struct ath9k_htc_target_vif VAR_14;
 int VAR_15 = 0;
 u8 VAR_16;

 FUNC_17(&VAR_11->mutex);

 FUNC_5(VAR_11);
 FUNC_16(&VAR_14, 0, sizeof(struct ath9k_htc_target_vif));
 FUNC_15(&VAR_14.myaddr, VAR_10->addr, VAR_2);

 switch (VAR_10->type) {
 case 128:
  VAR_14.opmode = VAR_5;
  break;
 case 130:
  VAR_14.opmode = VAR_4;
  break;
 case 129:
  VAR_14.opmode = VAR_3;
  break;
 default:
  FUNC_12(VAR_13,
   "Interface type %d not yet supported\n", VAR_10->type);
  VAR_15 = -VAR_1;
  goto out;
 }


 VAR_12->index = VAR_14.index = FUNC_14(VAR_11->vif_slot);
 VAR_14.rtsthreshold = FUNC_13(2304);
 FUNC_1(VAR_7, &VAR_14);
 if (VAR_15)
  goto out;





 VAR_15 = FUNC_2(VAR_11, VAR_10, ((void*)0));
 if (VAR_15) {
  FUNC_1(VAR_8, &VAR_14);
  goto out;
 }

 FUNC_6(VAR_11, VAR_10);

 VAR_11->vif_slot |= (1 << VAR_12->index);
 VAR_11->nvifs++;

 FUNC_0(VAR_11, VAR_10->type);

 if ((VAR_10->type == 129) ||
     (VAR_10->type == 130))
  FUNC_3(VAR_11, VAR_10);

 FUNC_7(VAR_11);

 if ((VAR_11->ah->opmode == 129) &&
     !FUNC_19(VAR_6, &VAR_11->op_flags)) {
  FUNC_10(VAR_11->ah, 1);
  FUNC_8(VAR_11);
 }

 FUNC_11(VAR_13, VAR_0, "Attach a VIF of type: %d at idx: %d\n",
  VAR_10->type, VAR_12->index);

out:
 FUNC_4(VAR_11);
 FUNC_18(&VAR_11->mutex);

 return VAR_15;
}
