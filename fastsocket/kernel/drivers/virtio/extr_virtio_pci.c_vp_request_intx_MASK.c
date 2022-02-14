
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct virtio_pci_device {int intx_enabled; TYPE_1__* pci_dev; } ;
struct virtio_device {int dev; } ;
struct TYPE_2__ {int irq; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int ,int ,struct virtio_pci_device*) ;
 struct virtio_pci_device* FUNC_2 (struct virtio_device*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(struct virtio_device *VAR_2)
{
 int VAR_3;
 struct virtio_pci_device *VAR_4 = FUNC_2(VAR_2);

 VAR_3 = FUNC_1(VAR_4->pci_dev->irq, VAR_1,
     VAR_0, FUNC_0(&VAR_2->dev), VAR_4);
 if (!VAR_3)
  VAR_4->intx_enabled = 1;
 return VAR_3;
}
