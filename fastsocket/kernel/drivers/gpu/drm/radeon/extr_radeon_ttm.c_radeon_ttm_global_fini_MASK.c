
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ref; } ;
struct TYPE_4__ {int mem_global_referenced; int mem_global_ref; TYPE_1__ bo_global_ref; } ;
struct radeon_device {TYPE_2__ mman; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct radeon_device *VAR_0)
{
 if (VAR_0->mman.mem_global_referenced) {
  FUNC_0(&VAR_0->mman.bo_global_ref.ref);
  FUNC_0(&VAR_0->mman.mem_global_ref);
  VAR_0->mman.mem_global_referenced = 0;
 }
}
