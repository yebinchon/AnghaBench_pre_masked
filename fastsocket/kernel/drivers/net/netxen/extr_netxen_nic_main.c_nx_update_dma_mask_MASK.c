
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_4__ {int coherent_dma_mask; } ;
struct pci_dev {TYPE_2__ dev; int dma_mask; } ;
struct TYPE_3__ {scalar_t__ revision_id; } ;
struct netxen_adapter {TYPE_1__ ahw; struct pci_dev* pdev; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct netxen_adapter*,int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (TYPE_2__*,char*,int) ;
 int FUNC_4 (struct pci_dev*,int ) ;
 int FUNC_5 (struct pci_dev*,int ) ;

__attribute__((used)) static int
FUNC_6(struct netxen_adapter *VAR_2)
{
 int VAR_3, VAR_4, VAR_5;
 uint64_t VAR_6, VAR_7, VAR_8;
 struct pci_dev *VAR_9 = VAR_2->pdev;

 VAR_3 = 0;

 VAR_4 = FUNC_1(VAR_2, VAR_0);
 if (VAR_4 > 32)
  return 0;

 if (FUNC_2(VAR_2->ahw.revision_id) && (VAR_4 > 9))
  VAR_3 = 1;
 else if ((VAR_2->ahw.revision_id == VAR_1) && (VAR_4 <= 4))
  VAR_3 = 1;

 if (VAR_3) {
  VAR_7 = VAR_9->dma_mask;
  VAR_8 = VAR_9->dev.coherent_dma_mask;

  VAR_6 = FUNC_0(32+VAR_4);

  VAR_5 = FUNC_5(VAR_9, VAR_6);
  if (VAR_5)
   goto err_out;

  if (FUNC_2(VAR_2->ahw.revision_id)) {

   VAR_5 = FUNC_4(VAR_9, VAR_6);
   if (VAR_5)
    goto err_out;
  }
  FUNC_3(&VAR_9->dev, "using %d-bit dma mask\n", 32+VAR_4);
 }

 return 0;

err_out:
 FUNC_5(VAR_9, VAR_7);
 FUNC_4(VAR_9, VAR_8);
 return VAR_5;
}
