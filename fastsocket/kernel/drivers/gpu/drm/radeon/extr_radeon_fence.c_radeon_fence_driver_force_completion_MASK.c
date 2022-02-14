
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct radeon_device {TYPE_1__* fence_drv; } ;
struct TYPE_2__ {int * sync_seq; int initialized; } ;


 int VAR_0 ;
 int FUNC_0 (struct radeon_device*,int ,int) ;

void FUNC_1(struct radeon_device *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  if (!VAR_1->fence_drv[VAR_2].initialized)
   continue;
  FUNC_0(VAR_1, VAR_1->fence_drv[VAR_2].sync_seq[VAR_2], VAR_2);
 }
}
