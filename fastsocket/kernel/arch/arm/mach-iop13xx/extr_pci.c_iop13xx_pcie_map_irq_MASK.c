
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;

__attribute__((used)) static int
FUNC_1(struct pci_dev *VAR_4, u8 VAR_5, u8 VAR_6)
{
 FUNC_0(VAR_5 != 0);

 switch (VAR_6) {
 case 1: return VAR_0;
 case 2: return VAR_1;
 case 3: return VAR_2;
 case 4: return VAR_3;
 default: return -1;
 }
}
