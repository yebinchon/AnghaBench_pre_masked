
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct nouveau_device {int dummy; } ;
struct drm_device {int dummy; } ;


 struct nouveau_device* FUNC_0 (struct drm_device*) ;
 int FUNC_1 (struct nouveau_device*,int ) ;

__attribute__((used)) static inline uint32_t FUNC_2(struct drm_device *VAR_0, uint32_t VAR_1)
{
 struct nouveau_device *VAR_2 = FUNC_0(VAR_0);
 return FUNC_1(VAR_2, VAR_1);
}
