
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nouveau_drm {int device; } ;
struct nouveau_device {int dummy; } ;
struct drm_device {int dummy; } ;
struct TYPE_2__ {int chipset; } ;


 int VAR_0 ;
 struct nouveau_device* FUNC_0 (struct drm_device*) ;
 struct nouveau_drm* FUNC_1 (struct drm_device*) ;
 TYPE_1__* FUNC_2 (int ) ;
 int FUNC_3 (struct nouveau_device*,int) ;
 int FUNC_4 (struct drm_device*,int ) ;
 int FUNC_5 (struct drm_device*,int) ;

__attribute__((used)) static u32
FUNC_6(struct drm_device *VAR_1, u32 VAR_2)
{
 struct nouveau_device *VAR_3 = FUNC_0(VAR_1);
 struct nouveau_drm *VAR_4 = FUNC_1(VAR_1);
 u32 VAR_5 = FUNC_3(VAR_3, 0x00c040);
 u32 VAR_6 = FUNC_3(VAR_3, VAR_2 + 0);
 u32 VAR_7 = FUNC_3(VAR_3, VAR_2 + 4);
 u32 VAR_8 = FUNC_5(VAR_1, VAR_2);
 u32 VAR_9 = 0;
 int VAR_10, VAR_11, VAR_12, VAR_13;

 if (VAR_2 == 0x004028 && (VAR_5 & 0x00100000)) {

  if (FUNC_2(VAR_4->device)->chipset != 0xa0)
   return FUNC_4(VAR_1, VAR_0);
 }

 VAR_11 = (VAR_7 & 0xff000000) >> 24;
 VAR_13 = (VAR_7 & 0x00ff0000) >> 16;
 VAR_10 = (VAR_7 & 0x0000ff00) >> 8;
 VAR_12 = (VAR_7 & 0x000000ff);
 if ((VAR_6 & 0x80000000) && VAR_12) {
  VAR_9 = VAR_8 * VAR_10 / VAR_12;
  if ((VAR_6 & 0x40000100) == 0x40000000) {
   if (VAR_13)
    VAR_9 = VAR_9 * VAR_11 / VAR_13;
   else
    VAR_9 = 0;
  }
 }

 return VAR_9;
}
