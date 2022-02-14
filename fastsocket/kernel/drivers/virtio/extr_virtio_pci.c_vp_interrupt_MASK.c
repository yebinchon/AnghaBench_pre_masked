
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct virtio_pci_device {scalar_t__ ioaddr; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,void*) ;
 int FUNC_2 (int,void*) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_3, void *VAR_4)
{
 struct virtio_pci_device *VAR_5 = VAR_4;
 u8 VAR_6;



 VAR_6 = FUNC_0(VAR_5->ioaddr + VAR_1);


 if (!VAR_6)
  return VAR_0;


 if (VAR_6 & VAR_2)
  FUNC_1(VAR_3, VAR_4);

 return FUNC_2(VAR_3, VAR_4);
}
