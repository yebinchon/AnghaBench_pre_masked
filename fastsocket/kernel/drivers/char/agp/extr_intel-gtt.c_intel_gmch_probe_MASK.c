
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct pci_dev {scalar_t__ device; int dev; } ;
struct agp_bridge_data {struct pci_dev* dev; TYPE_4__* dev_private_data; int * driver; } ;
struct TYPE_9__ {scalar_t__ gmch_chip_id; int * name; TYPE_1__* gtt_driver; } ;
struct TYPE_8__ {TYPE_2__* pcidev; TYPE_1__* driver; void* bridge_dev; int refcount; } ;
struct TYPE_7__ {int dev; } ;
struct TYPE_6__ {int dma_mask_size; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,char*,int *) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_4 () ;
 TYPE_5__* VAR_1 ;
 scalar_t__ FUNC_5 () ;
 TYPE_4__ VAR_2 ;
 void* FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_8 (TYPE_2__*,int ) ;

int FUNC_9(struct pci_dev *VAR_3, struct pci_dev *VAR_4,
       struct agp_bridge_data *VAR_5)
{
 int VAR_6, VAR_7;






 if (VAR_2.driver) {
  VAR_2.refcount++;
  return 1;
 }

 for (VAR_6 = 0; VAR_1[VAR_6].name != ((void*)0); VAR_6++) {
  if (VAR_4) {
   if (VAR_4->device ==
       VAR_1[VAR_6].gmch_chip_id) {
    VAR_2.pcidev = FUNC_6(VAR_4);
    VAR_2.driver =
     VAR_1[VAR_6].gtt_driver;

    break;
   }
  } else if (FUNC_3(VAR_1[VAR_6].gmch_chip_id)) {
   VAR_2.driver =
    VAR_1[VAR_6].gtt_driver;
   break;
  }
 }

 if (!VAR_2.driver)
  return 0;

 VAR_2.refcount++;

 if (VAR_5) {
  VAR_5->driver = &VAR_0;
  VAR_5->dev_private_data = &VAR_2;
  VAR_5->dev = VAR_3;
 }

 VAR_2.bridge_dev = FUNC_6(VAR_3);

 FUNC_2(&VAR_3->dev, "Intel %s Chipset\n", VAR_1[VAR_6].name);

 VAR_7 = VAR_2.driver->dma_mask_size;
 if (FUNC_8(VAR_2.pcidev, FUNC_0(VAR_7)))
  FUNC_1(&VAR_2.pcidev->dev,
   "set gfx device dma mask %d-bit failed!\n", VAR_7);
 else
  FUNC_7(VAR_2.pcidev,
         FUNC_0(VAR_7));

 if (FUNC_5() != 0) {
  FUNC_4();

  return 0;
 }

 return 1;
}
