
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {scalar_t__ vm_pgoff; int vm_page_prot; int vm_start; } ;
struct mbcs_soft {int gscr_addr; } ;
struct file {struct cx_dev* private_data; } ;
struct cx_dev {struct mbcs_soft* soft; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct vm_area_struct*,int ,int,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_4, struct vm_area_struct *VAR_5)
{
 struct cx_dev *VAR_6 = VAR_4->private_data;
 struct mbcs_soft *VAR_7 = VAR_6->soft;

 if (VAR_5->vm_pgoff != 0)
  return -VAR_1;

 VAR_5->vm_page_prot = FUNC_1(VAR_5->vm_page_prot);


 if (FUNC_2(VAR_5,
       VAR_5->vm_start,
       FUNC_0(VAR_7->gscr_addr) >> VAR_2,
       VAR_3,
       VAR_5->vm_page_prot))
  return -VAR_0;

 return 0;
}
