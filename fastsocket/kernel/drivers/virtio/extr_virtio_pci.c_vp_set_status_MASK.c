
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct virtio_pci_device {scalar_t__ ioaddr; } ;
struct virtio_device {int dummy; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 struct virtio_pci_device* FUNC_2 (struct virtio_device*) ;

__attribute__((used)) static void FUNC_3(struct virtio_device *VAR_1, u8 VAR_2)
{
 struct virtio_pci_device *VAR_3 = FUNC_2(VAR_1);

 FUNC_0(VAR_2 == 0);
 FUNC_1(VAR_2, VAR_3->ioaddr + VAR_0);
}
