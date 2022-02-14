
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct intel_dp {int dummy; } ;
struct TYPE_4__ {struct drm_crtc* crtc; } ;
struct TYPE_5__ {TYPE_1__ base; } ;
struct intel_digital_port {TYPE_2__ base; } ;
struct drm_i915_private {int dummy; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;
struct drm_crtc {struct drm_device* dev; } ;
struct TYPE_6__ {int pipe; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (struct drm_i915_private*,int ) ;
 struct intel_digital_port* FUNC_5 (struct intel_dp*) ;
 TYPE_3__* FUNC_6 (struct drm_crtc*) ;
 int FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(struct intel_dp *VAR_3)
{
 struct intel_digital_port *VAR_4 = FUNC_5(VAR_3);
 struct drm_crtc *VAR_5 = VAR_4->base.base.crtc;
 struct drm_device *VAR_6 = VAR_5->dev;
 struct drm_i915_private *VAR_7 = VAR_6->dev_private;
 u32 VAR_8;

 FUNC_4(VAR_7,
        FUNC_6(VAR_5)->pipe);

 VAR_8 = FUNC_0(VAR_0);
 FUNC_3((VAR_8 & VAR_1) == 0,
      "dp pll off, should be on\n");
 FUNC_3(VAR_8 & VAR_2, "dp port still on, should be off\n");




 VAR_8 &= ~VAR_1;
 FUNC_1(VAR_0, VAR_8);
 FUNC_2(VAR_0);
 FUNC_7(200);
}
