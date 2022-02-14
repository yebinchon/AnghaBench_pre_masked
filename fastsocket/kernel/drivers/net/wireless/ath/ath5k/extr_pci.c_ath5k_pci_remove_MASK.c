
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct ieee80211_hw {struct ath5k_hw* priv; } ;
struct ath5k_hw {int iobase; } ;


 int FUNC_0 (struct ath5k_hw*) ;
 int FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct pci_dev*) ;
 struct ieee80211_hw* FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*,int ) ;
 int FUNC_5 (struct pci_dev*,int ) ;

__attribute__((used)) static void
FUNC_6(struct pci_dev *VAR_0)
{
 struct ieee80211_hw *VAR_1 = FUNC_3(VAR_0);
 struct ath5k_hw *VAR_2 = VAR_1->priv;

 FUNC_0(VAR_2);
 FUNC_4(VAR_0, VAR_2->iobase);
 FUNC_5(VAR_0, 0);
 FUNC_2(VAR_0);
 FUNC_1(VAR_1);
}
