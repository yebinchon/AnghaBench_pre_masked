
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef scalar_t__ u64 ;
struct radeon_device {int ring_lock; TYPE_2__* ring; TYPE_1__* fence_drv; int dev; int ddev; int fence_queue; } ;
struct TYPE_4__ {int ready; } ;
struct TYPE_3__ {unsigned long last_activity; int last_seq; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,scalar_t__,scalar_t__) ;
 unsigned long VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct radeon_device*,scalar_t__,unsigned int) ;
 int FUNC_5 (struct radeon_device*,unsigned int) ;
 int FUNC_6 (struct radeon_device*,unsigned int) ;
 scalar_t__ FUNC_7 (struct radeon_device*,unsigned int,TYPE_2__*) ;
 scalar_t__ FUNC_8 (unsigned long,unsigned long) ;
 int FUNC_9 (int ,scalar_t__) ;
 int FUNC_10 (int ,scalar_t__) ;
 scalar_t__ FUNC_11 (int) ;
 int FUNC_12 (int ,int,unsigned long) ;
 int FUNC_13 (int ,int,unsigned long) ;

__attribute__((used)) static int FUNC_14(struct radeon_device *VAR_5, u64 VAR_6,
     unsigned VAR_7, bool VAR_8, bool VAR_9)
{
 unsigned long VAR_10, VAR_11;
 uint64_t VAR_12;
 unsigned VAR_13;
 bool VAR_14;
 int VAR_15;

 while (VAR_6 > FUNC_0(&VAR_5->fence_drv[VAR_7].last_seq)) {
  if (!VAR_5->ring[VAR_7].ready) {
   return -VAR_0;
  }

  VAR_10 = VAR_4 - VAR_2;
  if (FUNC_8(VAR_5->fence_drv[VAR_7].last_activity, VAR_10)) {

   VAR_10 = VAR_5->fence_drv[VAR_7].last_activity - VAR_10;
  } else {



   VAR_10 = 1;
  }
  VAR_12 = FUNC_0(&VAR_5->fence_drv[VAR_7].last_seq);

  VAR_11 = VAR_5->fence_drv[VAR_7].last_activity;

  FUNC_9(VAR_5->ddev, VAR_12);
  FUNC_5(VAR_5, VAR_7);
  if (VAR_8) {
   VAR_15 = FUNC_12(VAR_5->fence_queue,
    (VAR_14 = FUNC_4(VAR_5, VAR_6, VAR_7)),
    VAR_10);
                } else {
   VAR_15 = FUNC_13(VAR_5->fence_queue,
    (VAR_14 = FUNC_4(VAR_5, VAR_6, VAR_7)),
    VAR_10);
  }
  FUNC_6(VAR_5, VAR_7);
  if (FUNC_11(VAR_15 < 0)) {
   return VAR_15;
  }
  FUNC_10(VAR_5->ddev, VAR_12);

  if (FUNC_11(!VAR_14)) {


   if (VAR_15) {
    continue;
   }


   if (VAR_12 != FUNC_0(&VAR_5->fence_drv[VAR_7].last_seq)) {
    continue;
   }

   if (VAR_9) {
    FUNC_2(&VAR_5->ring_lock);
   }


   if (VAR_11 != VAR_5->fence_drv[VAR_7].last_activity) {
    if (VAR_9) {
     FUNC_3(&VAR_5->ring_lock);
    }
    continue;
   }

   if (FUNC_7(VAR_5, VAR_7, &VAR_5->ring[VAR_7])) {

    FUNC_1(VAR_5->dev, "GPU lockup (waiting for 0x%016llx last fence id 0x%016llx)\n",
      VAR_6, VAR_12);


    for (VAR_13 = 0; VAR_13 < VAR_3; ++VAR_13) {
     VAR_5->fence_drv[VAR_13].last_activity = VAR_4;
    }


    VAR_5->ring[VAR_7].ready = 0;
    if (VAR_9) {
     FUNC_3(&VAR_5->ring_lock);
    }
    return -VAR_1;
   }

   if (VAR_9) {
    FUNC_3(&VAR_5->ring_lock);
   }
  }
 }
 return 0;
}
