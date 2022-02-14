
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbridge_pvt {struct pci_dev** pci_tad; struct pci_dev* pci_ta; struct pci_dev* pci_ras; struct pci_dev* pci_ha0; struct pci_dev* pci_sad1; struct pci_dev* pci_sad0; struct pci_dev* pci_ddrio; struct pci_dev* pci_br; } ;
struct sbridge_dev {int n_devs; int bus; struct pci_dev** pdev; } ;
struct pci_dev {int devfn; } ;
struct mem_ctl_info {struct sbridge_pvt* pvt_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,int,int,struct pci_dev*) ;
 int FUNC_3 (int ,char*,...) ;

__attribute__((used)) static int FUNC_4(struct mem_ctl_info *VAR_4,
    struct sbridge_dev *VAR_5)
{
 struct sbridge_pvt *VAR_6 = VAR_4->pvt_info;
 struct pci_dev *VAR_7;
 int VAR_8, VAR_9, VAR_10;

 for (VAR_8 = 0; VAR_8 < VAR_5->n_devs; VAR_8++) {
  VAR_7 = VAR_5->pdev[VAR_8];
  if (!VAR_7)
   continue;
  VAR_10 = FUNC_1(VAR_7->devfn);
  VAR_9 = FUNC_0(VAR_7->devfn);
  switch (VAR_10) {
  case 12:
   switch (VAR_9) {
   case 6:
    VAR_6->pci_sad0 = VAR_7;
    break;
   case 7:
    VAR_6->pci_sad1 = VAR_7;
    break;
   default:
    goto error;
   }
   break;
  case 13:
   switch (VAR_9) {
   case 6:
    VAR_6->pci_br = VAR_7;
    break;
   default:
    goto error;
   }
   break;
  case 14:
   switch (VAR_9) {
   case 0:
    VAR_6->pci_ha0 = VAR_7;
    break;
   default:
    goto error;
   }
   break;
  case 15:
   switch (VAR_9) {
   case 0:
    VAR_6->pci_ta = VAR_7;
    break;
   case 1:
    VAR_6->pci_ras = VAR_7;
    break;
   case 2:
   case 3:
   case 4:
   case 5:
    VAR_6->pci_tad[VAR_9 - 2] = VAR_7;
    break;
   default:
    goto error;
   }
   break;
  case 17:
   switch (VAR_9) {
   case 0:
    VAR_6->pci_ddrio = VAR_7;
    break;
   default:
    goto error;
   }
   break;
  default:
   goto error;
  }

  FUNC_2("Associated PCI %02x.%02d.%d with dev = %p\n",
   VAR_5->bus,
   FUNC_1(VAR_7->devfn), FUNC_0(VAR_7->devfn),
   VAR_7);
 }


 if (!VAR_6->pci_sad0 || !VAR_6->pci_sad1 || !VAR_6->pci_ha0 ||
     !VAR_6-> pci_tad || !VAR_6->pci_ras || !VAR_6->pci_ta)
  goto enodev;

 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
  if (!VAR_6->pci_tad[VAR_8])
   goto enodev;
 }
 return 0;

enodev:
 FUNC_3(VAR_2, "Some needed devices are missing\n");
 return -VAR_1;

error:
 FUNC_3(VAR_2, "Device %d, function %d "
        "is out of the expected range\n",
        VAR_10, VAR_9);
 return -VAR_0;
}
