
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_device {int dummy; } ;


 scalar_t__ FUNC_0 (struct drm_device*) ;

__attribute__((used)) static u32 FUNC_1(struct drm_device *VAR_0, u32 VAR_1, u32 VAR_2)
{
 u32 VAR_3, VAR_4, VAR_5;
 if (FUNC_0(VAR_0)) {
  VAR_3 = 0x1f;
  VAR_4 = 5;
 } else {
  VAR_3 = 0x3f;
  VAR_4 = 6;
 }
 VAR_5 = ((VAR_1 + VAR_2 + VAR_3) >> VAR_4) - (VAR_1 >> VAR_4);
 if (!FUNC_0(VAR_0))
  VAR_5 <<= 1;
 VAR_5 -= 1;
 return VAR_5 << 2;
}
