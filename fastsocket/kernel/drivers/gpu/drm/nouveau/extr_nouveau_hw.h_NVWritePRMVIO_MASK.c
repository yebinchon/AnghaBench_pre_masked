
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct nouveau_drm {int device; } ;
struct nouveau_device {int dummy; } ;
struct drm_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ card_type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct nouveau_device* FUNC_0 (struct drm_device*) ;
 struct nouveau_drm* FUNC_1 (struct drm_device*) ;
 TYPE_1__* FUNC_2 (int ) ;
 int FUNC_3 (struct nouveau_device*,int ,int ) ;

__attribute__((used)) static inline void FUNC_4(struct drm_device *VAR_2,
     int VAR_3, uint32_t VAR_4, uint8_t VAR_5)
{
 struct nouveau_device *VAR_6 = FUNC_0(VAR_2);
 struct nouveau_drm *VAR_7 = FUNC_1(VAR_2);



 if (VAR_3 && FUNC_2(VAR_7->device)->card_type == VAR_0)
  VAR_4 += VAR_1;

 FUNC_3(VAR_6, VAR_4, VAR_5);
}
