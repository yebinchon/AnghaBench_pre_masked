
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct drm_device {scalar_t__ open_count; int count_lock; } ;


 struct drm_device* FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static bool FUNC_3(struct pci_dev *VAR_0)
{
 struct drm_device *VAR_1 = FUNC_0(VAR_0);
 bool VAR_2;

 FUNC_1(&VAR_1->count_lock);
 VAR_2 = (VAR_1->open_count == 0);
 FUNC_2(&VAR_1->count_lock);
 return VAR_2;
}
