
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_device {TYPE_1__* pdev; } ;
struct TYPE_2__ {int revision; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct drm_device*) ;
 scalar_t__ FUNC_2 (struct drm_device*) ;

__attribute__((used)) static bool
FUNC_3(struct drm_device *VAR_0)
{
 if (!FUNC_1(VAR_0))
  return 0;


 if (FUNC_2(VAR_0) && VAR_0->pdev->revision < 8) {
  FUNC_0("BLT not supported on this pre-production hardware;"
    " graphics performance will be degraded.\n");
  return 0;
 }

 return 1;
}
