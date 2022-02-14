
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int table_size; int num_gpu_pages; scalar_t__ robj; } ;
struct radeon_device {TYPE_2__* asic; TYPE_3__ gart; } ;
struct TYPE_4__ {int * set_page; int * tlb_flush; } ;
struct TYPE_5__ {TYPE_1__ gart; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (struct radeon_device*) ;
 int FUNC_3 (struct radeon_device*) ;
 int FUNC_4 (struct radeon_device*) ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_5(struct radeon_device *VAR_2)
{
 int VAR_3;

 if (VAR_2->gart.robj) {
  FUNC_1(1, "RV370 PCIE GART already initialized\n");
  return 0;
 }

 VAR_3 = FUNC_2(VAR_2);
 if (VAR_3)
  return VAR_3;
 VAR_3 = FUNC_4(VAR_2);
 if (VAR_3)
  FUNC_0("Failed to register debugfs file for PCIE gart !\n");
 VAR_2->gart.table_size = VAR_2->gart.num_gpu_pages * 4;
 VAR_2->asic->gart.tlb_flush = &VAR_1;
 VAR_2->asic->gart.set_page = &VAR_0;
 return FUNC_3(VAR_2);
}
