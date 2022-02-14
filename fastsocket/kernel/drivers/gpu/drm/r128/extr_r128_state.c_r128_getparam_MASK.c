
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_file {int dummy; } ;
struct drm_device {int * dev_private; } ;
typedef int drm_r128_private_t ;
struct TYPE_2__ {int param; int value; } ;
typedef TYPE_1__ drm_r128_getparam_t ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,int*,int) ;
 int VAR_0 ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*) ;
 int VAR_1 ;
 int VAR_2 ;

 int FUNC_4 (struct drm_device*) ;

__attribute__((used)) static int FUNC_5(struct drm_device *VAR_3, void *VAR_4, struct drm_file *VAR_5)
{
 drm_r128_private_t *VAR_6 = VAR_3->dev_private;
 drm_r128_getparam_t *VAR_7 = VAR_4;
 int VAR_8;

 FUNC_0(VAR_6);

 FUNC_2("pid=%d\n", VAR_0);

 switch (VAR_7->param) {
 case 128:
  VAR_8 = FUNC_4(VAR_3);
  break;
 default:
  return -VAR_2;
 }

 if (FUNC_1(VAR_7->value, &VAR_8, sizeof(int))) {
  FUNC_3("copy_to_user\n");
  return -VAR_1;
 }

 return 0;
}
