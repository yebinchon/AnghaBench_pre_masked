
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nouveau_device {int dummy; } ;
struct drm_device {int dummy; } ;


 struct nouveau_device* FUNC_0 (struct drm_device*) ;
 int FUNC_1 (struct nouveau_device*,int) ;

__attribute__((used)) static u32
FUNC_2(struct drm_device *VAR_0, u32 VAR_1)
{
 struct nouveau_device *VAR_2 = FUNC_0(VAR_0);
 u32 VAR_3 = FUNC_1(VAR_2, VAR_1 + 0x00);
 u32 VAR_4 = FUNC_1(VAR_2, VAR_1 + 0x04);
 int VAR_5 = (VAR_4 & 0xff000000) >> 24;
 int VAR_6 = (VAR_4 & 0x00ff0000) >> 16;
 int VAR_7 = (VAR_4 & 0x0000ff00) >> 8;
 int VAR_8 = (VAR_4 & 0x000000ff) >> 0;
 int VAR_9 = (VAR_3 & 0x00070000) >> 16;
 u32 VAR_10 = 27000, VAR_11 = 0;

 if ((VAR_3 & 0x80000000) && VAR_8) {
  VAR_11 = VAR_10 * VAR_7 / VAR_8;
  if ((VAR_3 & 0x40000100) == 0x40000000) {
   if (VAR_6)
    VAR_11 = VAR_11 * VAR_5 / VAR_6;
   else
    VAR_11 = 0;
  }
 }

 return VAR_11 >> VAR_9;
}
