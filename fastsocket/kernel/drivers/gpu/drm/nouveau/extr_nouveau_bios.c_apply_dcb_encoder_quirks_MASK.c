
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct dcb_table {int dummy; } ;
struct TYPE_2__ {struct dcb_table dcb; } ;
struct nouveau_drm {TYPE_1__ vbios; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct dcb_table*,int ,int,int,int) ;
 struct nouveau_drm* FUNC_1 (struct drm_device*) ;
 scalar_t__ FUNC_2 (struct drm_device*,int,int,int) ;

__attribute__((used)) static bool
FUNC_3(struct drm_device *VAR_1, int VAR_2, u32 *VAR_3, u32 *VAR_4)
{
 struct nouveau_drm *VAR_5 = FUNC_1(VAR_1);
 struct dcb_table *VAR_6 = &VAR_5->vbios.dcb;
 if (FUNC_2(VAR_1, 0x040d, 0x1028, 0x019b)) {
  if (*VAR_3 == 0x02026312 && *VAR_4 == 0x00000020)
   return 0;
 }






 if (FUNC_2(VAR_1, 0x0201, 0x1462, 0x8851)) {
  if (*VAR_3 == 0xf2005014 && *VAR_4 == 0xffffffff) {
   FUNC_0(VAR_6, VAR_0, 1, 1, 1);
   return 0;
  }
 }





 if (FUNC_2(VAR_1, 0x0ca3, 0x1682, 0x3003)) {
  if (VAR_2 == 0) {
   *VAR_3 = 0x02001300;
   *VAR_4 = 0x00000028;
  } else
  if (VAR_2 == 1) {
   *VAR_3 = 0x01010312;
   *VAR_4 = 0x00020030;
  } else
  if (VAR_2 == 2) {
   *VAR_3 = 0x01010310;
   *VAR_4 = 0x00000028;
  } else
  if (VAR_2 == 3) {
   *VAR_3 = 0x02022362;
   *VAR_4 = 0x00020010;
  } else {
   *VAR_3 = 0x0000000e;
   *VAR_4 = 0x00000000;
  }
 }
 if (FUNC_2(VAR_1, 0x0615, 0x1682, 0x2605)) {
  if (VAR_2 == 0) {
   *VAR_3 = 0x02002300;
   *VAR_4 = 0x00000028;
  } else
  if (VAR_2 == 1) {
   *VAR_3 = 0x01010312;
   *VAR_4 = 0x00020030;
  } else
  if (VAR_2 == 2) {
   *VAR_3 = 0x04020310;
   *VAR_4 = 0x00000028;
  } else
  if (VAR_2 == 3) {
   *VAR_3 = 0x02021322;
   *VAR_4 = 0x00020010;
  } else {
   *VAR_3 = 0x0000000e;
   *VAR_4 = 0x00000000;
  }
 }


 if (FUNC_2(VAR_1, 0x0421, 0x3842, 0xc793)) {
  if (VAR_2 == 0 && *VAR_3 == 0x02000300)
   *VAR_3 = 0x02011300;
  else
  if (VAR_2 == 1 && *VAR_3 == 0x04011310)
   *VAR_3 = 0x04000310;
  else
  if (VAR_2 == 2 && *VAR_3 == 0x02011312)
   *VAR_3 = 0x02000312;
 }

 return 1;
}
