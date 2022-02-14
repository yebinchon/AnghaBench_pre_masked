
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct drm_file {int dummy; } ;
struct drm_device {TYPE_1__* dev_private; } ;
struct TYPE_4__ {int page_flipping; } ;
typedef TYPE_1__ drm_r128_private_t ;


 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct drm_device*,struct drm_file*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (struct drm_device*) ;
 int FUNC_6 (struct drm_device*) ;

__attribute__((used)) static int FUNC_7(struct drm_device *VAR_0, void *VAR_1, struct drm_file *VAR_2)
{
 drm_r128_private_t *VAR_3 = VAR_0->dev_private;
 FUNC_2("\n");

 FUNC_3(VAR_0, VAR_2);

 FUNC_1(VAR_3);

 FUNC_4(VAR_3);

 if (!VAR_3->page_flipping)
  FUNC_6(VAR_0);

 FUNC_5(VAR_0);

 FUNC_0();
 return 0;
}
