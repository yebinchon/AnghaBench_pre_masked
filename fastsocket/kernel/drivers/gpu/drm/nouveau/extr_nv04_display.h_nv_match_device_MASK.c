
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_device {TYPE_1__* pdev; } ;
struct TYPE_2__ {unsigned int device; unsigned int subsystem_vendor; unsigned int subsystem_device; } ;



__attribute__((used)) static inline bool
FUNC_0(struct drm_device *VAR_0, unsigned VAR_1,
  unsigned VAR_2, unsigned VAR_3)
{
 return VAR_0->pdev->device == VAR_1 &&
  VAR_0->pdev->subsystem_vendor == VAR_2 &&
  VAR_0->pdev->subsystem_device == VAR_3;
}
