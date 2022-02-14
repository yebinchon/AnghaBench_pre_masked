
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct radeon_device {int dummy; } ;
struct drm_mode_create_dumb {int pitch; int bpp; int size; int height; int handle; int width; } ;
struct drm_gem_object {int dummy; } ;
struct drm_file {int dummy; } ;
struct drm_device {struct radeon_device* dev_private; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct drm_file*,struct drm_gem_object*,int *) ;
 int FUNC_2 (struct drm_gem_object*) ;
 int FUNC_3 (struct radeon_device*,int ,int,int ) ;
 int FUNC_4 (struct radeon_device*,int,int ,int ,int,int ,struct drm_gem_object**) ;
 int VAR_3 ;

int FUNC_5(struct drm_file *VAR_4,
       struct drm_device *VAR_5,
       struct drm_mode_create_dumb *VAR_6)
{
 struct radeon_device *VAR_7 = VAR_5->dev_private;
 struct drm_gem_object *VAR_8;
 uint32_t VAR_9;
 int VAR_10;

 VAR_6->pitch = FUNC_3(VAR_7, VAR_6->width, VAR_6->bpp, 0) * ((VAR_6->bpp + 1) / 8);
 VAR_6->size = VAR_6->pitch * VAR_6->height;
 VAR_6->size = FUNC_0(VAR_6->size, VAR_1);

 VAR_10 = FUNC_4(VAR_7, VAR_6->size, 0,
         VAR_2,
         0, VAR_3,
         &VAR_8);
 if (VAR_10)
  return -VAR_0;

 VAR_10 = FUNC_1(VAR_4, VAR_8, &VAR_9);

 FUNC_2(VAR_8);
 if (VAR_10) {
  return VAR_10;
 }
 VAR_6->handle = VAR_9;
 return 0;
}
