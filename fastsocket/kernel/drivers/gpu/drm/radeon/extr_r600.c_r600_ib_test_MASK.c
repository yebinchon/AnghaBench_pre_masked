
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct radeon_ring {int idx; } ;
struct radeon_ib {int* ptr; int length_dw; TYPE_1__* fence; } ;
struct radeon_device {unsigned int usec_timeout; } ;
struct TYPE_2__ {int ring; } ;


 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (char*,int ,unsigned int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int FUNC_3 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (struct radeon_device*,struct radeon_ib*) ;
 int FUNC_8 (struct radeon_device*,int ,struct radeon_ib*,int *,int) ;
 int FUNC_9 (struct radeon_device*,struct radeon_ib*,int *) ;
 int FUNC_10 (struct radeon_device*,int) ;
 int FUNC_11 (struct radeon_device*,int*) ;

int FUNC_12(struct radeon_device *VAR_3, struct radeon_ring *VAR_4)
{
 struct radeon_ib VAR_5;
 uint32_t VAR_6;
 uint32_t VAR_7 = 0;
 unsigned VAR_8;
 int VAR_9;

 VAR_9 = FUNC_11(VAR_3, &VAR_6);
 if (VAR_9) {
  FUNC_0("radeon: failed to get scratch reg (%d).\n", VAR_9);
  return VAR_9;
 }
 FUNC_5(VAR_6, 0xCAFEDEAD);
 VAR_9 = FUNC_8(VAR_3, VAR_4->idx, &VAR_5, ((void*)0), 256);
 if (VAR_9) {
  FUNC_0("radeon: failed to get ib (%d).\n", VAR_9);
  goto free_scratch;
 }
 VAR_5.ptr[0] = FUNC_3(VAR_1, 1);
 VAR_5.ptr[1] = ((VAR_6 - VAR_2) >> 2);
 VAR_5.ptr[2] = 0xDEADBEEF;
 VAR_5.length_dw = 3;
 VAR_9 = FUNC_9(VAR_3, &VAR_5, ((void*)0));
 if (VAR_9) {
  FUNC_0("radeon: failed to schedule ib (%d).\n", VAR_9);
  goto free_ib;
 }
 VAR_9 = FUNC_6(VAR_5.fence, 0);
 if (VAR_9) {
  FUNC_0("radeon: fence wait failed (%d).\n", VAR_9);
  goto free_ib;
 }
 for (VAR_8 = 0; VAR_8 < VAR_3->usec_timeout; VAR_8++) {
  VAR_7 = FUNC_4(VAR_6);
  if (VAR_7 == 0xDEADBEEF)
   break;
  FUNC_2(1);
 }
 if (VAR_8 < VAR_3->usec_timeout) {
  FUNC_1("ib test on ring %d succeeded in %u usecs\n", VAR_5.fence->ring, VAR_8);
 } else {
  FUNC_0("radeon: ib test failed (scratch(0x%04X)=0x%08X)\n",
     VAR_6, VAR_7);
  VAR_9 = -VAR_0;
 }
free_ib:
 FUNC_7(VAR_3, &VAR_5);
free_scratch:
 FUNC_10(VAR_3, VAR_6);
 return VAR_9;
}
