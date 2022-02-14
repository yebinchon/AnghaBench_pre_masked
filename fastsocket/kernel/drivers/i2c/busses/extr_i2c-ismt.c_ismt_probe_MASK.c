
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pci_device_id {int dummy; } ;
struct pci_dev {int dev; int * resource; } ;
struct TYPE_5__ {int * parent; } ;
struct TYPE_7__ {int name; int retries; TYPE_1__ dev; int * algo; int class; int owner; } ;
struct ismt_priv {TYPE_3__ adapter; int smba; struct pci_dev* pci_dev; } ;
struct TYPE_6__ {int name; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,unsigned long) ;
 int FUNC_3 (int *,char*,...) ;
 struct ismt_priv* FUNC_4 (int *,int,int ) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*,struct ismt_priv*) ;
 int FUNC_7 (struct ismt_priv*) ;
 TYPE_2__ VAR_7 ;
 int FUNC_8 (struct ismt_priv*) ;
 int FUNC_9 (struct ismt_priv*) ;
 int FUNC_10 (struct pci_dev*,size_t) ;
 int FUNC_11 (struct pci_dev*,size_t,int ) ;
 unsigned long FUNC_12 (struct pci_dev*,size_t) ;
 unsigned long FUNC_13 (struct pci_dev*,size_t) ;
 scalar_t__ FUNC_14 (struct pci_dev*,int ) ;
 scalar_t__ FUNC_15 (struct pci_dev*,int ) ;
 int FUNC_16 (struct pci_dev*,struct ismt_priv*) ;
 int FUNC_17 (struct pci_dev*) ;
 int FUNC_18 (struct pci_dev*) ;
 int FUNC_19 (struct pci_dev*,size_t,unsigned long) ;
 int VAR_8 ;
 int FUNC_20 (int ,int,char*,unsigned long) ;

__attribute__((used)) static int
FUNC_21(struct pci_dev *VAR_9, const struct pci_device_id *VAR_10)
{
 int VAR_11;
 struct ismt_priv *VAR_12;
 unsigned long VAR_13, VAR_14;

 VAR_12 = FUNC_4(&VAR_9->dev, sizeof(*VAR_12), VAR_2);
 if (!VAR_12)
  return -VAR_1;

 FUNC_16(VAR_9, VAR_12);
 FUNC_6(&VAR_12->adapter, VAR_12);
 VAR_12->adapter.owner = VAR_6;

 VAR_12->adapter.class = VAR_3;

 VAR_12->adapter.algo = &VAR_8;


 VAR_12->adapter.dev.parent = &VAR_9->dev;


 VAR_12->adapter.retries = VAR_4;

 VAR_12->pci_dev = VAR_9;

 VAR_11 = FUNC_18(VAR_9);
 if (VAR_11) {
  FUNC_3(&VAR_9->dev, "Failed to enable SMBus PCI device (%d)\n",
   VAR_11);
  return VAR_11;
 }


 FUNC_17(VAR_9);


 VAR_13 = FUNC_13(VAR_9, VAR_5);
 VAR_14 = FUNC_12(VAR_9, VAR_5);
 if (!VAR_13 || !VAR_14) {
  FUNC_3(&VAR_9->dev,
   "SMBus base address uninitialized, upgrade BIOS\n");
  return -VAR_0;
 }

 FUNC_20(VAR_12->adapter.name, sizeof(VAR_12->adapter.name),
   "SMBus iSMT adapter at %lx", VAR_13);

 FUNC_2(&VAR_12->pci_dev->dev, " start=0x%lX\n", VAR_13);
 FUNC_2(&VAR_12->pci_dev->dev, " len=0x%lX\n", VAR_14);

 VAR_11 = FUNC_1(&VAR_9->resource[VAR_5]);
 if (VAR_11) {
  FUNC_3(&VAR_9->dev, "ACPI resource conflict!\n");
  return VAR_11;
 }

 VAR_11 = FUNC_11(VAR_9, VAR_5, VAR_7.name);
 if (VAR_11) {
  FUNC_3(&VAR_9->dev,
   "Failed to request SMBus region 0x%lx-0x%lx\n",
   VAR_13, VAR_13 + VAR_14);
  return VAR_11;
 }

 VAR_12->smba = FUNC_19(VAR_9, VAR_5, VAR_14);
 if (!VAR_12->smba) {
  FUNC_3(&VAR_9->dev, "Unable to ioremap SMBus BAR\n");
  VAR_11 = -VAR_0;
  goto fail;
 }

 if ((FUNC_15(VAR_9, FUNC_0(64)) != 0) ||
     (FUNC_14(VAR_9, FUNC_0(64)) != 0)) {
  if ((FUNC_15(VAR_9, FUNC_0(32)) != 0) ||
      (FUNC_14(VAR_9,
       FUNC_0(32)) != 0)) {
   FUNC_3(&VAR_9->dev, "pci_set_dma_mask fail %p\n",
    VAR_9);
   goto fail;
  }
 }

 VAR_11 = FUNC_7(VAR_12);
 if (VAR_11)
  goto fail;

 FUNC_8(VAR_12);

 VAR_11 = FUNC_9(VAR_12);
 if (VAR_11)
  goto fail;

 VAR_11 = FUNC_5(&VAR_12->adapter);
 if (VAR_11) {
  FUNC_3(&VAR_9->dev, "Failed to add SMBus iSMT adapter\n");
  VAR_11 = -VAR_0;
  goto fail;
 }
 return 0;

fail:
 FUNC_10(VAR_9, VAR_5);
 return VAR_11;
}
