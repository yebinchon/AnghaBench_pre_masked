
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {int vm_flags; TYPE_1__* vm_file; struct vm_area_struct* vm_next; } ;
struct mm_struct {struct vm_area_struct* mmap; } ;
struct TYPE_2__ {int f_path; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (int *) ;

__attribute__((used)) static unsigned long FUNC_1(struct mm_struct *VAR_2)
{
 unsigned long VAR_3 = VAR_0;
 struct vm_area_struct *VAR_4;

 if (!VAR_2)
  goto out;

 for (VAR_4 = VAR_2->mmap; VAR_4; VAR_4 = VAR_4->vm_next) {
  if (!VAR_4->vm_file)
   continue;
  if (!(VAR_4->vm_flags & VAR_1))
   continue;
  VAR_3 = FUNC_0(&VAR_4->vm_file->f_path);
  break;
 }

out:
 return VAR_3;
}
