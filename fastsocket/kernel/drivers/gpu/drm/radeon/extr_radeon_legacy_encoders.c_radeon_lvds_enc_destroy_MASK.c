
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_encoder {struct radeon_encoder* enc_priv; } ;
struct drm_encoder {int dummy; } ;


 int FUNC_0 (struct drm_encoder*) ;
 int FUNC_1 (struct radeon_encoder*) ;
 int FUNC_2 (struct radeon_encoder*) ;
 struct radeon_encoder* FUNC_3 (struct drm_encoder*) ;

__attribute__((used)) static void FUNC_4(struct drm_encoder *VAR_0)
{
 struct radeon_encoder *VAR_1 = FUNC_3(VAR_0);

 if (VAR_1->enc_priv) {
  FUNC_2(VAR_1);
  FUNC_1(VAR_1->enc_priv);
 }
 FUNC_0(VAR_0);
 FUNC_1(VAR_1);
}
