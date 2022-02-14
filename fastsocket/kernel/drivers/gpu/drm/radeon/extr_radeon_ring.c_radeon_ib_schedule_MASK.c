
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct radeon_ring {int ready; } ;
struct radeon_ib {size_t ring; void* fence; TYPE_1__* vm; int semaphore; struct radeon_fence** sync_to; int length_dw; } ;
struct radeon_fence {int ring; } ;
struct radeon_device {int dev; struct radeon_ring* ring; } ;
struct TYPE_2__ {void* last_flush; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct radeon_device*,void**,size_t) ;
 scalar_t__ FUNC_2 (struct radeon_fence*,size_t) ;
 int FUNC_3 (struct radeon_fence*,size_t) ;
 void* FUNC_4 (void*) ;
 int FUNC_5 (struct radeon_device*,size_t,struct radeon_ib*) ;
 int FUNC_6 (struct radeon_device*,struct radeon_ring*,int) ;
 int FUNC_7 (struct radeon_device*,struct radeon_ring*) ;
 int FUNC_8 (struct radeon_device*,struct radeon_ring*) ;
 int FUNC_9 (struct radeon_device*,size_t,TYPE_1__*) ;
 int FUNC_10 (struct radeon_device*,int *,int *) ;
 int FUNC_11 (struct radeon_device*,int ,int ,size_t) ;

int FUNC_12(struct radeon_device *VAR_2, struct radeon_ib *VAR_3,
         struct radeon_ib *VAR_4)
{
 struct radeon_ring *VAR_5 = &VAR_2->ring[VAR_3->ring];
 bool VAR_6 = 0;
 int VAR_7, VAR_8 = 0;

 if (!VAR_3->length_dw || !VAR_5->ready) {

  FUNC_0(VAR_2->dev, "couldn't schedule ib\n");
  return -VAR_0;
 }


 VAR_8 = FUNC_6(VAR_2, VAR_5, 64 + VAR_1 * 8);
 if (VAR_8) {
  FUNC_0(VAR_2->dev, "scheduling IB failed (%d).\n", VAR_8);
  return VAR_8;
 }
 for (VAR_7 = 0; VAR_7 < VAR_1; ++VAR_7) {
  struct radeon_fence *VAR_9 = VAR_3->sync_to[VAR_7];
  if (FUNC_2(VAR_9, VAR_3->ring)) {
   VAR_6 = 1;
   FUNC_11(VAR_2, VAR_3->semaphore,
          VAR_9->ring, VAR_3->ring);
   FUNC_3(VAR_9, VAR_3->ring);
  }
 }

 if (!VAR_6) {
  FUNC_10(VAR_2, &VAR_3->semaphore, ((void*)0));
 }


 if (VAR_3->vm ) {
  FUNC_9(VAR_2, VAR_3->ring, VAR_3->vm);
 }
 if (VAR_4) {
  FUNC_5(VAR_2, VAR_4->ring, VAR_4);
  FUNC_10(VAR_2, &VAR_4->semaphore, ((void*)0));
 }
 FUNC_5(VAR_2, VAR_3->ring, VAR_3);
 VAR_8 = FUNC_1(VAR_2, &VAR_3->fence, VAR_3->ring);
 if (VAR_8) {
  FUNC_0(VAR_2->dev, "failed to emit fence for new IB (%d)\n", VAR_8);
  FUNC_8(VAR_2, VAR_5);
  return VAR_8;
 }
 if (VAR_4) {
  VAR_4->fence = FUNC_4(VAR_3->fence);
 }

 if (VAR_3->vm && !VAR_3->vm->last_flush) {
  VAR_3->vm->last_flush = FUNC_4(VAR_3->fence);
 }
 FUNC_7(VAR_2, VAR_5);
 return 0;
}
