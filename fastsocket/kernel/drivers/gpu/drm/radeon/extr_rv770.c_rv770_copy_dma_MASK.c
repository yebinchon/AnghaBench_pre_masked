
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int u32 ;
struct radeon_semaphore {int dummy; } ;
struct radeon_ring {int idx; } ;
struct radeon_fence {int ring; } ;
struct radeon_device {struct radeon_ring* ring; TYPE_2__* asic; } ;
struct TYPE_3__ {int dma_ring_index; } ;
struct TYPE_4__ {TYPE_1__ copy; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,int ,int ,int) ;
 int VAR_0 ;
 int FUNC_2 (char*,int) ;
 unsigned int VAR_1 ;
 int FUNC_3 (struct radeon_device*,struct radeon_fence**,int ) ;
 scalar_t__ FUNC_4 (struct radeon_fence*,int ) ;
 int FUNC_5 (struct radeon_fence*,int ) ;
 int FUNC_6 (struct radeon_device*,struct radeon_ring*,int) ;
 int FUNC_7 (struct radeon_device*,struct radeon_ring*) ;
 int FUNC_8 (struct radeon_device*,struct radeon_ring*) ;
 int FUNC_9 (struct radeon_ring*,int) ;
 int FUNC_10 (struct radeon_device*,struct radeon_semaphore**) ;
 int FUNC_11 (struct radeon_device*,struct radeon_semaphore**,struct radeon_fence*) ;
 int FUNC_12 (struct radeon_device*,struct radeon_semaphore*,int ,int ) ;
 int FUNC_13 (int) ;

int FUNC_14(struct radeon_device *VAR_2,
    uint64_t VAR_3, uint64_t VAR_4,
    unsigned VAR_5,
    struct radeon_fence **VAR_6)
{
 struct radeon_semaphore *VAR_7 = ((void*)0);
 int VAR_8 = VAR_2->asic->copy.dma_ring_index;
 struct radeon_ring *VAR_9 = &VAR_2->ring[VAR_8];
 u32 VAR_10, VAR_11;
 int VAR_12, VAR_13;
 int VAR_14 = 0;

 VAR_14 = FUNC_10(VAR_2, &VAR_7);
 if (VAR_14) {
  FUNC_2("radeon: moving bo (%d).\n", VAR_14);
  return VAR_14;
 }

 VAR_10 = (VAR_5 << VAR_1) / 4;
 VAR_13 = FUNC_0(VAR_10, 0xFFFF);
 VAR_14 = FUNC_6(VAR_2, VAR_9, VAR_13 * 5 + 8);
 if (VAR_14) {
  FUNC_2("radeon: moving bo (%d).\n", VAR_14);
  FUNC_11(VAR_2, &VAR_7, ((void*)0));
  return VAR_14;
 }

 if (FUNC_4(*VAR_6, VAR_9->idx)) {
  FUNC_12(VAR_2, VAR_7, (*VAR_6)->ring,
         VAR_9->idx);
  FUNC_5(*VAR_6, VAR_9->idx);
 } else {
  FUNC_11(VAR_2, &VAR_7, ((void*)0));
 }

 for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12++) {
  VAR_11 = VAR_10;
  if (VAR_11 > 0xFFFF)
   VAR_11 = 0xFFFF;
  VAR_10 -= VAR_11;
  FUNC_9(VAR_9, FUNC_1(VAR_0, 0, 0, VAR_11));
  FUNC_9(VAR_9, VAR_4 & 0xfffffffc);
  FUNC_9(VAR_9, VAR_3 & 0xfffffffc);
  FUNC_9(VAR_9, FUNC_13(VAR_4) & 0xff);
  FUNC_9(VAR_9, FUNC_13(VAR_3) & 0xff);
  VAR_3 += VAR_11 * 4;
  VAR_4 += VAR_11 * 4;
 }

 VAR_14 = FUNC_3(VAR_2, VAR_6, VAR_9->idx);
 if (VAR_14) {
  FUNC_8(VAR_2, VAR_9);
  return VAR_14;
 }

 FUNC_7(VAR_2, VAR_9);
 FUNC_11(VAR_2, &VAR_7, *VAR_6);

 return VAR_14;
}
