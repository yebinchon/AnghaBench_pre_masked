
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pci_dev*,int ,scalar_t__*) ;

__attribute__((used)) static void FUNC_1(struct pci_dev *VAR_2,
     int *VAR_3,
     int *VAR_4)
{
 u8 VAR_5;




 FUNC_0(VAR_2, VAR_1, &VAR_5);
 *VAR_3 = (int)VAR_5 *2;

 FUNC_0(VAR_2, VAR_0, &VAR_5);
 *VAR_4 = (int)VAR_5;
}
