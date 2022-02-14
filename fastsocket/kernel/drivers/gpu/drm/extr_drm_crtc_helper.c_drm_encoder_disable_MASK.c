
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_encoder_helper_funcs {int (* dpms ) (struct drm_encoder*,int ) ;int (* disable ) (struct drm_encoder*) ;} ;
struct drm_encoder {struct drm_encoder_helper_funcs* helper_private; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_encoder*) ;
 int FUNC_1 (struct drm_encoder*,int ) ;

__attribute__((used)) static void
FUNC_2(struct drm_encoder *VAR_1)
{
 struct drm_encoder_helper_funcs *VAR_2 = VAR_1->helper_private;

 if (VAR_2->disable)
  (*VAR_2->disable)(VAR_1);
 else
  (*VAR_2->dpms)(VAR_1, VAR_0);
}
