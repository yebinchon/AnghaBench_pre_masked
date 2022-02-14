
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nouveau_bo {int dummy; } ;
struct drm_device {int dummy; } ;
struct TYPE_2__ {struct nouveau_bo* sync; } ;


 TYPE_1__* FUNC_0 (struct drm_device*) ;

struct nouveau_bo *
FUNC_1(struct drm_device *VAR_0, int VAR_1)
{
 return FUNC_0(VAR_0)->sync;
}
