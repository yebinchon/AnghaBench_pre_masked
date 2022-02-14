
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_2__ {scalar_t__ write_domain; int read_domains; int dev; } ;
struct drm_i915_gem_object {TYPE_1__ base; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct drm_i915_gem_object*) ;
 int FUNC_2 (struct drm_i915_gem_object*,int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_3(struct drm_i915_gem_object *VAR_1)
{
 uint32_t VAR_2;

 if (VAR_1->base.write_domain != VAR_0)
  return;

 FUNC_1(VAR_1);
 FUNC_0(VAR_1->base.dev);
 VAR_2 = VAR_1->base.write_domain;
 VAR_1->base.write_domain = 0;

 FUNC_2(VAR_1,
         VAR_1->base.read_domains,
         VAR_2);
}
