
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ ushort ;
typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_5__ {scalar_t__ bdeSize; scalar_t__ bdeFlags; } ;
struct TYPE_6__ {void* w; TYPE_2__ f; } ;
struct ulp_bde64 {TYPE_3__ tus; void* addrHigh; void* addrLow; } ;
struct pci_dev {int dev; } ;
struct lpfc_hba {struct pci_dev* pcidev; } ;
struct TYPE_4__ {int phys; scalar_t__ virt; int list; } ;
struct lpfc_dmabufext {int size; int flag; TYPE_1__ dma; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct lpfc_hba*,struct lpfc_dmabufext*) ;
 scalar_t__ FUNC_2 (int *,int,int *,int ) ;
 struct lpfc_dmabufext* FUNC_3 (int,int ) ;
 void* FUNC_4 (void*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int ,int) ;
 int FUNC_7 (struct pci_dev*,int ,int ,int ) ;
 void* FUNC_8 (int ) ;
 void* FUNC_9 (int ) ;

__attribute__((used)) static struct lpfc_dmabufext *
FUNC_10(struct lpfc_hba *VAR_5,
     struct ulp_bde64 *VAR_6, uint32_t VAR_7,
     int VAR_8)
{
 struct lpfc_dmabufext *VAR_9 = ((void*)0);
 struct lpfc_dmabufext *VAR_10;
 int VAR_11, VAR_12 = 0, VAR_13 = 0;
 struct pci_dev *VAR_14;

 VAR_14 = VAR_5->pcidev;

 while (VAR_7) {

  if (VAR_7 > VAR_1)
   VAR_11 = VAR_1;
  else
   VAR_11 = VAR_7;


  VAR_10 = FUNC_3(sizeof(struct lpfc_dmabufext), VAR_2);
  if (!VAR_10)
   goto out;

  FUNC_0(&VAR_10->dma.list);


  if (VAR_9)
   FUNC_5(&VAR_10->dma.list, &VAR_9->dma.list);
  else
   VAR_9 = VAR_10;


  VAR_10->dma.virt = FUNC_2(&VAR_14->dev,
         VAR_11,
         &(VAR_10->dma.phys),
         VAR_2);

  if (!VAR_10->dma.virt)
   goto out;

  VAR_10->size = VAR_11;

  if (VAR_8) {
   VAR_6->tus.f.bdeFlags = 0;
   FUNC_7(VAR_5->pcidev,
    VAR_10->dma.phys, VAR_3, VAR_4);

  } else {
   FUNC_6((uint8_t *)VAR_10->dma.virt, 0, VAR_11);
   VAR_6->tus.f.bdeFlags = VAR_0;
  }


  VAR_6->addrLow = FUNC_4(FUNC_9(VAR_10->dma.phys));
  VAR_6->addrHigh = FUNC_4(FUNC_8(VAR_10->dma.phys));
  VAR_6->tus.f.bdeSize = (ushort) VAR_11;
  VAR_6->tus.w = FUNC_4(VAR_6->tus.w);
  VAR_6++;

  VAR_13++;
  VAR_12 += VAR_11;
  VAR_7 -= VAR_11;
 }

 VAR_9->flag = VAR_13;
 return VAR_9;
out:
 FUNC_1(VAR_5, VAR_9);
 return ((void*)0);
}
