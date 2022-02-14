
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {unsigned long vm_end; unsigned long vm_start; } ;
typedef int resource_size_t ;
typedef int pgprot_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned long) ;
 scalar_t__ FUNC_2 (struct vm_area_struct*,unsigned long,int ,unsigned long*,int *) ;
 scalar_t__ FUNC_3 (struct vm_area_struct*) ;
 int FUNC_4 (int ,unsigned long,int *,int) ;

int FUNC_5(struct vm_area_struct *VAR_1)
{
 resource_size_t VAR_2;
 unsigned long VAR_3;
 unsigned long VAR_4 = VAR_1->vm_end - VAR_1->vm_start;
 pgprot_t VAR_5;

 if (FUNC_3(VAR_1)) {




  if (FUNC_2(VAR_1, VAR_1->vm_start, 0, &VAR_3, &VAR_2)) {
   FUNC_0(1);
   return -VAR_0;
  }
  VAR_5 = FUNC_1(VAR_3);
  return FUNC_4(VAR_2, VAR_4, &VAR_5, 1);
 }

 return 0;
}
