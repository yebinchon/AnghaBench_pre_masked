
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_overlay {TYPE_2__* dev; } ;
struct intel_crtc {int pipe; int active; } ;
typedef int drm_i915_private_t ;
struct TYPE_4__ {int * dev_private; } ;
struct TYPE_3__ {int gen; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(struct intel_overlay *VAR_3,
       struct intel_crtc *VAR_4)
{
 drm_i915_private_t *VAR_5 = VAR_3->dev->dev_private;

 if (!VAR_4->active)
  return -VAR_0;


 if (FUNC_1(VAR_3->dev)->gen < 4 &&
     (FUNC_0(FUNC_2(VAR_4->pipe)) & (VAR_1 | VAR_2)) != VAR_2)
  return -VAR_0;

 return 0;
}
