
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_flags; } ;
struct file {int f_mapping; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct file*,struct vm_area_struct*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_2, struct vm_area_struct *VAR_3)
{

 if (VAR_3->vm_flags & VAR_1)
  return -VAR_0;

 FUNC_1(VAR_2->f_mapping);

 return FUNC_0(VAR_2, VAR_3);
}
