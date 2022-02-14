
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_encoder {int devices; struct radeon_encoder* enc_priv; } ;
struct drm_encoder {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_encoder*) ;
 int FUNC_1 (struct radeon_encoder*) ;
 int FUNC_2 (struct radeon_encoder*) ;
 struct radeon_encoder* FUNC_3 (struct drm_encoder*) ;

void FUNC_4(struct drm_encoder *VAR_1)
{
 struct radeon_encoder *VAR_2 = FUNC_3(VAR_1);
 if (VAR_2->devices & (VAR_0))
  FUNC_2(VAR_2);
 FUNC_1(VAR_2->enc_priv);
 FUNC_0(VAR_1);
 FUNC_1(VAR_2);
}
