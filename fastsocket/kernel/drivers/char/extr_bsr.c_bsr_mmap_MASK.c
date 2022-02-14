
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {unsigned long vm_end; unsigned long vm_start; int vm_page_prot; } ;
struct file {struct bsr_dev* private_data; } ;
struct bsr_dev {unsigned long bsr_len; int bsr_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (struct vm_area_struct*,unsigned long,int,unsigned long,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct vm_area_struct*,unsigned long,int,int ) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_4, struct vm_area_struct *VAR_5)
{
 unsigned long VAR_6 = VAR_5->vm_end - VAR_5->vm_start;
 struct bsr_dev *VAR_7 = VAR_4->private_data;
 int VAR_8;

 VAR_5->vm_page_prot = FUNC_1(VAR_5->vm_page_prot);


 if (VAR_7->bsr_len < VAR_3 && VAR_6 == VAR_3)
  VAR_8 = FUNC_2(VAR_5, VAR_5->vm_start, VAR_7->bsr_addr >> 12,
       VAR_5->vm_page_prot);
 else if (VAR_6 <= VAR_7->bsr_len)
  VAR_8 = FUNC_0(VAR_5, VAR_5->vm_start,
      VAR_7->bsr_addr >> VAR_2,
      VAR_6, VAR_5->vm_page_prot);
 else
  return -VAR_1;

 if (VAR_8)
  return -VAR_0;

 return 0;
}
