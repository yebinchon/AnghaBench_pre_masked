
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_encoder {scalar_t__ active_device; } ;
struct drm_encoder_helper_funcs {int (* dpms ) (struct drm_encoder*,int ) ;} ;
struct drm_encoder {struct drm_encoder_helper_funcs* helper_private; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_encoder*,int ) ;
 struct radeon_encoder* FUNC_1 (struct drm_encoder*) ;

__attribute__((used)) static void FUNC_2(struct drm_encoder *VAR_1)
{
 struct radeon_encoder *VAR_2 = FUNC_1(VAR_1);
 struct drm_encoder_helper_funcs *VAR_3;

 VAR_3 = VAR_1->helper_private;
 VAR_3->dpms(VAR_1, VAR_0);
 VAR_2->active_device = 0;
}
