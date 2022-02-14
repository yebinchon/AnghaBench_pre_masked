
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_controller {int dummy; } ;
typedef scalar_t__ PCI_IO_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (struct pci_controller*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 () ;
 int FUNC_3 (scalar_t__,int) ;

__attribute__((used)) static int FUNC_4(struct pci_controller *VAR_10,
       PCI_IO_ADDR VAR_11)
{
 PCI_IO_ADDR VAR_12;
 PCI_IO_ADDR VAR_13;
 u32 VAR_14;

 FUNC_2();
 VAR_13 = FUNC_0(VAR_10);

 VAR_12 = VAR_13 + VAR_2;
 VAR_14 = FUNC_1(VAR_12);

 if (VAR_14 & (VAR_3 << 16)) {
  FUNC_3(VAR_12,
    (VAR_14 & 0xffff) | (VAR_3 << 16));


  VAR_12 = VAR_13 + VAR_5;
  FUNC_3(VAR_12, VAR_4);

  VAR_12 = VAR_13 + VAR_6;
  VAR_14 = FUNC_1(VAR_12) & 0xffff;
  VAR_14 |= VAR_7;
  FUNC_3(VAR_12, VAR_14);

  VAR_12 = VAR_13 + VAR_8;
  FUNC_3(VAR_12, VAR_9);
  return VAR_0;
 }

 return VAR_1;
}
