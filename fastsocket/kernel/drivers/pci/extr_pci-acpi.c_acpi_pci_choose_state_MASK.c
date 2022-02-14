
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
typedef int pci_power_t ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int *) ;

__attribute__((used)) static pci_power_t FUNC_1(struct pci_dev *VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_0(&VAR_5->dev, ((void*)0));
 if (VAR_6 < 0)
  return VAR_4;

 switch (VAR_6) {
 case 131:
  return VAR_0;
 case 130:
  return VAR_1;
 case 129:
  return VAR_2;
 case 128:
  return VAR_3;
 }
 return VAR_4;
}
