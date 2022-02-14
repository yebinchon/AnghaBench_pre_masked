
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {scalar_t__ vm_start; scalar_t__ vm_end; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct vm_area_struct*,scalar_t__,int,scalar_t__,int ) ;
 int FUNC_1 (void*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_4, struct vm_area_struct *VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_0(VAR_5,
  VAR_5->vm_start,
  FUNC_1((void *)((unsigned long)VAR_1)) >> VAR_3,
  VAR_5->vm_end-VAR_5->vm_start,
  VAR_2);

 if (VAR_6 != 0)
  return -VAR_0;

 return 0;
}
