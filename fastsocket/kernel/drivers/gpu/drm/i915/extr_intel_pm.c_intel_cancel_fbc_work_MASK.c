
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_i915_private {TYPE_1__* fbc_work; } ;
struct TYPE_2__ {int work; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(struct drm_i915_private *VAR_0)
{
 if (VAR_0->fbc_work == ((void*)0))
  return;

 FUNC_0("cancelling pending FBC enable\n");





 if (FUNC_1(&VAR_0->fbc_work->work))

  FUNC_2(VAR_0->fbc_work);






 VAR_0->fbc_work = ((void*)0);
}
