
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct intel_encoder {int type; } ;
struct intel_crtc {int cpu_transcoder; int bpp; } ;
struct drm_i915_private {int dummy; } ;
struct drm_crtc {TYPE_1__* dev; } ;
typedef enum transcoder { ____Placeholder_transcoder } transcoder ;
struct TYPE_2__ {struct drm_i915_private* dev_private; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int VAR_6 ;
 int FUNC_2 (int,char*,int) ;
 struct intel_encoder* FUNC_3 (struct drm_crtc*) ;
 struct intel_crtc* FUNC_4 (struct drm_crtc*) ;

void FUNC_5(struct drm_crtc *VAR_7)
{
 struct drm_i915_private *VAR_8 = VAR_7->dev->dev_private;
 struct intel_crtc *VAR_9 = FUNC_4(VAR_7);
 struct intel_encoder *VAR_10 = FUNC_3(VAR_7);
 enum transcoder VAR_11 = VAR_9->cpu_transcoder;
 int VAR_12 = VAR_10->type;
 uint32_t VAR_13;

 if (VAR_12 == VAR_0 || VAR_12 == VAR_1) {

  VAR_13 = VAR_6;
  switch (VAR_9->bpp) {
  case 18:
   VAR_13 |= VAR_4;
   break;
  case 24:
   VAR_13 |= VAR_5;
   break;
  case 30:
   VAR_13 |= VAR_2;
   break;
  case 36:
   VAR_13 |= VAR_3;
   break;
  default:
   VAR_13 |= VAR_5;
   FUNC_2(1, "%d bpp unsupported by DDI function\n",
        VAR_9->bpp);
  }
  FUNC_0(FUNC_1(VAR_11), VAR_13);
 }
}
