
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {unsigned long vm_start; int * vm_ops; } ;
struct TYPE_2__ {int mm; } ;


 TYPE_1__* VAR_0 ;
 struct vm_area_struct* FUNC_0 (int ,unsigned long) ;
 int VAR_1 ;

struct vm_area_struct *FUNC_1(unsigned long VAR_2)
{
 struct vm_area_struct *VAR_3;

 VAR_3 = FUNC_0(VAR_0->mm, VAR_2);
 if (VAR_3 && VAR_3->vm_start <= VAR_2 && VAR_3->vm_ops == &VAR_1)
  return VAR_3;
 return ((void*)0);
}
