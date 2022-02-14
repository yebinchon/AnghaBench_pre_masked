
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct qlcnic_adapter {int flags; int max_drv_tx_rings; int max_sds_rings; TYPE_1__* ahw; TYPE_2__* msix_entries; struct pci_dev* pdev; } ;
struct pci_dev {int dev; } ;
struct msix_entry {int dummy; } ;
struct TYPE_5__ {int entry; } ;
struct TYPE_4__ {int num_msix; scalar_t__ msix_supported; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,...) ;
 TYPE_2__* FUNC_2 (int,int,int ) ;
 int FUNC_3 (struct pci_dev*,TYPE_2__*,int) ;
 scalar_t__ FUNC_4 (struct qlcnic_adapter*) ;
 int FUNC_5 (int) ;

int FUNC_6(struct qlcnic_adapter *VAR_6, u32 VAR_7)
{
 struct pci_dev *VAR_8 = VAR_6->pdev;
 int VAR_9 = -1, VAR_10;
 int VAR_11, VAR_12;

 if (VAR_6->flags & VAR_4) {
  VAR_11 = 0;
  VAR_12 = 0;
 } else {
  VAR_11 = VAR_6->max_drv_tx_rings;
  VAR_12 = 1;
 }

 if (!VAR_6->msix_entries) {
  VAR_6->msix_entries = FUNC_2(VAR_7,
      sizeof(struct msix_entry),
      VAR_1);
  if (!VAR_6->msix_entries) {
   FUNC_0(&VAR_8->dev, "failed allocating msix_entries\n");
   return -VAR_0;
  }
 }

 VAR_6->max_sds_rings = 1;
 VAR_6->flags &= ~(VAR_3 | VAR_2);

 if (VAR_6->ahw->msix_supported) {
 enable_msix:
  for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++)
   VAR_6->msix_entries[VAR_10].entry = VAR_10;
  VAR_9 = FUNC_3(VAR_8, VAR_6->msix_entries, VAR_7);
  if (VAR_9 == 0) {
   VAR_6->flags |= VAR_2;
   if (FUNC_4(VAR_6)) {
    VAR_6->ahw->num_msix = VAR_7;

    VAR_6->max_sds_rings = VAR_7 -
        VAR_11 - 1;
   } else {
    VAR_6->max_sds_rings = VAR_7;
   }
   FUNC_1(&VAR_8->dev, "using msi-x interrupts\n");
   return VAR_9;
  } else if (VAR_9 > 0) {
   FUNC_1(&VAR_8->dev,
     "Unable to allocate %d MSI-X interrupt vectors\n",
     VAR_7);
   if (FUNC_4(VAR_6)) {
    if (VAR_9 < (VAR_5 - VAR_12))
     return VAR_9;
    VAR_9 -= (VAR_11 + 1);
    VAR_7 = FUNC_5(VAR_9);
    VAR_7 += (VAR_11 + 1);
   } else {
    VAR_7 = FUNC_5(VAR_9);
   }

   if (VAR_7) {
    FUNC_1(&VAR_8->dev,
      "Trying to allocate %d MSI-X interrupt vectors\n",
      VAR_7);
    goto enable_msix;
   }
  } else {
   FUNC_1(&VAR_8->dev,
     "Unable to allocate %d MSI-X interrupt vectors\n",
     VAR_7);
  }
 }

 return VAR_9;
}
