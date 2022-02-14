
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtio_pci_device {scalar_t__ ioaddr; } ;
struct virtio_device {int * features; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ,scalar_t__) ;
 struct virtio_pci_device* FUNC_3 (struct virtio_device*) ;
 int FUNC_4 (struct virtio_device*) ;

__attribute__((used)) static void FUNC_5(struct virtio_device *VAR_1)
{
 struct virtio_pci_device *VAR_2 = FUNC_3(VAR_1);


 FUNC_4(VAR_1);


 FUNC_1(FUNC_0(VAR_1->features) != 1);
 FUNC_2(VAR_1->features[0], VAR_2->ioaddr+VAR_0);
}
