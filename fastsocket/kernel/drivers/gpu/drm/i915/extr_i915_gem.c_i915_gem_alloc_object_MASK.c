
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {void* read_domains; void* write_domain; int filp; } ;
struct drm_i915_gem_object {int cache_level; TYPE_2__ base; } ;
struct drm_device {int dummy; } ;
struct address_space {int dummy; } ;
typedef int gfp_t ;
struct TYPE_3__ {struct address_space* i_mapping; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct drm_device*) ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 scalar_t__ FUNC_1 (struct drm_device*) ;
 scalar_t__ FUNC_2 (struct drm_device*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (struct drm_device*,TYPE_2__*,size_t) ;
 TYPE_1__* FUNC_4 (int ) ;
 struct drm_i915_gem_object* FUNC_5 (struct drm_device*) ;
 int FUNC_6 (struct drm_i915_gem_object*) ;
 int FUNC_7 (struct drm_i915_gem_object*,int *) ;
 int VAR_7 ;
 int FUNC_8 (struct address_space*,int) ;

struct drm_i915_gem_object *FUNC_9(struct drm_device *VAR_8,
        size_t VAR_9)
{
 struct drm_i915_gem_object *VAR_10;
 struct address_space *VAR_11;
 gfp_t VAR_12;

 VAR_10 = FUNC_5(VAR_8);
 if (VAR_10 == ((void*)0))
  return ((void*)0);

 if (FUNC_3(VAR_8, &VAR_10->base, VAR_9) != 0) {
  FUNC_6(VAR_10);
  return ((void*)0);
 }

 VAR_12 = VAR_0 | VAR_6;
 if (FUNC_2(VAR_8) || FUNC_1(VAR_8)) {

  VAR_12 &= ~VAR_5;
  VAR_12 |= VAR_4;
 }

 VAR_11 = FUNC_4(VAR_10->base.filp)->i_mapping;
 FUNC_8(VAR_11, VAR_12);

 FUNC_7(VAR_10, &VAR_7);

 VAR_10->base.write_domain = VAR_3;
 VAR_10->base.read_domains = VAR_3;

 if (FUNC_0(VAR_8)) {
  VAR_10->cache_level = VAR_1;
 } else
  VAR_10->cache_level = VAR_2;

 return VAR_10;
}
