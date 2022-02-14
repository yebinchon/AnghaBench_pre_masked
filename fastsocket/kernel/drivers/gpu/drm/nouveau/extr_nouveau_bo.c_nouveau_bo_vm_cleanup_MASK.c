
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_buffer_object {int sync_obj; int bdev; } ;
struct nouveau_drm_tile {int dummy; } ;
struct nouveau_drm {struct drm_device* dev; } ;
struct drm_device {int dummy; } ;


 struct nouveau_drm* FUNC_0 (int ) ;
 int FUNC_1 (struct drm_device*,struct nouveau_drm_tile*,int ) ;

__attribute__((used)) static void
FUNC_2(struct ttm_buffer_object *VAR_0,
        struct nouveau_drm_tile *VAR_1,
        struct nouveau_drm_tile **VAR_2)
{
 struct nouveau_drm *VAR_3 = FUNC_0(VAR_0->bdev);
 struct drm_device *VAR_4 = VAR_3->dev;

 FUNC_1(VAR_4, *VAR_2, VAR_0->sync_obj);
 *VAR_2 = VAR_1;
}
