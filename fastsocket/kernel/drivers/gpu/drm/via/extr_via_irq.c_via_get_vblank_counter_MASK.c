
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct drm_device {TYPE_1__* dev_private; } ;
struct TYPE_2__ {int vbl_received; } ;
typedef TYPE_1__ drm_via_private_t ;


 int FUNC_0 (int *) ;

u32 FUNC_1(struct drm_device *VAR_0, int VAR_1)
{
 drm_via_private_t *VAR_2 = VAR_0->dev_private;
 if (VAR_1 != 0)
  return 0;

 return FUNC_0(&VAR_2->vbl_received);
}
