
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sbridge_dev {struct pci_dev** pdev; } ;
struct pci_id_table {struct pci_id_descr* descr; } ;
struct pci_id_descr {scalar_t__ dev; scalar_t__ func; int dev_id; scalar_t__ optional; } ;
struct pci_dev {int devfn; TYPE_1__* bus; } ;
struct TYPE_2__ {int number; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_4 ;
 struct sbridge_dev* FUNC_2 (int ,struct pci_id_table const*) ;
 int FUNC_3 (char*,int ,scalar_t__,scalar_t__,int ,int ) ;
 struct sbridge_dev* FUNC_4 (int ) ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*) ;
 scalar_t__ FUNC_7 (struct pci_dev*) ;
 struct pci_dev* FUNC_8 (int ,int ,struct pci_dev*) ;
 int FUNC_9 (int ,char*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,...) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(struct pci_dev **VAR_5,
     u8 *VAR_6,
     const struct pci_id_table *VAR_7,
     const unsigned VAR_8)
{
 struct sbridge_dev *VAR_9;
 const struct pci_id_descr *VAR_10 = &VAR_7->descr[VAR_8];

 struct pci_dev *VAR_11 = ((void*)0);
 u8 VAR_12 = 0;

 FUNC_9(VAR_3,
  "Seeking for: dev %02x.%d PCI ID %04x:%04x\n",
  VAR_10->dev, VAR_10->func,
  VAR_4, VAR_10->dev_id);

 VAR_11 = FUNC_8(VAR_4,
         VAR_10->dev_id, *VAR_5);

 if (!VAR_11) {
  if (*VAR_5) {
   *VAR_5 = VAR_11;
   return 0;
  }

  if (VAR_10->optional)
   return 0;

  if (VAR_8 == 0)
   return -VAR_0;

  FUNC_9(VAR_3,
   "Device not found: dev %02x.%d PCI ID %04x:%04x\n",
   VAR_10->dev, VAR_10->func,
   VAR_4, VAR_10->dev_id);


  return -VAR_0;
 }
 VAR_12 = VAR_11->bus->number;

 VAR_9 = FUNC_4(VAR_12);
 if (!VAR_9) {
  VAR_9 = FUNC_2(VAR_12, VAR_7);
  if (!VAR_9) {
   FUNC_6(VAR_11);
   return -VAR_1;
  }
  (*VAR_6)++;
 }

 if (VAR_9->pdev[VAR_8]) {
  FUNC_9(VAR_2,
   "Duplicated device for "
   "dev %02x:%d.%d PCI ID %04x:%04x\n",
   VAR_12, VAR_10->dev, VAR_10->func,
   VAR_4, VAR_10->dev_id);
  FUNC_6(VAR_11);
  return -VAR_0;
 }

 VAR_9->pdev[VAR_8] = VAR_11;


 if (FUNC_10(FUNC_1(VAR_11->devfn) != VAR_10->dev ||
   FUNC_0(VAR_11->devfn) != VAR_10->func)) {
  FUNC_9(VAR_2,
   "Device PCI ID %04x:%04x "
   "has dev %02x:%d.%d instead of dev %02x:%02x.%d\n",
   VAR_4, VAR_10->dev_id,
   VAR_12, FUNC_1(VAR_11->devfn), FUNC_0(VAR_11->devfn),
   VAR_12, VAR_10->dev, VAR_10->func);
  return -VAR_0;
 }


 if (FUNC_10(FUNC_7(VAR_11) < 0)) {
  FUNC_9(VAR_2,
   "Couldn't enable "
   "dev %02x:%d.%d PCI ID %04x:%04x\n",
   VAR_12, VAR_10->dev, VAR_10->func,
   VAR_4, VAR_10->dev_id);
  return -VAR_0;
 }

 FUNC_3("Detected dev %02x:%d.%d PCI ID %04x:%04x\n",
  VAR_12, VAR_10->dev,
  VAR_10->func,
  VAR_4, VAR_10->dev_id);






 FUNC_5(VAR_11);

 *VAR_5 = VAR_11;

 return 0;
}
