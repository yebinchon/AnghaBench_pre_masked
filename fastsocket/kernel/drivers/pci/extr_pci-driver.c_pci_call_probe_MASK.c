
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_driver {int dummy; } ;
struct pci_device_id {int dummy; } ;
struct pci_dev {int dev; } ;
struct drv_dev_and_id {struct pci_device_id const* member_2; struct pci_dev* member_1; struct pci_driver* member_0; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (struct drv_dev_and_id*) ;
 int VAR_1 ;
 int FUNC_5 () ;
 int FUNC_6 (int,int (*) (struct drv_dev_and_id*),struct drv_dev_and_id*) ;

__attribute__((used)) static int FUNC_7(struct pci_driver *VAR_2, struct pci_dev *VAR_3,
     const struct pci_device_id *VAR_4)
{
 int VAR_5, VAR_6;
 struct drv_dev_and_id VAR_7 = { VAR_2, VAR_3, VAR_4 };





 VAR_6 = FUNC_2(&VAR_3->dev);
 if (VAR_6 >= 0) {
  int VAR_8;

  FUNC_3();
  VAR_8 = FUNC_0(FUNC_1(VAR_6), VAR_0);
  if (VAR_8 < VAR_1)
   VAR_5 = FUNC_6(VAR_8, FUNC_4, &VAR_7);
  else
   VAR_5 = FUNC_4(&VAR_7);
  FUNC_5();
 } else
  VAR_5 = FUNC_4(&VAR_7);
 return VAR_5;
}
