
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct drm_device {TYPE_1__* dev_private; } ;
struct TYPE_2__ {int flags; } ;
typedef TYPE_1__ drm_radeon_private_t ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;

u32 FUNC_2(struct drm_device *VAR_7, int VAR_8)
{
 drm_radeon_private_t *VAR_9 = VAR_7->dev_private;

 if (!VAR_9) {
  FUNC_0("called with no initialization\n");
  return -VAR_1;
 }

 if (VAR_8 < 0 || VAR_8 > 1) {
  FUNC_0("Invalid crtc %d\n", VAR_8);
  return -VAR_1;
 }

 if ((VAR_9->flags & VAR_6) >= VAR_0) {
  if (VAR_8 == 0)
   return FUNC_1(VAR_2);
  else
   return FUNC_1(VAR_3);
 } else {
  if (VAR_8 == 0)
   return FUNC_1(VAR_5);
  else
   return FUNC_1(VAR_4);
 }
}
