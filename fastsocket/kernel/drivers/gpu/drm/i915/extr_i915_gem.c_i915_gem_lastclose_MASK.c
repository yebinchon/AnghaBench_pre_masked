
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 (struct drm_device*,int ) ;
 int FUNC_2 (struct drm_device*) ;

void
FUNC_3(struct drm_device *VAR_1)
{
 int VAR_2;

 if (FUNC_1(VAR_1, VAR_0))
  return;

 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2)
  FUNC_0("failed to idle hardware: %d\n", VAR_2);
}
