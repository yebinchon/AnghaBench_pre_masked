
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pci_dev {TYPE_3__* bus; } ;
struct myri10ge_priv {TYPE_2__* pdev; } ;
struct device {int dummy; } ;
struct TYPE_6__ {struct pci_dev* self; } ;
struct TYPE_5__ {struct device dev; TYPE_1__* bus; } ;
struct TYPE_4__ {struct pci_dev* self; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (struct device*,char*,int ,...) ;
 int VAR_5 ;
 int FUNC_2 (struct pci_dev*,int ) ;
 int FUNC_3 (struct pci_dev*) ;
 scalar_t__ FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*,scalar_t__,unsigned int*) ;
 int FUNC_6 (struct pci_dev*,scalar_t__,unsigned int) ;

__attribute__((used)) static void FUNC_7(struct myri10ge_priv *VAR_6)
{
 struct pci_dev *VAR_7 = VAR_6->pdev->bus->self;
 struct device *VAR_8 = &VAR_6->pdev->dev;
 int VAR_9;
 unsigned VAR_10;
 int VAR_11;

 if (!VAR_5 || !VAR_7)
  return;


 if (FUNC_4(VAR_7) != VAR_3) {
  if (VAR_5 > 1) {
   struct pci_dev *VAR_12, *VAR_13 = VAR_7;



   do {
    VAR_12 = VAR_7;
    VAR_7 = VAR_7->bus->self;
    if (!VAR_7 || VAR_12 == VAR_7) {
     FUNC_0(VAR_8,
      "Failed to find root port"
      " to force ECRC\n");
     return;
    }
   } while (FUNC_4(VAR_7) !=
     VAR_3);

   FUNC_1(VAR_8,
     "Forcing ECRC on non-root port %s"
     " (enabling on root port %s)\n",
     FUNC_3(VAR_13), FUNC_3(VAR_7));
  } else {
   FUNC_0(VAR_8,
    "Not enabling ECRC on non-root port %s\n",
    FUNC_3(VAR_7));
   return;
  }
 }

 VAR_9 = FUNC_2(VAR_7, VAR_4);
 if (!VAR_9)
  return;

 VAR_11 = FUNC_5(VAR_7, VAR_9 + VAR_0, &VAR_10);
 if (VAR_11) {
  FUNC_0(VAR_8, "failed reading ext-conf-space of %s\n",
   FUNC_3(VAR_7));
  FUNC_0(VAR_8, "\t pci=nommconf in use? "
   "or buggy/incomplete/absent ACPI MCFG attr?\n");
  return;
 }
 if (!(VAR_10 & VAR_1))
  return;

 VAR_10 |= VAR_2;
 FUNC_6(VAR_7, VAR_9 + VAR_0, VAR_10);
 FUNC_1(VAR_8, "Enabled ECRC on upstream bridge %s\n", FUNC_3(VAR_7));
}
