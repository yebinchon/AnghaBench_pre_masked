
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct drm_device {int dummy; } ;
struct TYPE_4__ {int m; int m1; int m2; int p; int p1; int p2; int vco; int n; int dot; } ;
typedef TYPE_1__ intel_clock_t ;


 scalar_t__ FUNC_0 (struct drm_device*) ;
 int FUNC_1 (int,TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(struct drm_device *VAR_0, int VAR_1, intel_clock_t *VAR_2)
{
 if (FUNC_0(VAR_0)) {
  FUNC_1(VAR_1, VAR_2);
  return;
 }
 VAR_2->m = 5 * (VAR_2->m1 + 2) + (VAR_2->m2 + 2);
 VAR_2->p = VAR_2->p1 * VAR_2->p2;
 VAR_2->vco = VAR_1 * VAR_2->m / (VAR_2->n + 2);
 VAR_2->dot = VAR_2->vco / VAR_2->p;
}
