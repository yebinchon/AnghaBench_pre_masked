
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_3__ {struct drm_device* dev; } ;
struct TYPE_4__ {TYPE_1__ base; } ;
struct intel_sdvo {TYPE_2__ base; } ;
struct drm_device {int dummy; } ;
typedef int hotplug ;


 scalar_t__ FUNC_0 (struct drm_device*) ;
 scalar_t__ FUNC_1 (struct drm_device*) ;
 int VAR_0 ;
 int FUNC_2 (struct intel_sdvo*,int ,int *,int) ;

__attribute__((used)) static uint16_t FUNC_3(struct intel_sdvo *VAR_1)
{
 struct drm_device *VAR_2 = VAR_1->base.base.dev;
 uint16_t VAR_3;



 if (FUNC_0(VAR_2) || FUNC_1(VAR_2))
  return 0;

 if (!FUNC_2(VAR_1, VAR_0,
     &VAR_3, sizeof(VAR_3)))
  return 0;

 return VAR_3;
}
