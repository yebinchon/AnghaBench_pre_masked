
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_buffer_object {int bdev; } ;
struct nouveau_drm {struct drm_device* dev; } ;
struct nouveau_bo {int tile; int gem; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (char*,struct ttm_buffer_object*) ;
 int FUNC_1 (struct nouveau_bo*) ;
 struct nouveau_drm* FUNC_2 (int ) ;
 struct nouveau_bo* FUNC_3 (struct ttm_buffer_object*) ;
 int FUNC_4 (struct drm_device*,int ,int *) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(struct ttm_buffer_object *VAR_0)
{
 struct nouveau_drm *VAR_1 = FUNC_2(VAR_0->bdev);
 struct drm_device *VAR_2 = VAR_1->dev;
 struct nouveau_bo *VAR_3 = FUNC_3(VAR_0);

 if (FUNC_5(VAR_3->gem))
  FUNC_0("bo %p still attached to GEM object\n", VAR_0);
 FUNC_4(VAR_2, VAR_3->tile, ((void*)0));
 FUNC_1(VAR_3);
}
