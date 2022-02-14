
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {unsigned long vm_end; unsigned long vm_start; scalar_t__ vm_pgoff; } ;
typedef int resource_size_t ;


 int VAR_0 ;
 int FUNC_0 (int,unsigned long) ;
 scalar_t__ FUNC_1 (struct vm_area_struct*) ;

void FUNC_2(struct vm_area_struct *VAR_1, unsigned long VAR_2,
   unsigned long VAR_3)
{
 resource_size_t VAR_4;
 unsigned long VAR_5 = VAR_1->vm_end - VAR_1->vm_start;

 if (FUNC_1(VAR_1)) {

  VAR_4 = (resource_size_t)VAR_1->vm_pgoff << VAR_0;
  FUNC_0(VAR_4, VAR_5);
  return;
 }
}
