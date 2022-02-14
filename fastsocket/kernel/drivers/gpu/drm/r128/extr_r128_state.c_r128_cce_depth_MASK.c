
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct drm_file {int dummy; } ;
struct drm_device {int * dev_private; } ;
typedef int drm_r128_private_t ;
struct TYPE_6__ {int func; } ;
typedef TYPE_1__ drm_r128_depth_t ;


 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (struct drm_device*,struct drm_file*) ;




 int FUNC_3 (int *) ;
 int FUNC_4 (struct drm_device*,TYPE_1__*) ;
 int FUNC_5 (struct drm_device*,TYPE_1__*) ;
 int FUNC_6 (struct drm_device*,TYPE_1__*) ;
 int FUNC_7 (struct drm_device*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_8(struct drm_device *VAR_1, void *VAR_2, struct drm_file *VAR_3)
{
 drm_r128_private_t *VAR_4 = VAR_1->dev_private;
 drm_r128_depth_t *VAR_5 = VAR_2;
 int VAR_6;

 FUNC_2(VAR_1, VAR_3);

 FUNC_1(VAR_4);

 FUNC_3(VAR_4);

 VAR_6 = -VAR_0;
 switch (VAR_5->func) {
 case 128:
  VAR_6 = FUNC_7(VAR_1, VAR_5);
  break;
 case 129:
  VAR_6 = FUNC_6(VAR_1, VAR_5);
  break;
 case 130:
  VAR_6 = FUNC_5(VAR_1, VAR_5);
  break;
 case 131:
  VAR_6 = FUNC_4(VAR_1, VAR_5);
  break;
 }

 FUNC_0();
 return VAR_6;
}
