
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint16_t ;
struct pci_dev {int dummy; } ;
struct msi_msg {int address_lo; int address_hi; scalar_t__ data; } ;
struct TYPE_2__ {scalar_t__ pos; } ;
struct msi_desc {TYPE_1__ msi_attrib; } ;


 int VAR_0 ;
 int VAR_1 ;



 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct pci_dev*,scalar_t__,int*) ;
 int FUNC_2 (struct pci_dev*,scalar_t__,int) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int,struct msi_desc*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int,struct msi_msg*) ;

int FUNC_8(struct pci_dev *VAR_10, struct msi_desc *VAR_11)
{
 struct msi_msg VAR_12;
 uint16_t VAR_13;
 int VAR_14;
 int VAR_15;
 int VAR_16;
 int VAR_17;
 uint64_t VAR_18;






 FUNC_1(VAR_10, VAR_11->msi_attrib.pos + VAR_3,
        &VAR_13);







 VAR_14 = (VAR_13 & VAR_5) >> 4;
 if (VAR_14 == 0) {

  VAR_15 = (VAR_13 & VAR_4) >> 1;
 } else {





  VAR_15 = VAR_14;
 }





 if (VAR_15 > 5)
  VAR_15 = 0;

try_only_one:




 VAR_17 = 1 << VAR_15;


 VAR_18 = (1 << VAR_17) - 1;






 FUNC_5(&VAR_7);
 for (VAR_16 = 0; VAR_16 < 64; VAR_16 += VAR_17) {
  if ((VAR_6 & (VAR_18 << VAR_16)) == 0) {
   VAR_6 |= VAR_18 << VAR_16;
   VAR_8 |= (VAR_18 >> 1) << VAR_16;
   break;
  }
 }
 FUNC_6(&VAR_7);


 if (VAR_16 >= 64) {
  if (VAR_15) {
   FUNC_3("arch_setup_msi_irq: Unable to find %d free "
          "interrupts, trying just one",
          1 << VAR_15);
   VAR_15 = 0;
   goto try_only_one;
  } else
   FUNC_0("arch_setup_msi_irq: Unable to find a free MSI "
         "interrupt");
 }


 VAR_16 += VAR_2;

 switch (VAR_9) {
 case 128:

  VAR_12.address_lo =
   ((128ul << 20) + VAR_1) & 0xffffffff;
  VAR_12.address_hi = ((128ul << 20) + VAR_1) >> 32;
 case 130:

  VAR_12.address_lo = (0 + VAR_1) & 0xffffffff;
  VAR_12.address_hi = (0 + VAR_1) >> 32;
  break;
 case 129:


  VAR_12.address_lo = (0 + VAR_0) & 0xffffffff;
  VAR_12.address_hi = (0 + VAR_0) >> 32;
  break;
 default:
  FUNC_0("arch_setup_msi_irq: Invalid octeon_dma_bar_type\n");
 }
 VAR_12.data = VAR_16 - VAR_2;


 VAR_13 &= ~VAR_5;
 VAR_13 |= VAR_15 << 4;
 FUNC_2(VAR_10, VAR_11->msi_attrib.pos + VAR_3,
         VAR_13);

 FUNC_4(VAR_16, VAR_11);
 FUNC_7(VAR_16, &VAR_12);
 return 0;
}
