
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtqueue {struct virtio_pci_vq_info* priv; int vdev; } ;
struct virtio_pci_vq_info {int queue; int num; int queue_index; int node; } ;
struct virtio_pci_device {scalar_t__ ioaddr; scalar_t__ msix_enabled; int lock; } ;


 unsigned long FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (struct virtio_pci_vq_info*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 struct virtio_pci_device* FUNC_9 (int ) ;
 int FUNC_10 (struct virtqueue*) ;
 int FUNC_11 (int ,int ) ;

__attribute__((used)) static void FUNC_12(struct virtqueue *VAR_6)
{
 struct virtio_pci_device *VAR_7 = FUNC_9(VAR_6->vdev);
 struct virtio_pci_vq_info *VAR_8 = VAR_6->priv;
 unsigned long VAR_9, VAR_10;

 FUNC_7(&VAR_7->lock, VAR_9);
 FUNC_6(&VAR_8->node);
 FUNC_8(&VAR_7->lock, VAR_9);

 FUNC_3(VAR_8->queue_index, VAR_7->ioaddr + VAR_4);

 if (VAR_7->msix_enabled) {
  FUNC_3(VAR_0,
     VAR_7->ioaddr + VAR_1);

  FUNC_2(VAR_7->ioaddr + VAR_2);
 }

 FUNC_10(VAR_6);


 FUNC_4(0, VAR_7->ioaddr + VAR_3);

 VAR_10 = FUNC_0(FUNC_11(VAR_8->num, VAR_5));
 FUNC_1(VAR_8->queue, VAR_10);
 FUNC_5(VAR_8);
}
