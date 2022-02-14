
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct drm_device {scalar_t__ dev_private; } ;
struct TYPE_2__ {int vbl_received; } ;
typedef TYPE_1__ drm_mga_private_t ;


 int FUNC_0 (int *) ;

u32 FUNC_1(struct drm_device *VAR_0, int VAR_1)
{
 const drm_mga_private_t *const VAR_2 =
  (drm_mga_private_t *) VAR_0->dev_private;

 if (VAR_1 != 0)
  return 0;

 return FUNC_0(&VAR_2->vbl_received);
}
