
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_device {int dummy; } ;


 int FUNC_0 (struct drm_device*,int) ;
 int FUNC_1 (struct drm_device*,int) ;

__attribute__((used)) static u32
FUNC_2(struct drm_device *VAR_0, u32 VAR_1)
{
 switch (VAR_1) {
 case 3:
  return FUNC_1(VAR_0, 0x004000);
 case 2:
  return FUNC_0(VAR_0, 0x004008);
 default:
  break;
 }

 return 0;
}
