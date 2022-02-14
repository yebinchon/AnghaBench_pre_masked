
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_display_mode {int base; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct drm_device*,int *,int ) ;
 int FUNC_1 (struct drm_display_mode*) ;
 struct drm_display_mode* FUNC_2 (int,int ) ;

struct drm_display_mode *FUNC_3(struct drm_device *VAR_2)
{
 struct drm_display_mode *VAR_3;

 VAR_3 = FUNC_2(sizeof(struct drm_display_mode), VAR_1);
 if (!VAR_3)
  return ((void*)0);

 if (FUNC_0(VAR_2, &VAR_3->base, VAR_0)) {
  FUNC_1(VAR_3);
  return ((void*)0);
 }

 return VAR_3;
}
