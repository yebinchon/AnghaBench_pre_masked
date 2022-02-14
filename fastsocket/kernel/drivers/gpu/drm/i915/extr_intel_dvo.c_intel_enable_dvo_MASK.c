
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {TYPE_2__* dev; } ;
struct intel_encoder {TYPE_4__ base; } ;
struct TYPE_7__ {int dvo_reg; TYPE_1__* dev_ops; } ;
struct intel_dvo {TYPE_3__ dev; } ;
struct drm_i915_private {int dummy; } ;
struct TYPE_6__ {struct drm_i915_private* dev_private; } ;
struct TYPE_5__ {int (* dpms ) (TYPE_3__*,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 struct intel_dvo* FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_3__*,int) ;

__attribute__((used)) static void FUNC_4(struct intel_encoder *VAR_1)
{
 struct drm_i915_private *VAR_2 = VAR_1->base.dev->dev_private;
 struct intel_dvo *VAR_3 = FUNC_2(&VAR_1->base);
 u32 VAR_4 = VAR_3->dev.dvo_reg;
 u32 VAR_5 = FUNC_0(VAR_4);

 FUNC_1(VAR_4, VAR_5 | VAR_0);
 FUNC_0(VAR_4);
 VAR_3->dev.dev_ops->dpms(&VAR_3->dev, 1);
}
