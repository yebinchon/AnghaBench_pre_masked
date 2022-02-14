
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct virtqueue {struct virtio_pci_vq_info* priv; } ;
struct virtio_pci_vq_info {unsigned int queue_index; int * queue; int node; struct virtqueue* vq; scalar_t__ num; scalar_t__ msix_vector; } ;
struct virtio_pci_device {scalar_t__ ioaddr; int lock; int virtqueues; } ;
struct virtio_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct virtqueue* FUNC_0 (int) ;
 int VAR_3 ;
 unsigned long FUNC_1 (int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int * FUNC_2 (unsigned long,int) ;
 int FUNC_3 (int *,unsigned long) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__,scalar_t__) ;
 int FUNC_7 (int,scalar_t__) ;
 int FUNC_8 (struct virtio_pci_vq_info*) ;
 struct virtio_pci_vq_info* FUNC_9 (int,int) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int *,unsigned long) ;
 struct virtio_pci_device* FUNC_13 (struct virtio_device*) ;
 int FUNC_14 (int *) ;
 int VAR_12 ;
 int FUNC_15 (struct virtqueue*) ;
 struct virtqueue* FUNC_16 (scalar_t__,int ,struct virtio_device*,int *,int ,void (*) (struct virtqueue*),char const*) ;
 int FUNC_17 (scalar_t__,int ) ;

__attribute__((used)) static struct virtqueue *FUNC_18(struct virtio_device *VAR_13, unsigned VAR_14,
      void (*VAR_15)(struct virtqueue *VAR_16),
      const char *VAR_17,
      u16 VAR_18)
{
 struct virtio_pci_device *VAR_19 = FUNC_13(VAR_13);
 struct virtio_pci_vq_info *VAR_20;
 struct virtqueue *VAR_21;
 unsigned long VAR_22, VAR_23;
 u16 VAR_24;
 int VAR_25;


 FUNC_6(VAR_14, VAR_19->ioaddr + VAR_9);


 VAR_24 = FUNC_4(VAR_19->ioaddr + VAR_7);
 if (!VAR_24 || FUNC_5(VAR_19->ioaddr + VAR_8))
  return FUNC_0(-VAR_1);



 VAR_20 = FUNC_9(sizeof(struct virtio_pci_vq_info), VAR_3);
 if (!VAR_20)
  return FUNC_0(-VAR_2);

 VAR_20->queue_index = VAR_14;
 VAR_20->num = VAR_24;
 VAR_20->msix_vector = VAR_18;

 VAR_23 = FUNC_1(FUNC_17(VAR_24, VAR_10));
 VAR_20->queue = FUNC_2(VAR_23, VAR_3|VAR_11);
 if (VAR_20->queue == ((void*)0)) {
  VAR_25 = -VAR_2;
  goto out_info;
 }


 FUNC_7(FUNC_14(VAR_20->queue) >> VAR_6,
    VAR_19->ioaddr + VAR_8);


 VAR_21 = FUNC_16(VAR_20->num, VAR_10,
     VAR_13, VAR_20->queue, VAR_12, VAR_15, VAR_17);
 if (!VAR_21) {
  VAR_25 = -VAR_2;
  goto out_activate_queue;
 }

 VAR_21->priv = VAR_20;
 VAR_20->vq = VAR_21;

 if (VAR_18 != VAR_4) {
  FUNC_6(VAR_18, VAR_19->ioaddr + VAR_5);
  VAR_18 = FUNC_4(VAR_19->ioaddr + VAR_5);
  if (VAR_18 == VAR_4) {
   VAR_25 = -VAR_0;
   goto out_assign;
  }
 }

 FUNC_11(&VAR_19->lock, VAR_22);
 FUNC_10(&VAR_20->node, &VAR_19->virtqueues);
 FUNC_12(&VAR_19->lock, VAR_22);

 return VAR_21;

out_assign:
 FUNC_15(VAR_21);
out_activate_queue:
 FUNC_7(0, VAR_19->ioaddr + VAR_8);
 FUNC_3(VAR_20->queue, VAR_23);
out_info:
 FUNC_8(VAR_20);
 return FUNC_0(VAR_25);
}
