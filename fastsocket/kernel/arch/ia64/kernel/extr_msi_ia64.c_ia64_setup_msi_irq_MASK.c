
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct msi_msg {int address_lo; int data; scalar_t__ address_hi; } ;
struct msi_desc {int dummy; } ;
typedef int cpumask_t ;


 int FUNC_0 (unsigned long) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int VAR_6 ;
 unsigned long FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int,int *,int ) ;
 int FUNC_9 (int,struct msi_desc*) ;
 int FUNC_10 (int,struct msi_msg*) ;

int FUNC_11(struct pci_dev *VAR_9, struct msi_desc *VAR_10)
{
 struct msi_msg VAR_11;
 unsigned long VAR_12;
 int VAR_13, VAR_14;
 cpumask_t VAR_15;

 VAR_13 = FUNC_4();
 if (VAR_13 < 0)
  return VAR_13;

 FUNC_9(VAR_13, VAR_10);
 FUNC_3(VAR_15, FUNC_6(VAR_13), VAR_6);
 VAR_12 = FUNC_2(FUNC_5(VAR_15));
 VAR_14 = FUNC_7(VAR_13);

 VAR_11.address_hi = 0;
 VAR_11.address_lo =
  VAR_1 |
  VAR_0 |
  VAR_2 |
  FUNC_0(VAR_12);

 VAR_11.data =
  VAR_5 |
  VAR_4 |
  VAR_3 |
  FUNC_1(VAR_14);

 FUNC_10(VAR_13, &VAR_11);
 FUNC_8(VAR_13, &VAR_8, VAR_7);

 return 0;
}
