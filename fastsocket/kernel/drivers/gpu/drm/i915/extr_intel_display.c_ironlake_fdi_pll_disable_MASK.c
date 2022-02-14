
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {struct drm_device* dev; } ;
struct intel_crtc {int pipe; TYPE_1__ base; } ;
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
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct intel_crtc *VAR_3)
{
 struct drm_device *VAR_4 = VAR_3->base.dev;
 struct drm_i915_private *VAR_5 = VAR_4->dev_private;
 int VAR_6 = VAR_3->pipe;
 u32 VAR_7, VAR_8;


 VAR_7 = FUNC_0(VAR_6);
 VAR_8 = FUNC_2(VAR_7);
 FUNC_3(VAR_7, VAR_8 & ~VAR_0);


 VAR_7 = FUNC_1(VAR_6);
 VAR_8 = FUNC_2(VAR_7);
 FUNC_3(VAR_7, VAR_8 & ~VAR_2);

 FUNC_4(VAR_7);
 FUNC_5(100);

 VAR_7 = FUNC_0(VAR_6);
 VAR_8 = FUNC_2(VAR_7);
 FUNC_3(VAR_7, VAR_8 & ~VAR_1);


 FUNC_4(VAR_7);
 FUNC_5(100);
}
