
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_2__ {scalar_t__ coherent_dma_mask; } ;
struct pci_dev {int class; scalar_t__ dma_mask; TYPE_1__ dev; int bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct pci_dev*) ;
 scalar_t__ FUNC_1 (struct pci_dev*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_2 (struct pci_dev*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int VAR_6 ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct pci_dev*) ;

__attribute__((used)) static int FUNC_7(struct pci_dev *VAR_7, int VAR_8)
{
 if (FUNC_2(VAR_7) &&
     (VAR_7->class >> 8) != VAR_4)
  return 0;

 if ((VAR_6 & VAR_1) && FUNC_0(VAR_7))
  return 1;

 if ((VAR_6 & VAR_2) && FUNC_1(VAR_7))
  return 1;

 if (!(VAR_6 & VAR_0))
  return 0;
 if (!FUNC_4(VAR_7)) {
  if (!FUNC_5(VAR_7->bus))
   return 0;
  if (VAR_7->class >> 8 == VAR_3)
   return 0;
 } else if (FUNC_6(VAR_7) == VAR_5)
  return 0;






 if (!VAR_8) {




  u64 VAR_9 = VAR_7->dma_mask;

  if (VAR_7->dev.coherent_dma_mask &&
      VAR_7->dev.coherent_dma_mask < VAR_9)
   VAR_9 = VAR_7->dev.coherent_dma_mask;

  return VAR_9 >= FUNC_3(&VAR_7->dev);
 }

 return 1;
}
