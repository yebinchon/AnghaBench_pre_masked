
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nouveau_drm_tile {int used; int fence; } ;
struct TYPE_2__ {int lock; struct nouveau_drm_tile* reg; } ;
struct nouveau_drm {TYPE_1__ tile; } ;
struct drm_device {int dummy; } ;


 struct nouveau_drm* FUNC_0 (struct drm_device*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static struct nouveau_drm_tile *
FUNC_4(struct drm_device *VAR_0, int VAR_1)
{
 struct nouveau_drm *VAR_2 = FUNC_0(VAR_0);
 struct nouveau_drm_tile *VAR_3 = &VAR_2->tile.reg[VAR_1];

 FUNC_2(&VAR_2->tile.lock);

 if (!VAR_3->used &&
     (!VAR_3->fence || FUNC_1(VAR_3->fence)))
  VAR_3->used = 1;
 else
  VAR_3 = ((void*)0);

 FUNC_3(&VAR_2->tile.lock);
 return VAR_3;
}
