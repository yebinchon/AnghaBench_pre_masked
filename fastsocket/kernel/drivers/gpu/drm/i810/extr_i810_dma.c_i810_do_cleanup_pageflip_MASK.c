
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_device {TYPE_1__* dev_private; } ;
struct TYPE_2__ {scalar_t__ current_page; scalar_t__ page_flipping; } ;
typedef TYPE_1__ drm_i810_private_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct drm_device*) ;

__attribute__((used)) static int FUNC_2(struct drm_device *VAR_0)
{
 drm_i810_private_t *VAR_1 = VAR_0->dev_private;

 FUNC_0("\n");
 if (VAR_1->current_page != 0)
  FUNC_1(VAR_0);

 VAR_1->page_flipping = 0;
 return 0;
}
