
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct msi_msg {int address_hi; int data; int address_lo; } ;
struct msi_desc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 int FUNC_1 () ;
 int VAR_3 ;
 int FUNC_2 (int,int *,int ) ;
 int FUNC_3 (int,struct msi_desc*) ;
 int FUNC_4 (int,struct msi_msg*) ;

int FUNC_5(struct pci_dev *VAR_4, struct msi_desc *VAR_5)
{
 int VAR_6, VAR_7 = FUNC_0();
 struct msi_msg VAR_8;

 if (VAR_7 < 0)
  return VAR_7;

 FUNC_3(VAR_7, VAR_5);

 VAR_8.address_hi = 0x0;
 VAR_8.address_lo = VAR_1;

 VAR_6 = FUNC_1();
 VAR_8.data = (VAR_6 << VAR_0) | (VAR_7 & 0x7f);

 FUNC_4(VAR_7, &VAR_8);
 FUNC_2(VAR_7, &VAR_3, VAR_2);

 return 0;
}
