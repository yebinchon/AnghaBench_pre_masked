
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int* pipestat; } ;
typedef TYPE_1__ drm_i915_private_t ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;

void
FUNC_3(drm_i915_private_t *VAR_0, int VAR_1, u32 VAR_2)
{
 if ((VAR_0->pipestat[VAR_1] & VAR_2) != 0) {
  u32 VAR_3 = FUNC_1(VAR_1);

  VAR_0->pipestat[VAR_1] &= ~VAR_2;
  FUNC_0(VAR_3, VAR_0->pipestat[VAR_1]);
  FUNC_2(VAR_3);
 }
}
