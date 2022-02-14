
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int * vm_ops; int vm_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vm_area_struct*) ;

__attribute__((used)) static int FUNC_1(struct vm_area_struct *VAR_2)
{
 VAR_2->vm_flags |= VAR_0;
 VAR_2->vm_ops = &VAR_1;
 FUNC_0(VAR_2);
 return 0;
}
