
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sg_table {int dummy; } ;
struct drm_device {int dummy; } ;
typedef enum i915_cache_level { ____Placeholder_i915_cache_level } i915_cache_level ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sg_table*,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct drm_device *VAR_3,
         struct sg_table *VAR_4,
         unsigned int VAR_5,
         enum i915_cache_level VAR_6)
{
 unsigned int VAR_7 = (VAR_6 == VAR_2) ?
  VAR_1 : VAR_0;

 FUNC_0(VAR_4, VAR_5, VAR_7);

}
