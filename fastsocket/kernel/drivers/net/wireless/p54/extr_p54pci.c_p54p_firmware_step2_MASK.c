
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {struct device* parent; } ;
struct pci_dev {TYPE_2__ dev; } ;
struct TYPE_5__ {struct ieee80211_hw* hw; } ;
struct p54p_priv {int fw_loaded; struct firmware const* firmware; struct pci_dev* pdev; TYPE_1__ common; } ;
struct ieee80211_hw {int dummy; } ;
struct firmware {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*,char*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct ieee80211_hw*) ;
 int FUNC_6 (struct ieee80211_hw*,TYPE_2__*) ;
 int FUNC_7 (struct ieee80211_hw*) ;
 int FUNC_8 (struct ieee80211_hw*) ;
 int FUNC_9 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_10(const struct firmware *VAR_1,
    void *VAR_2)
{
 struct p54p_priv *VAR_3 = VAR_2;
 struct ieee80211_hw *VAR_4 = VAR_3->common.hw;
 struct pci_dev *VAR_5 = VAR_3->pdev;
 int VAR_6;

 if (!VAR_1) {
  FUNC_1(&VAR_5->dev, "Cannot find firmware (isl3886pci)\n");
  VAR_6 = -VAR_0;
  goto out;
 }

 VAR_3->firmware = VAR_1;

 VAR_6 = FUNC_7(VAR_4);
 if (VAR_6)
  goto out;
 VAR_6 = FUNC_5(VAR_4);
 FUNC_8(VAR_4);
 if (VAR_6)
  goto out;

 VAR_6 = FUNC_6(VAR_4, &VAR_5->dev);
 if (VAR_6)
  goto out;

out:

 FUNC_0(&VAR_3->fw_loaded);

 if (VAR_6) {
  struct device *VAR_7 = VAR_5->dev.parent;

  if (VAR_7)
   FUNC_2(VAR_7);






  FUNC_3(&VAR_5->dev);

  if (VAR_7)
   FUNC_4(VAR_7);
 }

 FUNC_9(VAR_5);
}
