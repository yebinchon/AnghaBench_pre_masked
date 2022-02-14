
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {scalar_t__ vm_pgoff; int vm_end; int vm_start; int vm_page_prot; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct vm_area_struct*,int,int,int,int ) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_5, struct vm_area_struct *VAR_6)
{
 int VAR_7 = -VAR_1;
 int VAR_8;

 if (VAR_6->vm_pgoff != 0)
  goto out;

 VAR_8 = VAR_6->vm_end - VAR_6->vm_start;
 if (VAR_8 > VAR_3)
  return -VAR_0;





 if (FUNC_0(VAR_6, VAR_6->vm_start, VAR_4 >> VAR_2, VAR_8,
       VAR_6->vm_page_prot))
  goto out;
 VAR_7 = 0;
out:
 return VAR_7;
}
