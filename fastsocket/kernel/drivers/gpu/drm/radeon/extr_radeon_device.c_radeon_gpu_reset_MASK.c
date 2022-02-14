
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int bdev; } ;
struct radeon_device {int exclusive_lock; int dev; TYPE_1__ mman; int ddev; int * ring; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct radeon_device*) ;
 int FUNC_6 (struct radeon_device*) ;
 int FUNC_7 (struct radeon_device*) ;
 int FUNC_8 (struct radeon_device*) ;
 int FUNC_9 (struct radeon_device*) ;
 unsigned int FUNC_10 (struct radeon_device*,int *,int **) ;
 int FUNC_11 (struct radeon_device*,int *,unsigned int,int *) ;
 int FUNC_12 (struct radeon_device*) ;
 int FUNC_13 (struct radeon_device*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,int) ;
 int FUNC_16 (int *) ;

int FUNC_17(struct radeon_device *VAR_1)
{
 unsigned VAR_2[VAR_0];
 uint32_t *VAR_3[VAR_0];

 bool VAR_4 = 0;

 int VAR_5, VAR_6;
 int VAR_7;

 FUNC_2(&VAR_1->exclusive_lock);
 FUNC_12(VAR_1);

 VAR_7 = FUNC_14(&VAR_1->mman.bdev);
 FUNC_13(VAR_1);

 for (VAR_5 = 0; VAR_5 < VAR_0; ++VAR_5) {
  VAR_2[VAR_5] = FUNC_10(VAR_1, &VAR_1->ring[VAR_5],
         &VAR_3[VAR_5]);
  if (VAR_2[VAR_5]) {
   VAR_4 = 1;
   FUNC_1(VAR_1->dev, "Saved %d dwords of commands "
     "on ring %d.\n", VAR_2[VAR_5], VAR_5);
  }
 }

retry:
 VAR_6 = FUNC_5(VAR_1);
 if (!VAR_6) {
  FUNC_1(VAR_1->dev, "GPU reset succeeded, trying to resume\n");
  FUNC_9(VAR_1);
 }

 FUNC_8(VAR_1);

 if (!VAR_6) {
  for (VAR_5 = 0; VAR_5 < VAR_0; ++VAR_5) {
   FUNC_11(VAR_1, &VAR_1->ring[VAR_5],
         VAR_2[VAR_5], VAR_3[VAR_5]);
   VAR_2[VAR_5] = 0;
   VAR_3[VAR_5] = ((void*)0);
  }

  VAR_6 = FUNC_7(VAR_1);
  if (VAR_6) {
   FUNC_0(VAR_1->dev, "ib ring test failed (%d).\n", VAR_6);
   if (VAR_4) {
    VAR_4 = 0;
    FUNC_13(VAR_1);
    goto retry;
   }
  }
 } else {
  FUNC_6(VAR_1);
  for (VAR_5 = 0; VAR_5 < VAR_0; ++VAR_5) {
   FUNC_4(VAR_3[VAR_5]);
  }
 }

 FUNC_3(VAR_1->ddev);

 FUNC_15(&VAR_1->mman.bdev, VAR_7);
 if (VAR_6) {

  FUNC_1(VAR_1->dev, "GPU reset failed\n");
 }

 FUNC_16(&VAR_1->exclusive_lock);
 return VAR_6;
}
