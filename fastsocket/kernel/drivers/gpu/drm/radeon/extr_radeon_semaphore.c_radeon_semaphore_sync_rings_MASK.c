
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct radeon_semaphore {int gpu_addr; } ;
struct radeon_device {TYPE_1__* ring; int dev; } ;
struct TYPE_3__ {int last_semaphore_wait_addr; int last_semaphore_signal_addr; int ready; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct radeon_device*,TYPE_1__*,int) ;
 int FUNC_2 (struct radeon_device*,TYPE_1__*) ;
 int FUNC_3 (struct radeon_device*,int,struct radeon_semaphore*) ;
 int FUNC_4 (struct radeon_device*,int,struct radeon_semaphore*) ;

int FUNC_5(struct radeon_device *VAR_1,
    struct radeon_semaphore *VAR_2,
    int VAR_3, int VAR_4)
{
 int VAR_5;


 if (VAR_3 == VAR_4) {
  return 0;
 }


 if (!VAR_1->ring[VAR_3].ready) {
  FUNC_0(VAR_1->dev, "Trying to sync to a disabled ring!");
  return -VAR_0;
 }

 VAR_5 = FUNC_1(VAR_1, &VAR_1->ring[VAR_3], 8);
 if (VAR_5) {
  return VAR_5;
 }
 FUNC_3(VAR_1, VAR_3, VAR_2);
 FUNC_2(VAR_1, &VAR_1->ring[VAR_3]);


 FUNC_4(VAR_1, VAR_4, VAR_2);


 VAR_1->ring[VAR_3].last_semaphore_signal_addr = VAR_2->gpu_addr;
 VAR_1->ring[VAR_4].last_semaphore_wait_addr = VAR_2->gpu_addr;

 return 0;
}
