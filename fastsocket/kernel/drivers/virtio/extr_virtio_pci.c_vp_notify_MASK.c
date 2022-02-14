
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtqueue {struct virtio_pci_vq_info* priv; int vdev; } ;
struct virtio_pci_vq_info {int queue_index; } ;
struct virtio_pci_device {scalar_t__ ioaddr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,scalar_t__) ;
 struct virtio_pci_device* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct virtqueue *VAR_1)
{
 struct virtio_pci_device *VAR_2 = FUNC_1(VAR_1->vdev);
 struct virtio_pci_vq_info *VAR_3 = VAR_1->priv;



 FUNC_0(VAR_3->queue_index, VAR_2->ioaddr + VAR_0);
}
