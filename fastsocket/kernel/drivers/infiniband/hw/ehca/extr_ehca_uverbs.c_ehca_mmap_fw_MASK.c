
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct vm_area_struct {scalar_t__ vm_end; scalar_t__ vm_start; int * vm_ops; int * vm_private_data; int vm_page_prot; } ;
struct TYPE_2__ {scalar_t__ fw_handle; } ;
struct h_galpas {TYPE_1__ user; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,scalar_t__,scalar_t__) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct vm_area_struct*,int,scalar_t__,int ) ;
 scalar_t__ FUNC_4 (int) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_5(struct vm_area_struct *VAR_5, struct h_galpas *VAR_6,
   u32 *VAR_7)
{
 int VAR_8;
 u64 VAR_9, VAR_10;

 VAR_9 = VAR_5->vm_end - VAR_5->vm_start;
 if (VAR_9 < VAR_1) {
  FUNC_1("invalid vsize=%lx", VAR_5->vm_end - VAR_5->vm_start);
  return -VAR_2;
 }

 VAR_10 = VAR_6->user.fw_handle;
 VAR_5->vm_page_prot = FUNC_2(VAR_5->vm_page_prot);
 FUNC_0("vsize=%llx physical=%llx", VAR_9, VAR_10);

 VAR_8 = FUNC_3(VAR_5, VAR_5->vm_start, VAR_10 >> VAR_0,
      VAR_5->vm_page_prot);
 if (FUNC_4(VAR_8)) {
  FUNC_1("remap_pfn_range() failed ret=%i", VAR_8);
  return -VAR_3;
 }

 VAR_5->vm_private_data = VAR_7;
 (*VAR_7)++;
 VAR_5->vm_ops = &VAR_4;

 return 0;
}
