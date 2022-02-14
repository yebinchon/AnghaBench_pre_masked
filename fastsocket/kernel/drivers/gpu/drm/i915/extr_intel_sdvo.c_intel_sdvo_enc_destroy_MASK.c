
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_sdvo {int ddc; int * sdvo_lvds_fixed_mode; } ;
struct drm_encoder {int dev; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct drm_encoder*) ;
 struct intel_sdvo* FUNC_3 (struct drm_encoder*) ;

__attribute__((used)) static void FUNC_4(struct drm_encoder *VAR_0)
{
 struct intel_sdvo *VAR_1 = FUNC_3(VAR_0);

 if (VAR_1->sdvo_lvds_fixed_mode != ((void*)0))
  FUNC_0(VAR_0->dev,
     VAR_1->sdvo_lvds_fixed_mode);

 FUNC_1(&VAR_1->ddc);
 FUNC_2(VAR_0);
}
