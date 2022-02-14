
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_file {int dummy; } ;
struct drm_device {int if_version; } ;
struct drm_control {int func; int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;


 int VAR_2 ;
 int FUNC_1 (struct drm_device*,int ) ;
 int FUNC_2 (struct drm_device*) ;
 int FUNC_3 (struct drm_device*) ;
 int FUNC_4 (struct drm_device*) ;

int FUNC_5(struct drm_device *VAR_3, void *VAR_4,
  struct drm_file *VAR_5)
{
 struct drm_control *VAR_6 = VAR_4;






 switch (VAR_6->func) {
 case 129:
  if (!FUNC_1(VAR_3, VAR_0))
   return 0;
  if (FUNC_1(VAR_3, VAR_1))
   return 0;
  if (VAR_3->if_version < FUNC_0(1, 2) &&
      VAR_6->irq != FUNC_2(VAR_3))
   return -VAR_2;
  return FUNC_3(VAR_3);
 case 128:
  if (!FUNC_1(VAR_3, VAR_0))
   return 0;
  if (FUNC_1(VAR_3, VAR_1))
   return 0;
  return FUNC_4(VAR_3);
 default:
  return -VAR_2;
 }
}
