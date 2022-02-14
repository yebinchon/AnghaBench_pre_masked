
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


struct ath_regulatory {int alpha2; } ;
struct TYPE_13__ {int vif_num; int mem_blocks; } ;
struct TYPE_10__ {struct ath_regulatory regulatory; } ;
struct ar9170 {int registered; TYPE_7__* hw; TYPE_6__* udev; TYPE_5__* vif_priv; TYPE_4__ fw; int mem_bitmap; TYPE_1__ common; } ;
struct TYPE_11__ {int ht_supported; } ;
struct TYPE_18__ {TYPE_2__ ht_cap; } ;
struct TYPE_12__ {int ht_supported; } ;
struct TYPE_17__ {TYPE_3__ ht_cap; } ;
struct TYPE_16__ {int wiphy; } ;
struct TYPE_15__ {int dev; } ;
struct TYPE_14__ {int id; int * vif; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct ath_regulatory*) ;
 int FUNC_2 (struct ath_regulatory*,int ,int ) ;
 TYPE_9__ VAR_4 ;
 TYPE_8__ VAR_5 ;
 int FUNC_3 (struct ar9170*) ;
 int FUNC_4 (struct ar9170*) ;
 int FUNC_5 (struct ar9170*) ;
 int FUNC_6 (struct ar9170*) ;
 int FUNC_7 (struct ar9170*) ;
 int VAR_6 ;
 int FUNC_8 (struct ar9170*) ;
 int FUNC_9 (struct ar9170*) ;
 int FUNC_10 (struct ar9170*) ;
 int FUNC_11 (int *,char*,int ) ;
 int FUNC_12 (TYPE_7__*) ;
 int FUNC_13 (int,int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int ) ;

int FUNC_17(struct ar9170 *VAR_8)
{
 struct ath_regulatory *VAR_9 = &VAR_8->common.regulatory;
 int VAR_10 = 0, VAR_11;

 if (FUNC_0(VAR_8->mem_bitmap))
  return -VAR_1;

 VAR_8->mem_bitmap = FUNC_13(FUNC_15(VAR_8->fw.mem_blocks, VAR_0) *
     sizeof(unsigned long), VAR_3);

 if (!VAR_8->mem_bitmap)
  return -VAR_2;


 VAR_10 = FUNC_7(VAR_8);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_6(VAR_8);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_2(VAR_9, VAR_8->hw->wiphy,
       VAR_6);
 if (VAR_10)
  return VAR_10;

 if (VAR_7) {
  VAR_4.ht_cap.ht_supported = 0;
  VAR_5.ht_cap.ht_supported = 0;
 }

 for (VAR_11 = 0; VAR_11 < VAR_8->fw.vif_num; VAR_11++) {
  VAR_8->vif_priv[VAR_11].id = VAR_11;
  VAR_8->vif_priv[VAR_11].vif = ((void*)0);
 }

 VAR_10 = FUNC_12(VAR_8->hw);
 if (VAR_10)
  return VAR_10;


 VAR_8->registered = 1;

 if (!FUNC_1(VAR_9))
  FUNC_14(VAR_8->hw->wiphy, VAR_9->alpha2);





 VAR_10 = FUNC_4(VAR_8);
 if (VAR_10)
  goto err_unreg;
 FUNC_11(&VAR_8->udev->dev, "Atheros AR9170 is registered as '%s'\n",
   FUNC_16(VAR_8->hw->wiphy));

 return 0;

err_unreg:
 FUNC_10(VAR_8);
 return VAR_10;
}
