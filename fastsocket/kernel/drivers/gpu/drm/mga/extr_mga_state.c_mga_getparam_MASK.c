
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_file {int dummy; } ;
struct drm_device {TYPE_1__* dev_private; } ;
struct TYPE_3__ {int chipset; } ;
typedef TYPE_1__ drm_mga_private_t ;
struct TYPE_4__ {int param; int value; } ;
typedef TYPE_2__ drm_mga_getparam_t ;


 scalar_t__ FUNC_0 (int ,int*,int) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*) ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_3 (struct drm_device*) ;

__attribute__((used)) static int FUNC_4(struct drm_device *VAR_3, void *VAR_4, struct drm_file *VAR_5)
{
 drm_mga_private_t *VAR_6 = VAR_3->dev_private;
 drm_mga_getparam_t *VAR_7 = VAR_4;
 int VAR_8;

 if (!VAR_6) {
  FUNC_2("called with no initialization\n");
  return -VAR_2;
 }

 FUNC_1("pid=%d\n", VAR_0);

 switch (VAR_7->param) {
 case 128:
  VAR_8 = FUNC_3(VAR_3);
  break;
 case 129:
  VAR_8 = VAR_6->chipset;
  break;
 default:
  return -VAR_2;
 }

 if (FUNC_0(VAR_7->value, &VAR_8, sizeof(int))) {
  FUNC_2("copy_to_user\n");
  return -VAR_1;
 }

 return 0;
}
