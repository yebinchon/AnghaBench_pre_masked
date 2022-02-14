
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct nouveau_device {int dummy; } ;
struct drm_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct nouveau_device* FUNC_0 (struct drm_device*) ;
 int FUNC_1 (struct nouveau_device*,int ,int ) ;

__attribute__((used)) static inline void FUNC_2(struct drm_device *VAR_1,
     int VAR_2, uint32_t VAR_3, uint32_t VAR_4)
{
 struct nouveau_device *VAR_5 = FUNC_0(VAR_1);
 if (VAR_2)
  VAR_3 += VAR_0;
 FUNC_1(VAR_5, VAR_3, VAR_4);
}
