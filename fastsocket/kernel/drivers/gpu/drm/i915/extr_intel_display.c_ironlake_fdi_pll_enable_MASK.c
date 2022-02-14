
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {struct drm_device* dev; } ;
struct intel_crtc {int pipe; int fdi_lanes; TYPE_1__ base; } ;
struct drm_i915_private {int dummy; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int) ;
 int VAR_3 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(struct intel_crtc *VAR_4)
{
 struct drm_device *VAR_5 = VAR_4->base.dev;
 struct drm_i915_private *VAR_6 = VAR_5->dev_private;
 int VAR_7 = VAR_4->pipe;
 u32 VAR_8, VAR_9;



 VAR_8 = FUNC_0(VAR_7);
 VAR_9 = FUNC_2(VAR_8);
 VAR_9 &= ~((0x7 << 19) | (0x7 << 16));
 VAR_9 |= (VAR_4->fdi_lanes - 1) << 19;
 VAR_9 |= (FUNC_2(FUNC_4(VAR_7)) & VAR_3) << 11;
 FUNC_3(VAR_8, VAR_9 | VAR_1);

 FUNC_5(VAR_8);
 FUNC_6(200);


 VAR_9 = FUNC_2(VAR_8);
 FUNC_3(VAR_8, VAR_9 | VAR_0);

 FUNC_5(VAR_8);
 FUNC_6(200);


 VAR_8 = FUNC_1(VAR_7);
 VAR_9 = FUNC_2(VAR_8);
 if ((VAR_9 & VAR_2) == 0) {
  FUNC_3(VAR_8, VAR_9 | VAR_2);

  FUNC_5(VAR_8);
  FUNC_6(100);
 }
}
