
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int read_domains; int write_domain; } ;
struct drm_i915_gem_object {TYPE_1__ base; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_i915_gem_object*) ;
 int FUNC_1 () ;
 int FUNC_2 (struct drm_i915_gem_object*,int,int) ;

__attribute__((used)) static void FUNC_3(struct drm_i915_gem_object *VAR_1)
{
 u32 VAR_2, VAR_3;


 FUNC_0(VAR_1);

 if ((VAR_1->base.read_domains & VAR_0) == 0)
  return;


 FUNC_1();

 VAR_3 = VAR_1->base.read_domains;
 VAR_2 = VAR_1->base.write_domain;

 VAR_1->base.read_domains &= ~VAR_0;
 VAR_1->base.write_domain &= ~VAR_0;

 FUNC_2(VAR_1,
         VAR_3,
         VAR_2);
}
