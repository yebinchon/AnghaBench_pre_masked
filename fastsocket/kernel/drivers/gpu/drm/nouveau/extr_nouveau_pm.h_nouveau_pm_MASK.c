
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nouveau_pm {int dummy; } ;
struct drm_device {int dummy; } ;
struct TYPE_2__ {struct nouveau_pm* pm; } ;


 TYPE_1__* FUNC_0 (struct drm_device*) ;

__attribute__((used)) static inline struct nouveau_pm *
FUNC_1(struct drm_device *VAR_0)
{
 return FUNC_0(VAR_0)->pm;
}
