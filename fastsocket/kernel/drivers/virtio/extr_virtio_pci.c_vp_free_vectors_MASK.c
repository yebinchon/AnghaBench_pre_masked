
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct virtio_pci_device {int msix_used_vectors; TYPE_2__* msix_entries; TYPE_2__* msix_names; scalar_t__ msix_vectors; scalar_t__ msix_enabled; TYPE_1__* pci_dev; scalar_t__ ioaddr; scalar_t__ intx_enabled; } ;
struct virtio_device {int dummy; } ;
struct TYPE_4__ {int vector; } ;
struct TYPE_3__ {int irq; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct virtio_pci_device*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_1__*) ;
 struct virtio_pci_device* FUNC_5 (struct virtio_device*) ;

__attribute__((used)) static void FUNC_6(struct virtio_device *VAR_2)
{
 struct virtio_pci_device *VAR_3 = FUNC_5(VAR_2);
 int VAR_4;

 if (VAR_3->intx_enabled) {
  FUNC_0(VAR_3->pci_dev->irq, VAR_3);
  VAR_3->intx_enabled = 0;
 }

 for (VAR_4 = 0; VAR_4 < VAR_3->msix_used_vectors; ++VAR_4)
  FUNC_0(VAR_3->msix_entries[VAR_4].vector, VAR_3);

 if (VAR_3->msix_enabled) {

  FUNC_2(VAR_1,
     VAR_3->ioaddr + VAR_0);

  FUNC_1(VAR_3->ioaddr + VAR_0);

  FUNC_4(VAR_3->pci_dev);
  VAR_3->msix_enabled = 0;
  VAR_3->msix_vectors = 0;
 }

 VAR_3->msix_used_vectors = 0;
 FUNC_3(VAR_3->msix_names);
 VAR_3->msix_names = ((void*)0);
 FUNC_3(VAR_3->msix_entries);
 VAR_3->msix_entries = ((void*)0);
}
