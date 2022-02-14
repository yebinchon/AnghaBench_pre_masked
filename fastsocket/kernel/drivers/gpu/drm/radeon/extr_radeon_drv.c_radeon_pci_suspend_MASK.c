
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct drm_device {int dummy; } ;
typedef int pm_message_t ;


 struct drm_device* FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct drm_device*,int ) ;

__attribute__((used)) static int
FUNC_2(struct pci_dev *VAR_0, pm_message_t VAR_1)
{
 struct drm_device *VAR_2 = FUNC_0(VAR_0);
 return FUNC_1(VAR_2, VAR_1);
}
