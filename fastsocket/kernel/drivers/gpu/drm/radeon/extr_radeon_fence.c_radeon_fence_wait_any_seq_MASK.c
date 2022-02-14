
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct radeon_device {int ring_lock; TYPE_2__* ring; TYPE_1__* fence_drv; int dev; int ddev; int fence_queue; } ;
struct TYPE_4__ {int ready; } ;
struct TYPE_3__ {unsigned long last_activity; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int ,char*,scalar_t__) ;
 unsigned long VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct radeon_device*,scalar_t__*) ;
 int FUNC_4 (struct radeon_device*,unsigned int) ;
 int FUNC_5 (struct radeon_device*,unsigned int) ;
 scalar_t__ FUNC_6 (struct radeon_device*,unsigned int,TYPE_2__*) ;
 scalar_t__ FUNC_7 (unsigned long,unsigned long) ;
 int FUNC_8 (int ,scalar_t__) ;
 int FUNC_9 (int ,scalar_t__) ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (int ,int,unsigned long) ;
 int FUNC_12 (int ,int,unsigned long) ;

__attribute__((used)) static int FUNC_13(struct radeon_device *VAR_5,
         u64 *VAR_6, bool VAR_7)
{
 unsigned long VAR_8, VAR_9, VAR_10;
 unsigned VAR_11, VAR_12 = VAR_3;
 bool VAR_13;
 int VAR_14;

 for (VAR_11 = 0, VAR_9 = 0; VAR_11 < VAR_3; ++VAR_11) {
  if (!VAR_6[VAR_11]) {
   continue;
  }


  if (FUNC_7(VAR_5->fence_drv[VAR_11].last_activity, VAR_9)) {
   VAR_9 = VAR_5->fence_drv[VAR_11].last_activity;
  }




  if (VAR_11 < VAR_12) {
   VAR_12 = VAR_11;
  }
 }


 if (VAR_12 == VAR_3) {
  return -VAR_1;
 }

 while (!FUNC_3(VAR_5, VAR_6)) {
  VAR_8 = VAR_4 - VAR_2;
  if (FUNC_7(VAR_9, VAR_8)) {

   VAR_8 = VAR_9 - VAR_8;
  } else {



   VAR_8 = 1;
  }

  FUNC_8(VAR_5->ddev, VAR_6[VAR_12]);
  for (VAR_11 = 0; VAR_11 < VAR_3; ++VAR_11) {
   if (VAR_6[VAR_11]) {
    FUNC_4(VAR_5, VAR_11);
   }
  }
  if (VAR_7) {
   VAR_14 = FUNC_11(VAR_5->fence_queue,
    (VAR_13 = FUNC_3(VAR_5, VAR_6)),
    VAR_8);
  } else {
   VAR_14 = FUNC_12(VAR_5->fence_queue,
    (VAR_13 = FUNC_3(VAR_5, VAR_6)),
    VAR_8);
  }
  for (VAR_11 = 0; VAR_11 < VAR_3; ++VAR_11) {
   if (VAR_6[VAR_11]) {
    FUNC_5(VAR_5, VAR_11);
   }
  }
  if (FUNC_10(VAR_14 < 0)) {
   return VAR_14;
  }
  FUNC_9(VAR_5->ddev, VAR_6[VAR_12]);

  if (FUNC_10(!VAR_13)) {


   if (VAR_14) {
    continue;
   }

   FUNC_1(&VAR_5->ring_lock);
   for (VAR_11 = 0, VAR_10 = 0; VAR_11 < VAR_3; ++VAR_11) {
    if (FUNC_7(VAR_5->fence_drv[VAR_11].last_activity, VAR_10)) {
     VAR_10 = VAR_5->fence_drv[VAR_11].last_activity;
    }
   }

   if (VAR_9 != VAR_10) {
    VAR_9 = VAR_10;
    FUNC_2(&VAR_5->ring_lock);
    continue;
   }

   if (FUNC_6(VAR_5, VAR_12, &VAR_5->ring[VAR_12])) {

    FUNC_0(VAR_5->dev, "GPU lockup (waiting for 0x%016llx)\n",
      VAR_6[VAR_12]);


    for (VAR_11 = 0; VAR_11 < VAR_3; ++VAR_11) {
     VAR_5->fence_drv[VAR_11].last_activity = VAR_4;
    }


    VAR_5->ring[VAR_12].ready = 0;
    FUNC_2(&VAR_5->ring_lock);
    return -VAR_0;
   }
   FUNC_2(&VAR_5->ring_lock);
  }
 }
 return 0;
}
