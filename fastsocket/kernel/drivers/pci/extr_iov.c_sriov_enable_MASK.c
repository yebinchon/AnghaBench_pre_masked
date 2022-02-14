
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct resource {scalar_t__ parent; } ;
struct pci_sriov {int nr_virtfn; int total; int cap; int nres; int offset; int stride; scalar_t__ link; int ctrl; int initial; scalar_t__ pos; } ;
struct TYPE_4__ {int kobj; } ;
struct pci_dev {scalar_t__ devfn; TYPE_2__ dev; int is_physfn; TYPE_1__* bus; struct resource* resource; struct pci_sriov* sriov; } ;
struct TYPE_3__ {scalar_t__ subordinate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_0 (TYPE_2__*,char*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*) ;
 struct pci_dev* FUNC_6 (TYPE_1__*,scalar_t__) ;
 int FUNC_7 (struct pci_dev*,scalar_t__,int*) ;
 int FUNC_8 (struct pci_dev*,scalar_t__,int) ;
 int FUNC_9 (struct pci_dev*,int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int *,int *,char*) ;
 int FUNC_12 (int *,char*) ;
 int FUNC_13 (struct pci_dev*,int,int ) ;
 scalar_t__ FUNC_14 (struct pci_dev*,int) ;
 int FUNC_15 (struct pci_dev*,int,int ) ;

__attribute__((used)) static int FUNC_16(struct pci_dev *VAR_15, int VAR_16)
{
 int VAR_17;
 int VAR_18, VAR_19;
 int VAR_20;
 u16 VAR_21, VAR_22, VAR_23;
 struct resource *VAR_24;
 struct pci_dev *VAR_25;
 struct pci_sriov *VAR_26 = VAR_15->sriov;

 if (!VAR_16)
  return 0;

 if (VAR_26->nr_virtfn)
  return -VAR_0;

 FUNC_7(VAR_15, VAR_26->pos + VAR_10, &VAR_23);
 if (VAR_23 > VAR_26->total ||
     (!(VAR_26->cap & VAR_6) && (VAR_23 != VAR_26->total)))
  return -VAR_1;

 if (VAR_16 < 0 || VAR_16 > VAR_26->total ||
     (!(VAR_26->cap & VAR_6) && (VAR_16 > VAR_23)))
  return -VAR_0;

 FUNC_8(VAR_15, VAR_26->pos + VAR_12, VAR_16);
 FUNC_7(VAR_15, VAR_26->pos + VAR_13, &VAR_21);
 FUNC_7(VAR_15, VAR_26->pos + VAR_14, &VAR_22);
 if (!VAR_21 || (VAR_16 > 1 && !VAR_22))
  return -VAR_1;

 VAR_20 = 0;
 for (VAR_18 = 0; VAR_18 < VAR_11; VAR_18++) {
  VAR_24 = VAR_15->resource + VAR_5 + VAR_18;
  if (VAR_24->parent)
   VAR_20++;
 }
 if (VAR_20 != VAR_26->nres) {
  FUNC_0(&VAR_15->dev, "not enough MMIO resources for SR-IOV\n");
  return -VAR_3;
 }

 VAR_26->offset = VAR_21;
 VAR_26->stride = VAR_22;

 if (FUNC_14(VAR_15, VAR_16 - 1) > VAR_15->bus->subordinate) {
  FUNC_0(&VAR_15->dev, "SR-IOV: bus number out of range\n");
  return -VAR_3;
 }

 if (VAR_26->link != VAR_15->devfn) {
  VAR_25 = FUNC_6(VAR_15->bus, VAR_26->link);
  if (!VAR_25)
   return -VAR_2;

  FUNC_5(VAR_25);

  if (!VAR_25->is_physfn)
   return -VAR_2;

  VAR_17 = FUNC_11(&VAR_15->dev.kobj,
     &VAR_25->dev.kobj, "dep_link");
  if (VAR_17)
   return VAR_17;
 }

 VAR_26->ctrl |= VAR_9 | VAR_8;
 FUNC_3(VAR_15);
 FUNC_8(VAR_15, VAR_26->pos + VAR_7, VAR_26->ctrl);
 FUNC_2(100);
 FUNC_4(VAR_15);

 VAR_26->initial = VAR_23;
 if (VAR_16 < VAR_23)
  VAR_23 = VAR_16;

 for (VAR_18 = 0; VAR_18 < VAR_23; VAR_18++) {
  VAR_17 = FUNC_13(VAR_15, VAR_18, 0);
  if (VAR_17)
   goto failed;
 }

 if (VAR_26->cap & VAR_6) {
  VAR_17 = FUNC_9(VAR_15, VAR_16);
  if (VAR_17)
   goto failed;
 }

 FUNC_1(&VAR_15->dev.kobj, VAR_4);
 VAR_26->nr_virtfn = VAR_16;

 return 0;

failed:
 for (VAR_19 = 0; VAR_19 < VAR_18; VAR_19++)
  FUNC_15(VAR_15, VAR_19, 0);

 VAR_26->ctrl &= ~(VAR_9 | VAR_8);
 FUNC_3(VAR_15);
 FUNC_8(VAR_15, VAR_26->pos + VAR_7, VAR_26->ctrl);
 FUNC_10(1);
 FUNC_4(VAR_15);

 if (VAR_26->link != VAR_15->devfn)
  FUNC_12(&VAR_15->dev.kobj, "dep_link");

 return VAR_17;
}
