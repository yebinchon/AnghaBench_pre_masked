
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nouveau_device {int dummy; } ;
struct drm_device {int dummy; } ;


 struct nouveau_device* FUNC_0 (struct drm_device*) ;
 int FUNC_1 (struct nouveau_device*,int) ;
 int FUNC_2 (struct drm_device*,int,int) ;

__attribute__((used)) static u32
FUNC_3(struct drm_device *VAR_0, int VAR_1, u32 VAR_2)
{
 struct nouveau_device *VAR_3 = FUNC_0(VAR_0);
 u32 VAR_4 = FUNC_1(VAR_3, VAR_2 + 0);
 u32 VAR_5 = 0, VAR_6 = 1, VAR_7 = 1, VAR_8 = 1;

 if (!(VAR_4 & 0x00000008)) {
  if (VAR_4 & 0x00000001) {
   u32 VAR_9 = FUNC_1(VAR_3, VAR_2 + 4);
   VAR_8 = (VAR_9 & 0x000000ff) >> 0;
   VAR_7 = (VAR_9 & 0x0000ff00) >> 8;
   VAR_6 = (VAR_9 & 0x003f0000) >> 16;


   if ((VAR_2 & 0x00ff00) == 0x00e800)
    VAR_6 = 1;

   VAR_5 = FUNC_2(VAR_0, 0x00 + VAR_1, 0);
  }
 } else {
  VAR_5 = FUNC_2(VAR_0, 0x10 + VAR_1, 0);
 }

 if (VAR_8 * VAR_6)
  return VAR_5 * VAR_7 / (VAR_8 * VAR_6);
 return 0;
}
