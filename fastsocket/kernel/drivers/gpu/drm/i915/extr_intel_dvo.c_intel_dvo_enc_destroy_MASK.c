
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* dev_ops; } ;
struct intel_dvo {int panel_fixed_mode; TYPE_2__ dev; } ;
struct drm_encoder {int dummy; } ;
struct TYPE_3__ {int (* destroy ) (TYPE_2__*) ;} ;


 struct intel_dvo* FUNC_0 (struct drm_encoder*) ;
 int FUNC_1 (struct drm_encoder*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_4(struct drm_encoder *VAR_0)
{
 struct intel_dvo *VAR_1 = FUNC_0(VAR_0);

 if (VAR_1->dev.dev_ops->destroy)
  VAR_1->dev.dev_ops->destroy(&VAR_1->dev);

 FUNC_2(VAR_1->panel_fixed_mode);

 FUNC_1(VAR_0);
}
