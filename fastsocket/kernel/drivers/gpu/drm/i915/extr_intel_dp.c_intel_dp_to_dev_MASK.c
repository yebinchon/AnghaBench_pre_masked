
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_dp {int dummy; } ;
struct TYPE_3__ {struct drm_device* dev; } ;
struct TYPE_4__ {TYPE_1__ base; } ;
struct intel_digital_port {TYPE_2__ base; } ;
struct drm_device {int dummy; } ;


 struct intel_digital_port* FUNC_0 (struct intel_dp*) ;

__attribute__((used)) static struct drm_device *FUNC_1(struct intel_dp *VAR_0)
{
 struct intel_digital_port *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->base.base.dev;
}
