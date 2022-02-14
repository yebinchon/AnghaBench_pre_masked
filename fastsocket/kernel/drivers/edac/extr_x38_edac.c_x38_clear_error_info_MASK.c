
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct mem_ctl_info {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pci_dev*,int ,int ,int ) ;
 struct pci_dev* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct mem_ctl_info *VAR_2)
{
 struct pci_dev *VAR_3;

 VAR_3 = FUNC_1(VAR_2->dev);





 FUNC_0(VAR_3, VAR_0, VAR_1,
    VAR_1);
}
