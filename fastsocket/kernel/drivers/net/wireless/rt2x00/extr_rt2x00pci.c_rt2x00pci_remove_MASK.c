
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt2x00_dev {int dummy; } ;
struct pci_dev {int dummy; } ;
struct ieee80211_hw {struct rt2x00_dev* priv; } ;


 int FUNC_0 (struct ieee80211_hw*) ;
 int FUNC_1 (struct pci_dev*) ;
 struct ieee80211_hw* FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*,int *) ;
 int FUNC_5 (struct rt2x00_dev*) ;
 int FUNC_6 (struct rt2x00_dev*) ;

void FUNC_7(struct pci_dev *VAR_0)
{
 struct ieee80211_hw *VAR_1 = FUNC_2(VAR_0);
 struct rt2x00_dev *VAR_2 = VAR_1->priv;




 FUNC_5(VAR_2);
 FUNC_6(VAR_2);
 FUNC_0(VAR_1);




 FUNC_4(VAR_0, ((void*)0));
 FUNC_1(VAR_0);
 FUNC_3(VAR_0);
}
