
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct pci_dev*) ;
 int VAR_2 ;
 int FUNC_1 (struct pci_dev*,int ) ;
 int FUNC_2 (struct pci_dev*,int) ;

__attribute__((used)) static int FUNC_3(struct pci_dev *VAR_3, int VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_1(VAR_3, VAR_1);
 if (VAR_5 < 0 && VAR_5 != -VAR_0)
  return VAR_5;
 VAR_5 = FUNC_2(VAR_3, VAR_4);
 if (VAR_5 < 0)
  return VAR_5;
 FUNC_0(VAR_2, VAR_3);

 return 0;
}
