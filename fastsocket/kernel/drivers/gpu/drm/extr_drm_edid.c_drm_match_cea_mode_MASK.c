
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct drm_display_mode {int dummy; } ;


 size_t FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct drm_display_mode const*,struct drm_display_mode*) ;
 int * VAR_0 ;

u8 FUNC_2(const struct drm_display_mode *VAR_1)
{
 struct drm_display_mode *VAR_2;
 u8 VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++) {
  VAR_2 = (struct drm_display_mode *)&VAR_0[VAR_3];

  if (FUNC_1(VAR_1, VAR_2))
   return VAR_3 + 1;
 }
 return 0;
}
