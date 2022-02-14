
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_hw {int wiphy; struct adm8211_priv* priv; } ;
struct adm8211_priv {int mode; TYPE_1__* pdev; int channel; } ;
struct TYPE_2__ {int irq; } ;


 int FUNC_0 (int ,int) ;
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
 int FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (struct ieee80211_hw*) ;
 int VAR_10 ;
 int FUNC_4 (struct ieee80211_hw*,int ) ;
 int FUNC_5 (struct ieee80211_hw*,int,int) ;
 int FUNC_6 (struct ieee80211_hw*) ;
 int FUNC_7 (int ,int ,int ,char*,struct ieee80211_hw*) ;
 int FUNC_8 (int ,char*) ;

__attribute__((used)) static int FUNC_9(struct ieee80211_hw *VAR_11)
{
 struct adm8211_priv *VAR_12 = VAR_11->priv;
 int VAR_13;


 VAR_13 = FUNC_2(VAR_11);
 if (VAR_13) {
  FUNC_8(VAR_11->wiphy, "hardware reset failed\n");
  goto fail;
 }

 VAR_13 = FUNC_3(VAR_11);
 if (VAR_13) {
  FUNC_8(VAR_11->wiphy, "failed to initialize rings\n");
  goto fail;
 }


 FUNC_1(VAR_11);
 FUNC_4(VAR_11, VAR_12->channel);

 VAR_13 = FUNC_7(VAR_12->pdev->irq, VAR_10,
        VAR_7, "adm8211", VAR_11);
 if (VAR_13) {
  FUNC_8(VAR_11->wiphy, "failed to register IRQ handler\n");
  goto fail;
 }

 FUNC_0(VAR_6, VAR_2 | VAR_0 |
          VAR_3 | VAR_4 |
          VAR_5 | VAR_1);
 VAR_12->mode = VAR_8;
 FUNC_6(VAR_11);
 FUNC_0(VAR_9, 0);

 FUNC_5(VAR_11, 100, 10);
 return 0;

fail:
 return VAR_13;
}
