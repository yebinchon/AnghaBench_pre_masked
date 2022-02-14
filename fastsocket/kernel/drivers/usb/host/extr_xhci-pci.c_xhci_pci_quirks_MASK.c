
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xhci_hcd {int hci_version; int limit_active_eps; int quirks; } ;
struct pci_dev {scalar_t__ vendor; scalar_t__ device; int revision; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 struct pci_dev* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (struct xhci_hcd*,char*,...) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_24, struct xhci_hcd *VAR_25)
{
 struct pci_dev *VAR_26 = FUNC_0(VAR_24);


 if (VAR_26->vendor == VAR_6 &&
   (VAR_26->device == VAR_2 ||
    VAR_26->device == VAR_1)) {
  if (VAR_26->device == VAR_2 &&
    VAR_26->revision == 0x0) {
   VAR_25->quirks |= VAR_18;
   FUNC_2(VAR_25, "QUIRK: Fresco Logic xHC needs configure"
     " endpoint cmd after reset endpoint\n");
  }




  VAR_25->quirks |= VAR_13;
  FUNC_2(VAR_25, "QUIRK: Fresco Logic revision %u "
    "has broken MSI implementation\n",
    VAR_26->revision);
  VAR_25->quirks |= VAR_23;
 }

 if (VAR_26->vendor == VAR_8)
  VAR_25->quirks |= VAR_17;

 if (VAR_26->vendor == VAR_4 && VAR_25->hci_version == 0x96)
  VAR_25->quirks |= VAR_10;


 if (VAR_26->vendor == VAR_4 && FUNC_1())
  VAR_25->quirks |= VAR_11;
 if (VAR_26->vendor == VAR_7) {
  VAR_25->quirks |= VAR_16;
  VAR_25->quirks |= VAR_15;
 }
 if (VAR_26->vendor == VAR_7 &&
   VAR_26->device == VAR_3) {
  VAR_25->quirks |= VAR_21;
  VAR_25->quirks |= VAR_14;
  VAR_25->limit_active_eps = 64;
  VAR_25->quirks |= VAR_22;
  VAR_25->quirks |= VAR_20;
  VAR_25->quirks |= VAR_12;
 }
 if (VAR_26->vendor == VAR_5 &&
   VAR_26->device == VAR_0) {
  VAR_25->quirks |= VAR_19;
  FUNC_2(VAR_25, "QUIRK: Resetting on resume\n");
  VAR_25->quirks |= VAR_23;
 }
 if (VAR_26->vendor == VAR_9)
  VAR_25->quirks |= VAR_19;
}
