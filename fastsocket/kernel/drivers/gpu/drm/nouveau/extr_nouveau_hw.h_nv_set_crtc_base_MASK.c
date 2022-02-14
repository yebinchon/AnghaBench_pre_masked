
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct nouveau_drm {int device; } ;
struct drm_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ card_type; } ;


 int FUNC_0 (struct drm_device*,int,int ) ;
 int FUNC_1 (struct drm_device*,int,int ,int) ;
 int FUNC_2 (struct drm_device*,int,int ,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct nouveau_drm* FUNC_3 (struct drm_device*) ;
 TYPE_1__* FUNC_4 (int ) ;

__attribute__((used)) static inline void
FUNC_5(struct drm_device *VAR_3, int VAR_4, uint32_t VAR_5)
{
 struct nouveau_drm *VAR_6 = FUNC_3(VAR_3);

 FUNC_1(VAR_3, VAR_4, VAR_2, VAR_5);

 if (FUNC_4(VAR_6->device)->card_type == VAR_0) {




  int VAR_7 = FUNC_0(VAR_3, VAR_4, VAR_1);

  FUNC_2(VAR_3, VAR_4, VAR_1,
          (VAR_7 & ~0x40) | ((VAR_5 >> 18) & 0x40));
 }
}
