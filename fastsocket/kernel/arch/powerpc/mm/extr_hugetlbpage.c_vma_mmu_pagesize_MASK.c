
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_start; int vm_mm; } ;


 unsigned int FUNC_0 (int ,int ) ;
 unsigned long FUNC_1 (unsigned int) ;

unsigned long FUNC_2(struct vm_area_struct *VAR_0)
{
 unsigned int VAR_1 = FUNC_0(VAR_0->vm_mm, VAR_0->vm_start);

 return 1UL << FUNC_1(VAR_1);
}
