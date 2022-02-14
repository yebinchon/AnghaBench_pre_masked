
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_bo {int gem; } ;
struct drm_mode_create_dumb {int pitch; int width; int bpp; int size; int height; int handle; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drm_file*,int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct drm_device*,int,int ,int ,int ,int ,struct nouveau_bo**) ;
 void* FUNC_3 (int,int) ;

int
FUNC_4(struct drm_file *VAR_2, struct drm_device *VAR_3,
       struct drm_mode_create_dumb *VAR_4)
{
 struct nouveau_bo *VAR_5;
 int VAR_6;

 VAR_4->pitch = FUNC_3(VAR_4->width * (VAR_4->bpp / 8), 256);
 VAR_4->size = VAR_4->pitch * VAR_4->height;
 VAR_4->size = FUNC_3(VAR_4->size, VAR_1);

 VAR_6 = FUNC_2(VAR_3, VAR_4->size, 0, VAR_0, 0, 0, &VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_0(VAR_2, VAR_5->gem, &VAR_4->handle);
 FUNC_1(VAR_5->gem);
 return VAR_6;
}
