
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct drm_crtc {int dummy; } ;
typedef int intel_limit_t ;
struct TYPE_6__ {int p1; int p2; int n; int m1; int m2; int m; int p; int dot; scalar_t__ vco; } ;
typedef TYPE_1__ intel_clock_t ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*,int) ;

__attribute__((used)) static bool
FUNC_1(const intel_limit_t *VAR_0, struct drm_crtc *VAR_1,
        int VAR_2, int VAR_3, intel_clock_t *VAR_4,
        intel_clock_t *VAR_5)
{
 intel_clock_t VAR_6;
 if (VAR_2 < 200000) {
  VAR_6.p1 = 2;
  VAR_6.p2 = 10;
  VAR_6.n = 2;
  VAR_6.m1 = 23;
  VAR_6.m2 = 8;
 } else {
  VAR_6.p1 = 1;
  VAR_6.p2 = 10;
  VAR_6.n = 1;
  VAR_6.m1 = 14;
  VAR_6.m2 = 2;
 }
 VAR_6.m = 5 * (VAR_6.m1 + 2) + (VAR_6.m2 + 2);
 VAR_6.p = (VAR_6.p1 * VAR_6.p2);
 VAR_6.dot = 96000 * VAR_6.m / (VAR_6.n + 2) / VAR_6.p;
 VAR_6.vco = 0;
 FUNC_0(VAR_5, &VAR_6, sizeof(intel_clock_t));
 return 1;
}
