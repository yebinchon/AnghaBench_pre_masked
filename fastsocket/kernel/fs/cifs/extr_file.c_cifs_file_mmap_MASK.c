
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int * vm_ops; } ;
struct file {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int,char*,int) ;
 int VAR_0 ;
 int FUNC_3 (struct file*) ;
 int FUNC_4 (struct file*,struct vm_area_struct*) ;

int FUNC_5(struct file *VAR_1, struct vm_area_struct *VAR_2)
{
 int VAR_3, VAR_4;

 VAR_4 = FUNC_1();
 VAR_3 = FUNC_3(VAR_1);
 if (VAR_3) {
  FUNC_2(1, "Validation prior to mmap failed, error=%d", VAR_3);
  FUNC_0(VAR_4);
  return VAR_3;
 }
 VAR_3 = FUNC_4(VAR_1, VAR_2);
 if (VAR_3 == 0)
  VAR_2->vm_ops = &VAR_0;
 FUNC_0(VAR_4);
 return VAR_3;
}
