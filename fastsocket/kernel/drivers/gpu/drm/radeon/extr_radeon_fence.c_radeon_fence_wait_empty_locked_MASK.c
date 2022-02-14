
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct radeon_device {int dev; TYPE_1__* fence_drv; } ;
struct TYPE_2__ {int * sync_seq; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (struct radeon_device*,int ,int,int,int) ;

int FUNC_2(struct radeon_device *VAR_1, int VAR_2)
{
 uint64_t VAR_3 = VAR_1->fence_drv[VAR_2].sync_seq[VAR_2];
 int VAR_4;

 VAR_4 = FUNC_1(VAR_1, VAR_3, VAR_2, 0, 0);
 if (VAR_4) {
  if (VAR_4 == -VAR_0) {
   return -VAR_0;
  }
  FUNC_0(VAR_1->dev, "error waiting for ring[%d] to become idle (%d)\n",
   VAR_2, VAR_4);
 }
 return 0;
}
