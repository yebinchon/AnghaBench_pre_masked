
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct radeon_ring {int dummy; } ;
struct radeon_ib {int* ptr; int length_dw; int fence; } ;
struct radeon_device {unsigned int usec_timeout; } ;


 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (char*,unsigned int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int FUNC_3 (int,int ) ;
 void* FUNC_4 (int ) ;
 int VAR_1 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (struct radeon_device*,struct radeon_ib*) ;
 int FUNC_9 (struct radeon_device*,int ,struct radeon_ib*,int *,int) ;
 int FUNC_10 (struct radeon_device*,struct radeon_ib*,int *) ;
 int FUNC_11 (struct radeon_device*,int) ;
 int FUNC_12 (struct radeon_device*,int*) ;

int FUNC_13(struct radeon_device *VAR_2, struct radeon_ring *VAR_3)
{
 struct radeon_ib VAR_4;
 uint32_t VAR_5;
 uint32_t VAR_6 = 0;
 unsigned VAR_7;
 int VAR_8;

 VAR_8 = FUNC_12(VAR_2, &VAR_5);
 if (VAR_8) {
  FUNC_0("radeon: failed to get scratch reg (%d).\n", VAR_8);
  return VAR_8;
 }
 FUNC_6(VAR_5, 0xCAFEDEAD);
 VAR_8 = FUNC_9(VAR_2, VAR_1, &VAR_4, ((void*)0), 256);
 if (VAR_8) {
  FUNC_0("radeon: failed to get ib (%d).\n", VAR_8);
  goto free_scratch;
 }
 VAR_4.ptr[0] = FUNC_3(VAR_5, 0);
 VAR_4.ptr[1] = 0xDEADBEEF;
 VAR_4.ptr[2] = FUNC_4(0);
 VAR_4.ptr[3] = FUNC_4(0);
 VAR_4.ptr[4] = FUNC_4(0);
 VAR_4.ptr[5] = FUNC_4(0);
 VAR_4.ptr[6] = FUNC_4(0);
 VAR_4.ptr[7] = FUNC_4(0);
 VAR_4.length_dw = 8;
 VAR_8 = FUNC_10(VAR_2, &VAR_4, ((void*)0));
 if (VAR_8) {
  FUNC_0("radeon: failed to schedule ib (%d).\n", VAR_8);
  goto free_ib;
 }
 VAR_8 = FUNC_7(VAR_4.fence, 0);
 if (VAR_8) {
  FUNC_0("radeon: fence wait failed (%d).\n", VAR_8);
  goto free_ib;
 }
 for (VAR_7 = 0; VAR_7 < VAR_2->usec_timeout; VAR_7++) {
  VAR_6 = FUNC_5(VAR_5);
  if (VAR_6 == 0xDEADBEEF) {
   break;
  }
  FUNC_2(1);
 }
 if (VAR_7 < VAR_2->usec_timeout) {
  FUNC_1("ib test succeeded in %u usecs\n", VAR_7);
 } else {
  FUNC_0("radeon: ib test failed (scratch(0x%04X)=0x%08X)\n",
     VAR_5, VAR_6);
  VAR_8 = -VAR_0;
 }
free_ib:
 FUNC_8(VAR_2, &VAR_4);
free_scratch:
 FUNC_11(VAR_2, VAR_5);
 return VAR_8;
}
