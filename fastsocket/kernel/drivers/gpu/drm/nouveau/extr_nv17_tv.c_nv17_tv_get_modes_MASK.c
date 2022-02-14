
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nv17_tv_norm_params {scalar_t__ kind; } ;
struct drm_encoder {int dummy; } ;
struct drm_connector {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct nv17_tv_norm_params* FUNC_0 (struct drm_encoder*) ;
 int FUNC_1 (struct drm_encoder*,struct drm_connector*) ;
 int FUNC_2 (struct drm_encoder*,struct drm_connector*) ;

__attribute__((used)) static int FUNC_3(struct drm_encoder *VAR_1,
        struct drm_connector *VAR_2)
{
 struct nv17_tv_norm_params *VAR_3 = FUNC_0(VAR_1);

 if (VAR_3->kind == VAR_0)
  return FUNC_1(VAR_1, VAR_2);
 else
  return FUNC_2(VAR_1, VAR_2);
}
