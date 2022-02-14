
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct drm_device {int dev_private; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct drm_device*) ;
 struct drm_device* FUNC_2 (struct pci_dev*) ;
 struct pci_dev* FUNC_3 (struct device*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_1)
{
 struct pci_dev *VAR_2 = FUNC_3(VAR_1);
 struct drm_device *VAR_3 = FUNC_2(VAR_2);

 if (!VAR_3 || !VAR_3->dev_private) {
  FUNC_0(VAR_1, "DRM not initialized, aborting suspend.\n");
  return -VAR_0;
 }

 return FUNC_1(VAR_3);
}
