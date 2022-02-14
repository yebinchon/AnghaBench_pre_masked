
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_file {int dummy; } ;
struct drm_device {TYPE_1__* dev_private; } ;
struct TYPE_2__ {int page_flipping; } ;
typedef TYPE_1__ drm_i810_private_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct drm_device*,struct drm_file*) ;
 int FUNC_2 (struct drm_device*) ;
 int FUNC_3 (struct drm_device*) ;

__attribute__((used)) static int FUNC_4(struct drm_device *VAR_0, void *VAR_1,
     struct drm_file *VAR_2)
{
 drm_i810_private_t *VAR_3 = VAR_0->dev_private;

 FUNC_0("\n");

 FUNC_1(VAR_0, VAR_2);

 if (!VAR_3->page_flipping)
  FUNC_3(VAR_0);

 FUNC_2(VAR_0);
 return 0;
}
