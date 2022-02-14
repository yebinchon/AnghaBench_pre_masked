
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nouveau_fence {int dummy; } ;
struct nouveau_drm_tile {int used; struct nouveau_fence* fence; } ;
struct TYPE_2__ {int lock; } ;
struct nouveau_drm {TYPE_1__ tile; } ;
struct drm_device {int dummy; } ;


 struct nouveau_drm* FUNC_0 (struct drm_device*) ;
 int FUNC_1 (struct nouveau_fence*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct drm_device *VAR_0, struct nouveau_drm_tile *VAR_1,
   struct nouveau_fence *VAR_2)
{
 struct nouveau_drm *VAR_3 = FUNC_0(VAR_0);

 if (VAR_1) {
  FUNC_2(&VAR_3->tile.lock);
  if (VAR_2) {

   VAR_1->fence = VAR_2;
   FUNC_1(VAR_2);
  }

  VAR_1->used = 0;
  FUNC_3(&VAR_3->tile.lock);
 }
}
