
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_device {TYPE_1__* dev_private; } ;
struct TYPE_2__ {int flags; } ;
typedef TYPE_1__ drm_radeon_private_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct drm_device*,int ,int) ;
 int FUNC_2 (struct drm_device*,int ,int) ;

int FUNC_3(struct drm_device *VAR_7, int VAR_8)
{
 drm_radeon_private_t *VAR_9 = VAR_7->dev_private;

 if ((VAR_9->flags & VAR_6) >= VAR_0) {
  switch (VAR_8) {
  case 0:
   FUNC_1(VAR_7, VAR_2, 1);
   break;
  case 1:
   FUNC_1(VAR_7, VAR_3, 1);
   break;
  default:
   FUNC_0("tried to enable vblank on non-existent crtc %d\n",
      VAR_8);
   return -VAR_1;
  }
 } else {
  switch (VAR_8) {
  case 0:
   FUNC_2(VAR_7, VAR_5, 1);
   break;
  case 1:
   FUNC_2(VAR_7, VAR_4, 1);
   break;
  default:
   FUNC_0("tried to enable vblank on non-existent crtc %d\n",
      VAR_8);
   return -VAR_1;
  }
 }

 return 0;
}
