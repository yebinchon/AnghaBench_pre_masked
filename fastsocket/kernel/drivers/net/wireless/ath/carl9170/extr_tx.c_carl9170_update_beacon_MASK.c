
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct sk_buff {scalar_t__ len; scalar_t__ data; } ;
struct carl9170_vif_info {scalar_t__ id; struct sk_buff* beacon; } ;
struct TYPE_3__ {scalar_t__ beacon_addr; scalar_t__ beacon_max_len; } ;
struct ar9170 {int beacon_lock; TYPE_2__* hw; TYPE_1__ fw; } ;
typedef scalar_t__ __le32 ;
struct TYPE_4__ {int wiphy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (struct ar9170*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (struct ar9170*,scalar_t__,int ,scalar_t__,scalar_t__) ;
 int FUNC_6 (struct carl9170_vif_info*) ;
 struct carl9170_vif_info* FUNC_7 (struct ar9170*) ;
 int FUNC_8 (struct ar9170*,struct sk_buff*,scalar_t__*,scalar_t__*) ;
 int FUNC_9 (struct sk_buff*) ;
 struct sk_buff* FUNC_10 (TYPE_2__*,int ,int *,int *) ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 scalar_t__ FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 scalar_t__ FUNC_15 (scalar_t__,int) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int ,char*,...) ;

int FUNC_19(struct ar9170 *VAR_9, const bool VAR_10)
{
 struct sk_buff *VAR_11 = ((void*)0);
 struct carl9170_vif_info *VAR_12;
 __le32 *VAR_13, *VAR_14 = ((void*)0);
 u32 VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;
 int VAR_21 = 0, VAR_22 = 0;
 bool VAR_23;

 FUNC_13();
 VAR_12 = FUNC_7(VAR_9);
 if (!VAR_12)
  goto out_unlock;

 VAR_11 = FUNC_10(VAR_9->hw, FUNC_6(VAR_12),
  ((void*)0), ((void*)0));

 if (!VAR_11) {
  VAR_22 = -VAR_7;
  goto err_free;
 }

 FUNC_16(&VAR_9->beacon_lock);
 VAR_13 = (__le32 *)VAR_11->data;
 if (VAR_12->beacon)
  VAR_14 = (__le32 *)VAR_12->beacon->data;

 VAR_18 = VAR_12->id * VAR_0;
 VAR_19 = VAR_9->fw.beacon_addr + VAR_18;
 VAR_20 = FUNC_15(VAR_11->len + VAR_8, 4);

 if ((VAR_18 + VAR_20) > VAR_9->fw.beacon_max_len) {
  if (FUNC_12()) {
   FUNC_18(VAR_9->hw->wiphy, "beacon does not "
      "fit into device memory!\n");
  }
  VAR_22 = -VAR_5;
  goto err_unlock;
 }

 if (VAR_20 > VAR_0) {
  if (FUNC_12()) {
   FUNC_18(VAR_9->hw->wiphy, "no support for beacons "
    "bigger than %d (yours:%d).\n",
     VAR_0, VAR_20);
  }

  VAR_22 = -VAR_6;
  goto err_unlock;
 }

 VAR_23 = FUNC_8(VAR_9, VAR_11, &VAR_16, &VAR_17);

 FUNC_2(VAR_9);
 FUNC_1(VAR_1, VAR_16);
 if (VAR_23)
  FUNC_1(VAR_2, VAR_17);
 else
  FUNC_1(VAR_3, VAR_17);

 for (VAR_21 = 0; VAR_21 < FUNC_0(VAR_11->len, 4); VAR_21++) {





  if (VAR_14 && (VAR_13[VAR_21] == VAR_14[VAR_21]))
   continue;

  VAR_15 = FUNC_11(VAR_13[VAR_21]);
  FUNC_1(VAR_19 + 4 * VAR_21, VAR_15);
 }
 FUNC_3();

 FUNC_9(VAR_12->beacon);
 VAR_12->beacon = ((void*)0);

 VAR_22 = FUNC_4();
 if (!VAR_22)
  VAR_12->beacon = VAR_11;
 FUNC_17(&VAR_9->beacon_lock);
 if (VAR_22)
  goto err_free;

 if (VAR_10) {
  VAR_22 = FUNC_5(VAR_9, VAR_12->id,
     VAR_4,
     VAR_19, VAR_11->len + VAR_8);

  if (VAR_22)
   goto err_free;
 }
out_unlock:
 FUNC_14();
 return 0;

err_unlock:
 FUNC_17(&VAR_9->beacon_lock);

err_free:
 FUNC_14();
 FUNC_9(VAR_11);
 return VAR_22;
}
