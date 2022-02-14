
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct drm_device {scalar_t__ dev_private; } ;
struct TYPE_4__ {int * virtual_start; int map; } ;
struct TYPE_5__ {TYPE_1__ ring; } ;
typedef TYPE_2__ drm_via_private_t ;


 int FUNC_0 (int *,struct drm_device*) ;
 int FUNC_1 (TYPE_2__*) ;

int FUNC_2(struct drm_device *VAR_0)
{
 if (VAR_0->dev_private) {
  drm_via_private_t *VAR_1 =
      (drm_via_private_t *) VAR_0->dev_private;

  if (VAR_1->ring.virtual_start) {
   FUNC_1(VAR_1);

   FUNC_0(&VAR_1->ring.map, VAR_0);
   VAR_1->ring.virtual_start = ((void*)0);
  }

 }

 return 0;
}
