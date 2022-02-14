
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct drm_display_mode {int clock; } ;
struct TYPE_3__ {int p1; int p2; int n; int m1; int m2; } ;
typedef TYPE_1__ intel_clock_t ;



__attribute__((used)) static void FUNC_0(struct drm_display_mode *VAR_0,
          intel_clock_t *VAR_1)
{


 if (VAR_0->clock >= 100000
     && VAR_0->clock < 140500) {
  VAR_1->p1 = 2;
  VAR_1->p2 = 10;
  VAR_1->n = 3;
  VAR_1->m1 = 16;
  VAR_1->m2 = 8;
 } else if (VAR_0->clock >= 140500
     && VAR_0->clock <= 200000) {
  VAR_1->p1 = 1;
  VAR_1->p2 = 10;
  VAR_1->n = 6;
  VAR_1->m1 = 12;
  VAR_1->m2 = 8;
 }
}
