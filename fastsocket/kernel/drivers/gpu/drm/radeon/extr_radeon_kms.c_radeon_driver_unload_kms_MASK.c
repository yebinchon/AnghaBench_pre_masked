
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_device {int * rmmio; } ;
struct drm_device {struct radeon_device* dev_private; } ;


 int FUNC_0 (struct radeon_device*) ;
 int FUNC_1 (struct radeon_device*) ;
 int FUNC_2 (struct radeon_device*) ;
 int FUNC_3 (struct radeon_device*) ;

int FUNC_4(struct drm_device *VAR_0)
{
 struct radeon_device *VAR_1 = VAR_0->dev_private;

 if (VAR_1 == ((void*)0))
  return 0;
 if (VAR_1->rmmio == ((void*)0))
  goto done_free;
 FUNC_1(VAR_1);
 FUNC_3(VAR_1);
 FUNC_2(VAR_1);

done_free:
 FUNC_0(VAR_1);
 VAR_0->dev_private = ((void*)0);
 return 0;
}
