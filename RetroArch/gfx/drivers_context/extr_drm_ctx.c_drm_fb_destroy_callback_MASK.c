
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gbm_bo {int dummy; } ;
struct drm_fb {scalar_t__ fb_id; } ;


 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (struct drm_fb*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(struct gbm_bo *VAR_1, void *VAR_2)
{
   struct drm_fb *VAR_3 = (struct drm_fb*)VAR_2;

   if (VAR_3 && VAR_3->fb_id)
      FUNC_0(VAR_0, VAR_3->fb_id);

   FUNC_1(VAR_3);
}
