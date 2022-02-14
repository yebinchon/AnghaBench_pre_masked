
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct drm_device {scalar_t__ switch_power_state; int dev_private; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct drm_device*) ;
 int FUNC_2 (struct pci_dev*) ;
 struct drm_device* FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*,int ) ;
 struct pci_dev* FUNC_5 (struct device*) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_3)
{
 struct pci_dev *VAR_4 = FUNC_5(VAR_3);
 struct drm_device *VAR_5 = FUNC_3(VAR_4);
 int VAR_6;

 if (!VAR_5 || !VAR_5->dev_private) {
  FUNC_0(VAR_3, "DRM not initialized, aborting suspend.\n");
  return -VAR_1;
 }

 if (VAR_5->switch_power_state == VAR_0)
  return 0;

 VAR_6 = FUNC_1(VAR_5);
 if (VAR_6)
  return VAR_6;

 FUNC_2(VAR_4);
 FUNC_4(VAR_4, VAR_2);

 return 0;
}
