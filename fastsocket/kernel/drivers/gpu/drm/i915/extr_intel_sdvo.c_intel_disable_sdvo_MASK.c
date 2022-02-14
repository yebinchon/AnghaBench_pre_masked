
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct intel_sdvo {int sdvo_reg; } ;
struct TYPE_5__ {TYPE_3__* dev; struct drm_crtc* crtc; } ;
struct intel_encoder {TYPE_1__ base; } ;
struct drm_i915_private {int dummy; } ;
struct drm_crtc {int dummy; } ;
struct TYPE_7__ {struct drm_i915_private* dev_private; } ;
struct TYPE_6__ {int pipe; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (struct intel_sdvo*,int ) ;
 int FUNC_5 (struct intel_sdvo*,int ) ;
 int FUNC_6 (struct intel_sdvo*,int) ;
 int FUNC_7 (TYPE_3__*,int) ;
 int FUNC_8 (int) ;
 TYPE_2__* FUNC_9 (struct drm_crtc*) ;
 struct intel_sdvo* FUNC_10 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_11(struct intel_encoder *VAR_3)
{
 struct drm_i915_private *VAR_4 = VAR_3->base.dev->dev_private;
 struct intel_sdvo *VAR_5 = FUNC_10(&VAR_3->base);
 u32 VAR_6;

 FUNC_4(VAR_5, 0);
 if (0)
  FUNC_5(VAR_5,
         VAR_0);

 VAR_6 = FUNC_1(VAR_5->sdvo_reg);
 if ((VAR_6 & VAR_1) != 0) {


  if (FUNC_0(VAR_3->base.dev)) {
   struct drm_crtc *VAR_7 = VAR_3->base.crtc;
   int VAR_8 = VAR_7 ? FUNC_9(VAR_7)->pipe : -1;

   if (VAR_6 & VAR_2) {
    VAR_6 &= ~VAR_2;
    FUNC_2(VAR_5->sdvo_reg, VAR_6);
    FUNC_3(VAR_5->sdvo_reg);


    FUNC_2(VAR_5->sdvo_reg, VAR_6);
    FUNC_3(VAR_5->sdvo_reg);



    if (VAR_7)
     FUNC_7(VAR_3->base.dev, VAR_8);
    else
     FUNC_8(50);
   }
  }

  FUNC_6(VAR_5, VAR_6 & ~VAR_1);
 }
}
