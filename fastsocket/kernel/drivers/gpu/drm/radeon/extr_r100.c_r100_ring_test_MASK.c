
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct radeon_ring {int dummy; } ;
struct radeon_device {unsigned int usec_timeout; } ;


 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (char*,unsigned int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (struct radeon_device*,struct radeon_ring*,int) ;
 int FUNC_7 (struct radeon_device*,struct radeon_ring*) ;
 int FUNC_8 (struct radeon_ring*,int) ;
 int FUNC_9 (struct radeon_device*,int) ;
 int FUNC_10 (struct radeon_device*,int*) ;

int FUNC_11(struct radeon_device *VAR_1, struct radeon_ring *VAR_2)
{
 uint32_t VAR_3;
 uint32_t VAR_4 = 0;
 unsigned VAR_5;
 int VAR_6;

 VAR_6 = FUNC_10(VAR_1, &VAR_3);
 if (VAR_6) {
  FUNC_0("radeon: cp failed to get scratch reg (%d).\n", VAR_6);
  return VAR_6;
 }
 FUNC_5(VAR_3, 0xCAFEDEAD);
 VAR_6 = FUNC_6(VAR_1, VAR_2, 2);
 if (VAR_6) {
  FUNC_0("radeon: cp failed to lock ring (%d).\n", VAR_6);
  FUNC_9(VAR_1, VAR_3);
  return VAR_6;
 }
 FUNC_8(VAR_2, FUNC_3(VAR_3, 0));
 FUNC_8(VAR_2, 0xDEADBEEF);
 FUNC_7(VAR_1, VAR_2);
 for (VAR_5 = 0; VAR_5 < VAR_1->usec_timeout; VAR_5++) {
  VAR_4 = FUNC_4(VAR_3);
  if (VAR_4 == 0xDEADBEEF) {
   break;
  }
  FUNC_2(1);
 }
 if (VAR_5 < VAR_1->usec_timeout) {
  FUNC_1("ring test succeeded in %d usecs\n", VAR_5);
 } else {
  FUNC_0("radeon: ring test failed (scratch(0x%04X)=0x%08X)\n",
     VAR_3, VAR_4);
  VAR_6 = -VAR_0;
 }
 FUNC_9(VAR_1, VAR_3);
 return VAR_6;
}
