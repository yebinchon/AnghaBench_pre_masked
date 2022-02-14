
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {size_t vm_end; size_t vm_start; int vm_page_prot; int vm_pgoff; int * vm_ops; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct file*,int ,size_t,int ) ;
 int FUNC_1 (struct file*,int ,size_t,int *) ;
 int FUNC_2 (struct vm_area_struct*) ;
 int FUNC_3 (int ,size_t) ;
 scalar_t__ FUNC_4 (struct vm_area_struct*,size_t,int ,size_t,int ) ;
 int FUNC_5 (int ,size_t) ;

__attribute__((used)) static int FUNC_6(struct file * VAR_5, struct vm_area_struct * VAR_6)
{
 size_t VAR_7 = VAR_6->vm_end - VAR_6->vm_start;

 if (!FUNC_5(VAR_6->vm_pgoff, VAR_7))
  return -VAR_1;

 if (!FUNC_2(VAR_6))
  return -VAR_2;

 if (!FUNC_3(VAR_6->vm_pgoff, VAR_7))
  return -VAR_3;

 if (!FUNC_1(VAR_5, VAR_6->vm_pgoff, VAR_7,
      &VAR_6->vm_page_prot))
  return -VAR_1;

 VAR_6->vm_page_prot = FUNC_0(VAR_5, VAR_6->vm_pgoff,
       VAR_7,
       VAR_6->vm_page_prot);

 VAR_6->vm_ops = &VAR_4;


 if (FUNC_4(VAR_6,
       VAR_6->vm_start,
       VAR_6->vm_pgoff,
       VAR_7,
       VAR_6->vm_page_prot)) {
  return -VAR_0;
 }
 return 0;
}
