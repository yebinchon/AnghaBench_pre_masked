
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long u64 ;
struct vm_area_struct {unsigned long vm_pgoff; unsigned long vm_end; int vm_start; int vm_page_prot; } ;
struct ocrdma_ucontext {struct ocrdma_dev* dev; } ;
struct TYPE_2__ {unsigned long db_total_size; unsigned long db_page_size; unsigned long dpp_unmapped_len; scalar_t__ dpp_unmapped_addr; scalar_t__ unmapped_db; } ;
struct ocrdma_dev {TYPE_1__ nic_info; } ;
struct ib_ucontext {int dummy; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 struct ocrdma_ucontext* FUNC_0 (struct ib_ucontext*) ;
 int FUNC_1 (struct vm_area_struct*,int,unsigned long,unsigned long,int ) ;
 int FUNC_2 (struct ocrdma_ucontext*,unsigned long,unsigned long) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct vm_area_struct*,int,unsigned long,unsigned long,int ) ;

int FUNC_5(struct ib_ucontext *VAR_3, struct vm_area_struct *VAR_4)
{
 struct ocrdma_ucontext *VAR_5 = FUNC_0(VAR_3);
 struct ocrdma_dev *VAR_6 = VAR_5->dev;
 unsigned long VAR_7 = VAR_4->vm_pgoff << VAR_1;
 u64 VAR_8 = (u64) VAR_6->nic_info.unmapped_db;
 unsigned long VAR_9 = (VAR_4->vm_end - VAR_4->vm_start);
 int VAR_10 = 0;
 bool VAR_11;

 if (VAR_4->vm_start & (VAR_2 - 1))
  return -VAR_0;
 VAR_11 = FUNC_2(VAR_5, VAR_4->vm_pgoff << VAR_1, VAR_9);
 if (!VAR_11)
  return -VAR_0;

 if ((VAR_7 >= VAR_8) && (VAR_7 <= (VAR_8 +
  VAR_6->nic_info.db_total_size)) &&
  (VAR_9 <= VAR_6->nic_info.db_page_size)) {

  VAR_10 = FUNC_1(VAR_4, VAR_4->vm_start, VAR_4->vm_pgoff,
         VAR_9, VAR_4->vm_page_prot);
 } else if (VAR_6->nic_info.dpp_unmapped_len &&
  (VAR_7 >= (u64) VAR_6->nic_info.dpp_unmapped_addr) &&
  (VAR_7 <= (u64) (VAR_6->nic_info.dpp_unmapped_addr +
   VAR_6->nic_info.dpp_unmapped_len)) &&
  (VAR_9 <= VAR_6->nic_info.dpp_unmapped_len)) {

  VAR_4->vm_page_prot = FUNC_3(VAR_4->vm_page_prot);
  VAR_10 = FUNC_1(VAR_4, VAR_4->vm_start, VAR_4->vm_pgoff,
         VAR_9, VAR_4->vm_page_prot);
 } else {

  VAR_10 = FUNC_4(VAR_4, VAR_4->vm_start,
      VAR_4->vm_pgoff, VAR_9, VAR_4->vm_page_prot);
 }
 return VAR_10;
}
