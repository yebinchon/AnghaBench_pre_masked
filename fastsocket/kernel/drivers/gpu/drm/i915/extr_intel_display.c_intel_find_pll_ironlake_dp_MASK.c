
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct drm_device {int dummy; } ;
struct drm_crtc {struct drm_device* dev; } ;
typedef int intel_limit_t ;
struct TYPE_7__ {int n; int p1; int p2; int m1; int m2; } ;
typedef TYPE_1__ intel_clock_t ;


 int FUNC_0 (struct drm_device*,int,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*,int) ;

__attribute__((used)) static bool
FUNC_2(const intel_limit_t *VAR_0, struct drm_crtc *VAR_1,
      int VAR_2, int VAR_3, intel_clock_t *VAR_4,
      intel_clock_t *VAR_5)
{
 struct drm_device *VAR_6 = VAR_1->dev;
 intel_clock_t VAR_7;

 if (VAR_2 < 200000) {
  VAR_7.n = 1;
  VAR_7.p1 = 2;
  VAR_7.p2 = 10;
  VAR_7.m1 = 12;
  VAR_7.m2 = 9;
 } else {
  VAR_7.n = 2;
  VAR_7.p1 = 1;
  VAR_7.p2 = 10;
  VAR_7.m1 = 14;
  VAR_7.m2 = 8;
 }
 FUNC_0(VAR_6, VAR_3, &VAR_7);
 FUNC_1(VAR_5, &VAR_7, sizeof(intel_clock_t));
 return 1;
}
