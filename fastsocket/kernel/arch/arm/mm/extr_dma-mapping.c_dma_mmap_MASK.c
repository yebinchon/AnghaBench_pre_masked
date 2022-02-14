
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {unsigned long vm_end; unsigned long vm_start; unsigned long vm_pgoff; int vm_page_prot; } ;
struct device {int dummy; } ;
struct arm_vm_region {unsigned long vm_end; unsigned long vm_start; int vm_pages; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 struct arm_vm_region* FUNC_0 (int *,unsigned long) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct vm_area_struct*,unsigned long,scalar_t__,unsigned long,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_4, struct vm_area_struct *VAR_5,
      void *VAR_6, dma_addr_t VAR_7, size_t VAR_8)
{
 int VAR_9 = -VAR_0;
 return VAR_9;
}
