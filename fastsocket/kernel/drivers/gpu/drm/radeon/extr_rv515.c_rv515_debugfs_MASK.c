
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_device {int dummy; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct radeon_device*) ;
 scalar_t__ FUNC_2 (struct radeon_device*) ;
 scalar_t__ FUNC_3 (struct radeon_device*) ;

void FUNC_4(struct radeon_device *VAR_0)
{
 if (FUNC_1(VAR_0)) {
  FUNC_0("Failed to register debugfs file for RBBM !\n");
 }
 if (FUNC_3(VAR_0)) {
  FUNC_0("Failed to register debugfs file for pipes !\n");
 }
 if (FUNC_2(VAR_0)) {
  FUNC_0("Failed to register debugfs file for pipes !\n");
 }
}
