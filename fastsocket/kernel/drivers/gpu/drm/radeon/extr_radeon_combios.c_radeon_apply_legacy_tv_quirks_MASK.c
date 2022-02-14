
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_device {TYPE_1__* pdev; } ;
struct TYPE_2__ {int device; int subsystem_vendor; int subsystem_device; } ;



__attribute__((used)) static bool FUNC_0(struct drm_device *VAR_0)
{

 if (VAR_0->pdev->device == 0x5975 &&
     VAR_0->pdev->subsystem_vendor == 0x1025 &&
     VAR_0->pdev->subsystem_device == 0x009f)
  return 0;


 if (VAR_0->pdev->device == 0x5974 &&
     VAR_0->pdev->subsystem_vendor == 0x103c &&
     VAR_0->pdev->subsystem_device == 0x280a)
  return 0;


 if (VAR_0->pdev->device == 0x5955 &&
     VAR_0->pdev->subsystem_vendor == 0x1462 &&
     VAR_0->pdev->subsystem_device == 0x0131)
  return 0;

 return 1;
}
