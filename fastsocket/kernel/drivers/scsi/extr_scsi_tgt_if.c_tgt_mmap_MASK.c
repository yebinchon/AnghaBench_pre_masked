
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_end; unsigned long vm_start; scalar_t__ vm_pgoff; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct vm_area_struct*,unsigned long,int *) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_4, struct vm_area_struct *VAR_5)
{
 unsigned long VAR_6;
 int VAR_7;

 if (VAR_5->vm_pgoff)
  return -VAR_0;

 if (VAR_5->vm_end - VAR_5->vm_start != VAR_1 * 2) {
  FUNC_0("mmap size must be %lu, not %lu \n",
   VAR_1 * 2, VAR_5->vm_end - VAR_5->vm_start);
  return -VAR_0;
 }

 VAR_6 = VAR_5->vm_start;
 VAR_7 = FUNC_1(VAR_5, VAR_6, &VAR_3);
 if (VAR_7)
  return VAR_7;
 VAR_7 = FUNC_1(VAR_5, VAR_6 + VAR_1, &VAR_2);

 return VAR_7;
}
