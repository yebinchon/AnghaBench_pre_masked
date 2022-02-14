
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nouveau_drm {int device; } ;
struct nouveau_disp {TYPE_1__* vblank; } ;
struct drm_device {int dummy; } ;
struct TYPE_2__ {int index_nr; } ;


 int VAR_0 ;
 struct nouveau_disp* FUNC_0 (int ) ;
 struct nouveau_drm* FUNC_1 (struct drm_device*) ;
 int FUNC_2 (TYPE_1__*,int) ;

__attribute__((used)) static int
FUNC_3(struct drm_device *VAR_1, int VAR_2)
{
 struct nouveau_drm *VAR_3 = FUNC_1(VAR_1);
 struct nouveau_disp *VAR_4 = FUNC_0(VAR_3->device);

 if (VAR_2 >= VAR_4->vblank->index_nr)
  return -VAR_0;
 FUNC_2(VAR_4->vblank, VAR_2);
 return 0;
}
