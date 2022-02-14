
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_sdvo {int is_hdmi; } ;
struct edid {int input; } ;
struct drm_connector {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct edid*) ;
 struct intel_sdvo* FUNC_1 (struct drm_connector*) ;
 struct edid* FUNC_2 (struct drm_connector*) ;
 int FUNC_3 (struct edid*) ;

__attribute__((used)) static bool FUNC_4(struct drm_connector *VAR_1)
{
 struct intel_sdvo *VAR_2 = FUNC_1(VAR_1);
 struct edid *VAR_3;
 bool VAR_4 = 0;

 if (!VAR_2->is_hdmi)
  return 0;

 VAR_3 = FUNC_2(VAR_1);
 if (VAR_3 != ((void*)0) && VAR_3->input & VAR_0)
  VAR_4 = FUNC_0(VAR_3);
 FUNC_3(VAR_3);

 return VAR_4;
}
