
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct nouveau_object {int dummy; } ;
struct TYPE_3__ {struct nouveau_object* device; } ;
struct TYPE_4__ {TYPE_1__ base; } ;
struct nouveau_drm {TYPE_2__ client; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (struct drm_device*) ;
 struct nouveau_drm* FUNC_1 (struct drm_device*) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,struct nouveau_object**) ;
 struct drm_device* FUNC_4 (struct pci_dev*) ;

__attribute__((used)) static void
FUNC_5(struct pci_dev *VAR_0)
{
 struct drm_device *VAR_1 = FUNC_4(VAR_0);
 struct nouveau_drm *VAR_2 = FUNC_1(VAR_1);
 struct nouveau_object *VAR_3;

 VAR_3 = VAR_2->client.base.device;
 FUNC_0(VAR_1);

 FUNC_3(((void*)0), &VAR_3);
 FUNC_2();
}
