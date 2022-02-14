
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct resource {scalar_t__ start; scalar_t__ end; int flags; int name; int parent; } ;
struct pci_sriov {TYPE_3__* dev; int total; scalar_t__ pos; } ;
struct TYPE_4__ {int kobj; int parent; } ;
struct pci_dev {int is_virtfn; int bus; TYPE_1__ dev; int physfn; struct resource* resource; int device; int vendor; int devfn; struct pci_sriov* sriov; } ;
struct TYPE_6__ {TYPE_2__* sriov; } ;
struct TYPE_5__ {int lock; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct pci_dev*) ;
 struct pci_dev* FUNC_2 () ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct pci_dev*) ;
 int FUNC_9 (struct pci_dev*) ;
 int FUNC_10 (struct pci_dev*) ;
 int FUNC_11 (struct pci_dev*,int ) ;
 int FUNC_12 (struct pci_dev*) ;
 int FUNC_13 (struct pci_dev*,scalar_t__,int *) ;
 int FUNC_14 (struct pci_dev*) ;
 int FUNC_15 (struct pci_dev*) ;
 int FUNC_16 (struct resource*,struct resource*) ;
 int FUNC_17 (struct resource*) ;
 int FUNC_18 (char*,char*,int) ;
 int FUNC_19 (int *,int *,char*) ;
 int FUNC_20 (int *,char*) ;
 int FUNC_21 (int ,int ) ;
 int FUNC_22 (struct pci_dev*,int) ;
 int FUNC_23 (struct pci_dev*,int) ;
 int FUNC_24 (int ,int ) ;

__attribute__((used)) static int FUNC_25(struct pci_dev *VAR_6, int VAR_7, int VAR_8)
{
 int VAR_9;
 int VAR_10;
 u64 VAR_11;
 char VAR_12[VAR_5];
 struct pci_dev *VAR_13;
 struct resource *VAR_14;
 struct pci_sriov *VAR_15 = VAR_6->sriov;

 VAR_13 = FUNC_2();
 if (!VAR_13)
  return -VAR_0;

 FUNC_6(&VAR_15->dev->sriov->lock);
 VAR_13->bus = FUNC_21(VAR_6->bus, FUNC_22(VAR_6, VAR_7));
 if (!VAR_13->bus) {
  FUNC_4(VAR_13);
  FUNC_7(&VAR_15->dev->sriov->lock);
  return -VAR_0;
 }
 VAR_13->devfn = FUNC_23(VAR_6, VAR_7);
 VAR_13->vendor = VAR_6->vendor;
 FUNC_13(VAR_6, VAR_15->pos + VAR_4, &VAR_13->device);
 FUNC_15(VAR_13);
 VAR_13->dev.parent = VAR_6->dev.parent;

 for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++) {
  VAR_14 = VAR_6->resource + VAR_2 + VAR_9;
  if (!VAR_14->parent)
   continue;
  VAR_13->resource[VAR_9].name = FUNC_12(VAR_13);
  VAR_13->resource[VAR_9].flags = VAR_14->flags;
  VAR_11 = FUNC_17(VAR_14);
  FUNC_3(VAR_11, VAR_15->total);
  VAR_13->resource[VAR_9].start = VAR_14->start + VAR_11 * VAR_7;
  VAR_13->resource[VAR_9].end = VAR_13->resource[VAR_9].start + VAR_11 - 1;
  VAR_10 = FUNC_16(VAR_14, &VAR_13->resource[VAR_9]);
  FUNC_0(VAR_10);
 }

 if (VAR_8)
  FUNC_1(VAR_13);

 FUNC_11(VAR_13, VAR_13->bus);
 FUNC_7(&VAR_15->dev->sriov->lock);

 VAR_13->physfn = FUNC_9(VAR_6);
 VAR_13->is_virtfn = 1;

 VAR_10 = FUNC_8(VAR_13);
 if (VAR_10)
  goto failed1;
 FUNC_18(VAR_12, "virtfn%u", VAR_7);
 VAR_10 = FUNC_19(&VAR_6->dev.kobj, &VAR_13->dev.kobj, VAR_12);
 if (VAR_10)
  goto failed1;
 VAR_10 = FUNC_19(&VAR_13->dev.kobj, &VAR_6->dev.kobj, "physfn");
 if (VAR_10)
  goto failed2;

 FUNC_5(&VAR_13->dev.kobj, VAR_1);

 return 0;

failed2:
 FUNC_20(&VAR_6->dev.kobj, VAR_12);
failed1:
 FUNC_10(VAR_6);
 FUNC_6(&VAR_15->dev->sriov->lock);
 FUNC_14(VAR_13);
 FUNC_24(VAR_6->bus, FUNC_22(VAR_6, VAR_7));
 FUNC_7(&VAR_15->dev->sriov->lock);

 return VAR_10;
}
