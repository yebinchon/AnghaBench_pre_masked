
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_file {int dummy; } ;
struct drm_device {int dev_private; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct drm_device*,struct drm_file*) ;
 int FUNC_3 (struct drm_device*) ;

int FUNC_4(struct drm_device *VAR_0, void *VAR_1, struct drm_file *VAR_2)
{
 FUNC_1("\n");

 FUNC_2(VAR_0, VAR_2);

 FUNC_0(VAR_0->dev_private);

 return FUNC_3(VAR_0);
}
