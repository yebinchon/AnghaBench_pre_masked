
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_device {int dummy; } ;
typedef int gtt_pte_t ;
typedef enum i915_cache_level { ____Placeholder_i915_cache_level } i915_cache_level ;
typedef int dma_addr_t ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int FUNC_2 (struct drm_device*) ;

__attribute__((used)) static inline gtt_pte_t FUNC_3(struct drm_device *VAR_5,
     dma_addr_t VAR_6,
     enum i915_cache_level VAR_7)
{
 gtt_pte_t VAR_8 = VAR_3;
 VAR_8 |= FUNC_1(VAR_6);

 switch (VAR_7) {
 case 129:

  if (FUNC_2(VAR_5))
   VAR_8 |= VAR_0;
  else
   VAR_8 |= VAR_1;
  break;
 case 130:
  VAR_8 |= VAR_0;
  break;
 case 128:
  if (FUNC_2(VAR_5))
   VAR_8 |= VAR_4;
  else
   VAR_8 |= VAR_2;
  break;
 default:
  FUNC_0();
 }


 return VAR_8;
}
