
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;
struct TYPE_3__ {int func; } ;
typedef TYPE_1__ drm_mga_init_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drm_device*,struct drm_file*) ;


 int FUNC_1 (struct drm_device*,int ) ;
 int FUNC_2 (struct drm_device*,TYPE_1__*) ;

int FUNC_3(struct drm_device *VAR_2, void *VAR_3,
   struct drm_file *VAR_4)
{
 drm_mga_init_t *VAR_5 = VAR_3;
 int VAR_6;

 FUNC_0(VAR_2, VAR_4);

 switch (VAR_5->func) {
 case 128:
  VAR_6 = FUNC_2(VAR_2, VAR_5);
  if (VAR_6)
   (void)FUNC_1(VAR_2, VAR_1);
  return VAR_6;
 case 129:
  return FUNC_1(VAR_2, VAR_1);
 }

 return -VAR_0;
}
