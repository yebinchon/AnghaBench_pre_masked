
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct drm_device {scalar_t__ switch_power_state; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drm_device*) ;
 int FUNC_1 (struct pci_dev*) ;
 struct drm_device* FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*,int ) ;
 struct pci_dev* FUNC_6 (struct device*) ;

int FUNC_7(struct device *VAR_2)
{
 struct pci_dev *VAR_3 = FUNC_6(VAR_2);
 struct drm_device *VAR_4 = FUNC_2(VAR_3);
 int VAR_5;

 if (VAR_4->switch_power_state == VAR_0)
  return 0;

 FUNC_5(VAR_3, VAR_1);
 FUNC_3(VAR_3);
 VAR_5 = FUNC_1(VAR_3);
 if (VAR_5)
  return VAR_5;
 FUNC_4(VAR_3);

 return FUNC_0(VAR_4);
}
