
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_device {TYPE_2__* dev_private; } ;
struct TYPE_4__ {TYPE_1__* mtrr; } ;
typedef TYPE_2__ drm_savage_private_t ;
struct TYPE_3__ {scalar_t__ handle; int size; int base; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ,int ,int ) ;

void FUNC_1(struct drm_device *VAR_1)
{
 drm_savage_private_t *VAR_2 = VAR_1->dev_private;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < 3; ++VAR_3)
  if (VAR_2->mtrr[VAR_3].handle >= 0)
   FUNC_0(VAR_2->mtrr[VAR_3].handle,
     VAR_2->mtrr[VAR_3].base,
     VAR_2->mtrr[VAR_3].size, VAR_0);
}
