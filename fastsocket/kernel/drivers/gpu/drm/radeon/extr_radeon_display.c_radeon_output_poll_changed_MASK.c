
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_device {int dummy; } ;
struct drm_device {struct radeon_device* dev_private; } ;


 int FUNC_0 (struct radeon_device*) ;

__attribute__((used)) static void FUNC_1(struct drm_device *VAR_0)
{
 struct radeon_device *VAR_1 = VAR_0->dev_private;
 FUNC_0(VAR_1);
}
