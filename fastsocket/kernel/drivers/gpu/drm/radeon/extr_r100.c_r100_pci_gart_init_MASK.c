
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int table_size; int num_gpu_pages; scalar_t__ ptr; } ;
struct radeon_device {TYPE_3__* asic; TYPE_1__ gart; } ;
struct TYPE_5__ {int * set_page; int * tlb_flush; } ;
struct TYPE_6__ {TYPE_2__ gart; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct radeon_device*) ;
 int FUNC_2 (struct radeon_device*) ;

int FUNC_3(struct radeon_device *VAR_2)
{
 int VAR_3;

 if (VAR_2->gart.ptr) {
  FUNC_0(1, "R100 PCI GART already initialized\n");
  return 0;
 }

 VAR_3 = FUNC_1(VAR_2);
 if (VAR_3)
  return VAR_3;
 VAR_2->gart.table_size = VAR_2->gart.num_gpu_pages * 4;
 VAR_2->asic->gart.tlb_flush = &VAR_1;
 VAR_2->asic->gart.set_page = &VAR_0;
 return FUNC_2(VAR_2);
}
