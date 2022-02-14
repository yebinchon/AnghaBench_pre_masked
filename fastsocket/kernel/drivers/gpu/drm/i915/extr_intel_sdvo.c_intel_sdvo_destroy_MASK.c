
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_sdvo_connector {scalar_t__ tv_format; } ;
struct drm_connector {int dev; } ;


 int FUNC_0 (struct drm_connector*) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (struct drm_connector*) ;
 int FUNC_3 (struct drm_connector*) ;
 int FUNC_4 (struct intel_sdvo_connector*) ;
 struct intel_sdvo_connector* FUNC_5 (struct drm_connector*) ;

__attribute__((used)) static void FUNC_6(struct drm_connector *VAR_0)
{
 struct intel_sdvo_connector *VAR_1 = FUNC_5(VAR_0);

 if (VAR_1->tv_format)
  FUNC_1(VAR_0->dev,
         VAR_1->tv_format);

 FUNC_3(VAR_0);
 FUNC_2(VAR_0);
 FUNC_0(VAR_0);
 FUNC_4(VAR_1);
}
