
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct pci_device_id {int dummy; } ;
struct device {int dummy; } ;
struct pci_dev {int devfn; struct device dev; } ;
struct ahd_softc {int features; struct pci_dev* dev_softc; int flags; } ;
struct ahd_pci_identity {int dummy; } ;
typedef int dma_addr_t ;
typedef struct pci_dev* ahd_dev_softc_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ const FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int ) ;
 struct ahd_softc* FUNC_2 (int *,char*) ;
 struct ahd_pci_identity* FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct ahd_softc*) ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct ahd_softc*) ;
 int FUNC_9 (struct ahd_softc*,int *) ;
 int FUNC_10 (struct ahd_softc*,struct ahd_pci_identity const*) ;
 int VAR_7 ;
 scalar_t__ FUNC_11 (struct device*) ;
 scalar_t__ FUNC_12 (struct device*,scalar_t__ const) ;
 char* FUNC_13 (scalar_t__,int ,int ) ;
 scalar_t__ FUNC_14 (struct pci_dev*) ;
 int FUNC_15 (struct pci_dev*,struct ahd_softc*) ;
 int FUNC_16 (struct pci_dev*) ;
 int FUNC_17 (char*,char*,int,int,int) ;
 int FUNC_18 (char*,char*) ;
 scalar_t__ FUNC_19 (char*) ;

__attribute__((used)) static int
FUNC_20(struct pci_dev *VAR_8, const struct pci_device_id *VAR_9)
{
 char VAR_10[80];
 struct ahd_softc *VAR_11;
 ahd_dev_softc_t VAR_12;
 const struct ahd_pci_identity *VAR_13;
 char *VAR_14;
 int VAR_15;
 struct device *VAR_16 = &VAR_8->dev;

 VAR_12 = VAR_8;
 VAR_13 = FUNC_3(VAR_12);
 if (VAR_13 == ((void*)0))
  return (-VAR_3);






 FUNC_17(VAR_10, "ahd_pci:%d:%d:%d",
  FUNC_5(VAR_12),
  FUNC_7(VAR_12),
  FUNC_6(VAR_12));
 VAR_14 = FUNC_13(FUNC_19(VAR_10) + 1, VAR_5, VAR_6);
 if (VAR_14 == ((void*)0))
  return (-VAR_4);
 FUNC_18(VAR_14, VAR_10);
 VAR_11 = FUNC_2(((void*)0), VAR_14);
 if (VAR_11 == ((void*)0))
  return (-VAR_4);
 if (FUNC_14(VAR_8)) {
  FUNC_4(VAR_11);
  return (-VAR_3);
 }
 FUNC_16(VAR_8);

 if (sizeof(dma_addr_t) > 4) {
  const u64 VAR_17 = FUNC_11(VAR_16);

  if (VAR_17 > FUNC_0(39) &&
      FUNC_12(VAR_16, FUNC_0(64)) == 0)
   VAR_11->flags |= VAR_1;
  else if (VAR_17 > FUNC_0(32) &&
    FUNC_12(VAR_16, FUNC_0(39)) == 0)
   VAR_11->flags |= VAR_0;
  else
   FUNC_12(VAR_16, FUNC_0(32));
 } else {
  FUNC_12(VAR_16, FUNC_0(32));
 }
 VAR_11->dev_softc = VAR_12;
 VAR_15 = FUNC_10(VAR_11, VAR_13);
 if (VAR_15 != 0) {
  FUNC_4(VAR_11);
  return (-VAR_15);
 }





 if ((VAR_11->features & VAR_2) && FUNC_1(VAR_8->devfn) != 0)
  FUNC_8(VAR_11);

 FUNC_15(VAR_8, VAR_11);

 FUNC_9(VAR_11, &VAR_7);
 return (0);
}
