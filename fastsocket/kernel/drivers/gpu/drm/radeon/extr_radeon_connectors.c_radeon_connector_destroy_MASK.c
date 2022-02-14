
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_connector {struct drm_connector* con_priv; struct drm_connector* edid; } ;
struct drm_connector {int dummy; } ;


 int FUNC_0 (struct drm_connector*) ;
 int FUNC_1 (struct drm_connector*) ;
 int FUNC_2 (struct drm_connector*) ;
 struct radeon_connector* FUNC_3 (struct drm_connector*) ;

__attribute__((used)) static void FUNC_4(struct drm_connector *VAR_0)
{
 struct radeon_connector *VAR_1 = FUNC_3(VAR_0);

 if (VAR_1->edid)
  FUNC_2(VAR_1->edid);
 FUNC_2(VAR_1->con_priv);
 FUNC_1(VAR_0);
 FUNC_0(VAR_0);
 FUNC_2(VAR_0);
}
