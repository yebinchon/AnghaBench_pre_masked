
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nouveau_drm {int device; } ;
struct drm_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ card_type; } ;


 int FUNC_0 (struct drm_device*,int ,int) ;
 scalar_t__ VAR_0 ;
 struct nouveau_drm* FUNC_1 (struct drm_device*) ;
 TYPE_1__* FUNC_2 (int ) ;

__attribute__((used)) static bool
FUNC_3(struct drm_device *VAR_1)
{
 struct nouveau_drm *VAR_2 = FUNC_1(VAR_1);
 unsigned VAR_3;

 if (FUNC_2(VAR_2->device)->card_type >= VAR_0) {
  if (FUNC_0(VAR_1, 0, 0x00) == 0 &&
      FUNC_0(VAR_1, 0, 0x1a) == 0)
   return 0;
  return 1;
 }

 VAR_3 = FUNC_0(VAR_1, 0, 0x06);
 VAR_3 |= (FUNC_0(VAR_1, 0, 0x07) & 0x01) << 8;
 VAR_3 |= (FUNC_0(VAR_1, 0, 0x07) & 0x20) << 4;
 VAR_3 |= (FUNC_0(VAR_1, 0, 0x25) & 0x01) << 10;
 VAR_3 |= (FUNC_0(VAR_1, 0, 0x41) & 0x01) << 11;

 return (VAR_3 != 0);
}
