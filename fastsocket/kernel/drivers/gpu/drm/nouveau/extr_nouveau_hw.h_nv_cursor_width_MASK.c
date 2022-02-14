
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nouveau_drm {int device; } ;
struct drm_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ card_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct nouveau_drm* FUNC_0 (struct drm_device*) ;
 TYPE_1__* FUNC_1 (int ) ;

__attribute__((used)) static inline int FUNC_2(struct drm_device *VAR_3)
{
 struct nouveau_drm *VAR_4 = FUNC_0(VAR_3);

 return FUNC_1(VAR_4->device)->card_type >= VAR_2 ? VAR_1 : VAR_0;
}
