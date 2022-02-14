
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int work; int lock; int pm_iir; } ;
struct drm_i915_private {TYPE_1__ rps; int wq; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct drm_i915_private *VAR_1,
    u32 VAR_2)
{
 unsigned long VAR_3;
 FUNC_3(&VAR_1->rps.lock, VAR_3);
 VAR_1->rps.pm_iir |= VAR_2;
 FUNC_0(VAR_0, VAR_1->rps.pm_iir);
 FUNC_1(VAR_0);
 FUNC_4(&VAR_1->rps.lock, VAR_3);

 FUNC_2(VAR_1->wq, &VAR_1->rps.work);
}
