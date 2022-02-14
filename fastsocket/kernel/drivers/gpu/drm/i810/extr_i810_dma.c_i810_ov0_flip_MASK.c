
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_file {int dummy; } ;
struct drm_device {scalar_t__ dev_private; } ;
struct TYPE_2__ {int overlay_physical; } ;
typedef TYPE_1__ drm_i810_private_t ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (struct drm_device*,struct drm_file*) ;

__attribute__((used)) static int FUNC_2(struct drm_device *VAR_0, void *VAR_1,
    struct drm_file *VAR_2)
{
 drm_i810_private_t *VAR_3 = (drm_i810_private_t *) VAR_0->dev_private;

 FUNC_1(VAR_0, VAR_2);


 FUNC_0(0x30000, VAR_3->overlay_physical | 0x80000000);

 return 0;
}
