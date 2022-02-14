
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct intel_encoder {int dummy; } ;
struct drm_i915_private {int dummy; } ;
struct drm_crtc {TYPE_1__* dev; } ;
struct TYPE_2__ {struct drm_i915_private* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 struct intel_encoder* FUNC_4 (struct drm_crtc*) ;
 int FUNC_5 (struct intel_encoder*) ;

void FUNC_6(struct drm_crtc *VAR_7)
{
 struct drm_i915_private *VAR_8 = VAR_7->dev->dev_private;
 struct intel_encoder *VAR_9 = FUNC_4(VAR_7);
 uint32_t VAR_10;

 FUNC_5(VAR_9);

 VAR_10 = FUNC_2(VAR_5);
 VAR_10 &= ~VAR_1;
 FUNC_3(VAR_5, VAR_10);

 VAR_10 = FUNC_2(VAR_6);
 VAR_10 &= ~(VAR_4 | VAR_3);
 VAR_10 |= FUNC_1(2) | FUNC_0(2);
 FUNC_3(VAR_6, VAR_10);

 VAR_10 = FUNC_2(VAR_5);
 VAR_10 &= ~VAR_0;
 FUNC_3(VAR_5, VAR_10);

 VAR_10 = FUNC_2(VAR_5);
 VAR_10 &= ~VAR_2;
 FUNC_3(VAR_5, VAR_10);
}
