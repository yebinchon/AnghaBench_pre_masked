
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {void* reg_safe_bm_size; void* reg_safe_bm; } ;
struct TYPE_3__ {TYPE_2__ r100; } ;
struct radeon_device {scalar_t__ family; TYPE_1__ config; } ;


 void* FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (struct radeon_device*) ;
 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 int FUNC_2 (struct radeon_device*) ;
 void* VAR_2 ;

__attribute__((used)) static void FUNC_3(struct radeon_device *VAR_3)
{
 if (FUNC_1(VAR_3)) {
  VAR_3->config.r100.reg_safe_bm = VAR_2;
  VAR_3->config.r100.reg_safe_bm_size = FUNC_0(VAR_2);
 } else if (VAR_3->family < VAR_0) {
  VAR_3->config.r100.reg_safe_bm = VAR_1;
  VAR_3->config.r100.reg_safe_bm_size = FUNC_0(VAR_1);
 } else {
  FUNC_2(VAR_3);
 }
}
