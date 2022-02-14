
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct pci_dev {TYPE_1__* bus; } ;
struct ath_softc {int dev; struct ath_hw* sc_ah; } ;
struct ath_hw {int aspm_enabled; int is_pciexpress; } ;
struct ath_common {scalar_t__ priv; } ;
struct TYPE_2__ {struct pci_dev* self; } ;


 scalar_t__ FUNC_0 (struct ath_hw*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct ath_hw*,int) ;
 scalar_t__ FUNC_2 (struct ath_hw*) ;
 int FUNC_3 (struct ath_common*,char*,...) ;
 int FUNC_4 (struct pci_dev*,int ,int) ;
 int FUNC_5 (struct pci_dev*,int ,int*) ;
 struct pci_dev* FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct ath_common *VAR_4)
{
 struct ath_softc *VAR_5 = (struct ath_softc *) VAR_4->priv;
 struct ath_hw *VAR_6 = VAR_5->sc_ah;
 struct pci_dev *VAR_7 = FUNC_6(VAR_5->dev);
 struct pci_dev *VAR_8;
 u16 VAR_9;

 if (!VAR_6->is_pciexpress)
  return;

 VAR_8 = VAR_7->bus->self;
 if (!VAR_8)
  return;

 if ((FUNC_2(VAR_6) != VAR_0) &&
     (FUNC_0(VAR_6))) {

  FUNC_4(VAR_7, VAR_1,
   VAR_2 | VAR_3);





  FUNC_4(VAR_8, VAR_1,
   VAR_2 | VAR_3);

  FUNC_3(VAR_4, "Disabling ASPM since BTCOEX is enabled\n");
  return;
 }

 FUNC_5(VAR_8, VAR_1, &VAR_9);
 if (VAR_9 & (VAR_2 | VAR_3)) {
  VAR_6->aspm_enabled = 1;

  FUNC_1(VAR_6, 0);
  FUNC_3(VAR_4, "ASPM enabled: 0x%x\n", VAR_9);
 }
}
