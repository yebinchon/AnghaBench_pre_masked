
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int irq_mask; } ;
typedef TYPE_1__ drm_i915_private_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline void
FUNC_2(drm_i915_private_t *VAR_1, u32 VAR_2)
{
 if ((VAR_1->irq_mask & VAR_2) != VAR_2) {
  VAR_1->irq_mask |= VAR_2;
  FUNC_0(VAR_0, VAR_1->irq_mask);
  FUNC_1(VAR_0);
 }
}
