
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
 int FUNC_1 (struct drm_device*,int ,int ) ;
 int FUNC_2 (struct drm_device*,int ,int ) ;

void FUNC_3(struct drm_device *VAR_6, int VAR_7)
{
 drm_radeon_private_t *VAR_8 = VAR_6->dev_private;

 if ((VAR_8->flags & VAR_5) >= VAR_0) {
  switch (VAR_7) {
  case 0:
   FUNC_1(VAR_6, VAR_1, 0);
   break;
  case 1:
   FUNC_1(VAR_6, VAR_2, 0);
   break;
  default:
   FUNC_0("tried to enable vblank on non-existent crtc %d\n",
      VAR_7);
   break;
  }
 } else {
  switch (VAR_7) {
  case 0:
   FUNC_2(VAR_6, VAR_4, 0);
   break;
  case 1:
   FUNC_2(VAR_6, VAR_3, 0);
   break;
  default:
   FUNC_0("tried to enable vblank on non-existent crtc %d\n",
      VAR_7);
   break;
  }
 }
}
