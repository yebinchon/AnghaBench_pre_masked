
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_dp {int adapter; } ;
struct edid {int dummy; } ;
struct drm_connector {int dummy; } ;


 int FUNC_0 (struct edid*) ;
 struct intel_dp* FUNC_1 (struct drm_connector*) ;
 struct edid* FUNC_2 (struct drm_connector*,int *) ;
 int FUNC_3 (struct edid*) ;

__attribute__((used)) static bool
FUNC_4(struct drm_connector *VAR_0)
{
 struct intel_dp *VAR_1 = FUNC_1(VAR_0);
 struct edid *VAR_2;
 bool VAR_3 = 0;

 VAR_2 = FUNC_2(VAR_0, &VAR_1->adapter);
 if (VAR_2) {
  VAR_3 = FUNC_0(VAR_2);
  FUNC_3(VAR_2);
 }

 return VAR_3;
}
