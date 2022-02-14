
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;
struct TYPE_3__ {int func; } ;
typedef TYPE_1__ drm_i915_init_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 scalar_t__ FUNC_0 (struct drm_device*,int ) ;
 int FUNC_1 (struct drm_device*) ;
 int FUNC_2 (struct drm_device*) ;
 int FUNC_3 (struct drm_device*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(struct drm_device *VAR_3, void *VAR_4,
    struct drm_file *VAR_5)
{
 drm_i915_init_t *VAR_6 = VAR_4;
 int VAR_7 = 0;

 if (FUNC_0(VAR_3, VAR_0))
  return -VAR_2;

 switch (VAR_6->func) {
 case 129:
  VAR_7 = FUNC_3(VAR_3, VAR_6);
  break;
 case 130:
  VAR_7 = FUNC_1(VAR_3);
  break;
 case 128:
  VAR_7 = FUNC_2(VAR_3);
  break;
 default:
  VAR_7 = -VAR_1;
  break;
 }

 return VAR_7;
}
